// Copyright (c) 2011-2013 The Bogcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BOGCOIN_QT_PROPOSALDESCRIPTIONDIALOG_H
#define BOGCOIN_QT_PROPOSALDESCRIPTIONDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

class ProposalDescriptionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProposalDescriptionDialog(const QModelIndex& idx, QWidget* parent = 0);

private Q_SLOTS:
    void closeButton();
};

#endif // BOGCOIN_QT_PROPOSALDESCRIPTIONDIALOG_H
