#pragma once

#include <iostream>

class Target
{
public:
    [[nodiscard]] virtual std::string request() const;
    virtual ~Target() = default;
};