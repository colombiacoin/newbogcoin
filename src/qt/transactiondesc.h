// Copyright (c) 2011-2013 The Bogcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BOGCOIN_QT_TRANSACTIONDESC_H
#define BOGCOIN_QT_TRANSACTIONDESC_H

#include <QObject>
#include <QString>

class TransactionRecord;

class CWallet;
class CWalletTx;

/** Provide a human-readable extended HTML description of a transaction.
 */
class TransactionDesc : public QObject
{
    Q_OBJECT

public:
    static QString toHTML(CWallet* wallet, CWalletTx& wtx, TransactionRecord* rec, int unit);

private:
    TransactionDesc() {}

    static QString FormatTxStatus(const CWalletTx& wtx);
};

#endif // BOGCOIN_QT_TRANSACTIONDESC_H
