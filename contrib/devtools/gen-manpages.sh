#!/usr/bin/env bash

export LC_ALL=C
TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
BUILDDIR=${BUILDDIR:-$TOPDIR}

BINDIR=${BINDIR:-$BUILDDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

BOGCOIND=${BOGCOIND:-$BINDIR/bogcoind}
BOGCOINCLI=${BOGCOINCLI:-$BINDIR/bogcoin-cli}
BOGCOINTX=${BOGCOINTX:-$BINDIR/bogcoin-tx}
BOGCOINQT=${BOGCOINQT:-$BINDIR/qt/bogcoin-qt}

[ ! -x $BOGCOIND ] && echo "$BOGCOIND not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
BOGVER=($($BOGCOINCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for bogcoind if --version-string is not set,
# but has different outcomes for bogcoin-qt and bogcoin-cli.
echo "[COPYRIGHT]" > footer.h2m
$BOGCOIND --version | sed -n '1!p' >> footer.h2m

for cmd in $BOGCOIND $BOGCOINCLI $BOGCOINTX $BOGCOINQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${BOGVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${BOGVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
