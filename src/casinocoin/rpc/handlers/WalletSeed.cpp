//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012-2014 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

//==============================================================================
/*
    2017-06-30  ajochems        Refactored for casinocoin
*/
//==============================================================================

#include <BeastConfig.h>
#include <casinocoin/json/json_value.h>
#include <casinocoin/net/RPCErr.h>
#include <casinocoin/protocol/ErrorCodes.h>
#include <casinocoin/protocol/JsonFields.h>
#include <casinocoin/protocol/Seed.h>
#include <casinocoin/rpc/Context.h>

namespace casinocoin {

// {
//   secret: <string>
// }
Json::Value doWalletSeed (RPC::Context& context)
{
    boost::optional<Seed> seed;

    bool bSecret = context.params.isMember (jss::secret);

    if (bSecret)
        seed = parseGenericSeed (context.params[jss::secret].asString ());
    else
        seed = randomSeed ();

    if (!seed)
        return rpcError (rpcBAD_SEED);

    Json::Value obj (Json::objectValue);
    obj[jss::seed]     = toBase58(*seed);
    obj[jss::key]      = seedAs1751(*seed);
    obj[jss::deprecated] = "Use wallet_propose instead";
    return obj;
}

} // casinocoin
