// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from auth.djinni

#pragma once

#include "auth_reply.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class native_auth_reply final {
public:
    using CppType = ::act::AuthReply;
    using JniType = jobject;

    using Boxed = native_auth_reply;

    ~native_auth_reply();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    native_auth_reply();
    friend ::djinni::JniClass<native_auth_reply>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("me/ppxpp/account/auth/AuthReply") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/lang/String;Lme/ppxpp/account/auth/AuthInfo;)V") };
    const jfieldID field_mErr { ::djinni::jniGetFieldID(clazz.get(), "mErr", "I") };
    const jfieldID field_mMsg { ::djinni::jniGetFieldID(clazz.get(), "mMsg", "Ljava/lang/String;") };
    const jfieldID field_mData { ::djinni::jniGetFieldID(clazz.get(), "mData", "Lme/ppxpp/account/auth/AuthInfo;") };
};

}  // namespace djinni_generated
