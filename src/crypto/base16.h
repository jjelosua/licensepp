//
//  base16.h
//  License++
//
//  Copyright © 2018-present @abumq (Majid Q.)
//
//  See https://github.com/abumq/licensepp/blob/master/LICENSE
//

#ifndef LICENSEPP_Base16_h
#define LICENSEPP_Base16_h

#include <string>

namespace licensepp {

///
/// \brief Base16 encoding wrappers
///
class Base16
{
public:
    static std::string decode(const std::string& encoded);
    static std::string encode(const std::string& raw);
};
}

#endif /* LICENSEPP_Base16_h */
