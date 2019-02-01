//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

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
    2017-06-26  ajochems        Refactored for casinocoin
    2018-01-11  jrojek          added KYC
*/
//==============================================================================

#include <string>
#include <vector>

namespace casinocoin {

namespace detail {

/** Amendments that this server supports and enables by default */
std::vector<std::string>
preEnabledAmendments ()
{
    return
    {
    };
}

/** Amendments that this server supports, but doesn't enable by default */
std::vector<std::string>
supportedAmendments ()
{
    return
    {
        { "C6970A8B603D8778783B61C0D445C23D1633CCFAEF0D43E7DBCD1521D34BD7C3 SHAMapV2" },
        { "4C97EBA926031A7CF7D7B36FDE3ED66DDA5421192D63DE53FFB46E43B9DC8373 MultiSign" },
        { "C1B8D934087225F509BEB5A8EC24447854713EE447D277F69545ABFA0E0FD490 Tickets" },
        { "6781F8368C4771B83E8B821D88F580202BCB4228075297B19E4FDC5233F1EFDC TrustSetAuth" },
        { "42426C4D4F1009EE67080A9B7965B44656D7714D104A72F9B4369F97ABF044EE FeeEscalation" },
        { "9178256A980A86CF3D70D0260A7DA6402AAFE43632FDBCB88037978404188871 OwnerPaysFee" },
        { "08DE7D96082187F6E6578530258C77FAABABE4C20474BDB82F04B021F1A68647 PayChan" },
        { "740352F2412A9909880C23A559FCECEDA3BE2126FED62FC7660D628A06927F11 Flow" },
        { "1562511F573A19AE9BD103B5D6B9E01B3B46805AEC5D3C4805C902B514399146 CryptoConditions" },
        { "532651B4FD58DF8922A49BA101AB3E996E5BFBF95A913B3E392504863E63B164 TickSize" },
        { "E2E6F2866106419B88C50045ACE96368558C345566AC8F2BDF5A5B5587F0E6FA fix1368" },
        { "07D43DCE529B15A10827E5E04943B496762F9A88E3268269D69C44BE49E21104 Escrow" },
        { "86E83A7D2ECE3AD5FA87AB2195AE015C950469ABF0B72EAACED318F74886AE90 CryptoConditionsSuite" },
        { "42EEA5E28A97824821D4EF97081FE36A54E9593C6E4F20CBAE098C69D2E072DC fix1373" },
        { "DC9CA96AEA1DCF83E527D1AFC916EFAF5D27388ECA4060A88817C1238CAEE0BF EnforceInvariants" },
        { "3012E8230864E95A58C60FD61430D7E1B4D3353195F2981DC12B0C7C0950FFAC FlowCross" },
        { "9B84F266A5C412EBAC91FAF30CD9E70BE5B04E0EF94E89FC605DF4068307B1E8 KYC" },
        { "2B36E5B86317C05BF3B357EF84427200643D994D451EC7C0CEE45709BA31D908 KYCIPTracking" },
        { "9D2E63B733F45F5CDA75F5967A8AEA7E0D8E4CE0CFD664F57631D1BF6E66DAB8 ConfigObject" }
    };
}

}

}

