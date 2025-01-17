// Copyright (c) 2018 The PIVX developers
// Copyright (c) 2019 The BogCoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BOGCOIN_INVALID_H
#define BOGCOIN_INVALID_H

#include <univalue/include/univalue.h>
#include <primitives/transaction.h>

namespace invalid_out
{
    extern std::set<COutPoint> setInvalidOutPoints;

    UniValue read_json(const std::string& jsondata);

    bool ContainsOutPoint(const COutPoint& out);
    bool LoadOutpoints();
    bool LoadSerials();
}

#endif //BOGCOIN_INVALID_H
