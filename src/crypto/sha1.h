// Copyright (c) 2014 The Bogcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BOGCOIN_CRYPTO_SHA1_H
#define BOGCOIN_CRYPTO_SHA1_H

#include <stdint.h>
#include <stdlib.h>

/** A hasher class for SHA1. */
class CSHA1
{
private:
    uint32_t s[5];
    unsigned char buf[64];
    size_t bytes;

public:
    static const size_t OUTPUT_SIZE = 20;

    CSHA1();
    CSHA1& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CSHA1& Reset();
};

#endif // BOGCOIN_CRYPTO_SHA1_H
