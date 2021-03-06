// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from auth.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <string>

namespace act {

struct AuthInfo;
struct AuthReply;
struct UserInfo;

class Auth {
public:
    virtual ~Auth() {}

    static std::shared_ptr<Auth> create(const std::string & host);

    virtual AuthReply sign_up(const UserInfo & user) = 0;

    virtual AuthReply sign_in(const UserInfo & user) = 0;

    virtual AuthReply sign_out(const AuthInfo & auth) = 0;

    virtual int32_t update(const UserInfo & user) = 0;
};

}  // namespace act
