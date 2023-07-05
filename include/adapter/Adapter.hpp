#pragma once

#include <iostream>
#include "../target/Target.hpp"
#include "../adaptee/Adaptee.hpp"

class Adapter : public Target
{
public:
    Adapter(Adaptee *adaptee);
    std::string request() const override;
private:
    Adaptee* adaptee;
};