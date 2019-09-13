#!/bin/bash
# create multiresolution windows icon
#mainnet
ICON_SRC=../../src/qt/res/icons/bogcoin.png
ICON_DST=../../src/qt/res/icons/bogcoin.ico
convert ${ICON_SRC} -resize 16x16 bogcoin-16.png
convert ${ICON_SRC} -resize 32x32 bogcoin-32.png
convert ${ICON_SRC} -resize 48x48 bogcoin-48.png
convert bogcoin-16.png bogcoin-32.png bogcoin-48.png ${ICON_DST}
#testnet
ICON_SRC=../../src/qt/res/icons/bogcoin_testnet.png
ICON_DST=../../src/qt/res/icons/bogcoin_testnet.ico
convert ${ICON_SRC} -resize 16x16 bogcoin-16.png
convert ${ICON_SRC} -resize 32x32 bogcoin-32.png
convert ${ICON_SRC} -resize 48x48 bogcoin-48.png
convert bogcoin-16.png bogcoin-32.png bogcoin-48.png ${ICON_DST}
rm bogcoin-16.png bogcoin-32.png bogcoin-48.png
