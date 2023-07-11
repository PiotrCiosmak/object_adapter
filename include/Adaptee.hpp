#pragma once

#include <iostream>

class Adaptee
{
public:
    [[nodiscard]] std::string specificRequest() const;
};