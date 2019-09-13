// Copyright (c) 2011-2014 The Bogcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BOGCOIN_QT_BOGCOINADDRESSVALIDATOR_H
#define BOGCOIN_QT_BOGCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BogcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BogcoinAddressEntryValidator(QObject* parent);

    State validate(QString& input, int& pos) const;
};

/** Bogcoin address widget validator, checks for a valid bogcoin address.
 */
class BogcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BogcoinAddressCheckValidator(QObject* parent);

    State validate(QString& input, int& pos) const;
};

#endif // BOGCOIN_QT_BOGCOINADDRESSVALIDATOR_H
