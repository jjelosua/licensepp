//
//  rsa.h
//  License++
//
//  Copyright © 2018-present @abumq (Majid Q.)
//
//  See https://github.com/abumq/licensepp/blob/master/LICENSE
//

#ifndef LICENSEPP_RSA_h
#define LICENSEPP_RSA_h

#include <string>

namespace licensepp {

///
/// \brief RSA crypto wrappers
///
class RSA
{
public:

    using PrivateKey = std::string;
    using PublicKey = std::string;

    static PrivateKey loadPrivateKey(const std::string& pem, const std::string& secret = "") {
        (void) secret;
        return pem;
    }

    static PublicKey loadPublicKey(const std::string& pem) {
        return pem;
    }

    struct KeyPair {
        PrivateKey privateKey;
        PublicKey publicKey;
    };

    static std::string encrypt(const std::string& data, const PublicKey& publicKey);

    static std::string decrypt(std::string& data, const PrivateKey& privateKey, const std::string& secret = "");

    static std::string sign(const std::string& data, const PrivateKey& key, const std::string& secret = "");

    static bool verify(const std::string& data, const std::string& signHex, const PublicKey& key);

    static bool verifyKeyPair(const PrivateKey& privateKey, const PublicKey& publicKey, const std::string& secret = "");

};
}

#endif /* LICENSEPP_RSA_h */
