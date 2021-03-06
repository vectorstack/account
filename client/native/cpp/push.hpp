// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from auth.djinni

#pragma once

#include <memory>
#include <string>

namespace act {

class PushListener;

class Push {
public:
    virtual ~Push() {}

    static std::shared_ptr<Push> create(const std::string & host, const std::string & device, const std::shared_ptr<PushListener> & listener);

    virtual void connect() = 0;
};

}  // namespace act
