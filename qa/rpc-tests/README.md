Regression tests of RPC interface
=================================

### [python-bogcoinrpc](https://github.com/jgarzik/python-bogcoinrpc)
Git subtree of [https://github.com/jgarzik/python-bogcoinrpc](https://github.com/jgarzik/python-bogcoinrpc).
Changes to python-bogcoinrpc should be made upstream, and then
pulled here using git subtree.

### [test_framework.py](test_framework.py)
Base class for new regression tests.

### [listtransactions.py](listtransactions.py)
Tests for the listtransactions RPC call.

### [util.py](util.sh)
Generally useful functions.

Bash-based tests, to be ported to Python:
-----------------------------------------
- wallet.sh : Exercise wallet send/receive code.
- walletbackup.sh : Exercise wallet backup / dump / import
- txnmall.sh : Test proper accounting of malleable transactions
- conflictedbalance.sh : More testing of malleable transaction handling

Notes
=====

A 200-block -regtest blockchain and wallets for four nodes
is created the first time a regression test is run and
is stored in the cache/ directory. Each node has 25 mature
blocks (25*50=1250 BOG) in their wallet.

After the first run, the cache/ blockchain and wallets are
copied into a temporary directory and used as the initial
test state.

If you get into a bad state, you should be able
to recover with:

```bash
rm -rf cache
killall bogcoind
```
