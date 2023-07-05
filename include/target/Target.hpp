#pragma once

#include <iostream>

class Target
{
public:
    virtual ~Target() = default;

    virtual std::string request() const;
};