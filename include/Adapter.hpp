#pragma once

#include <memory>
#include "Target.hpp"
#include "Adaptee.hpp"

class Adapter : public Target
{
public:
    explicit Adapter(const std::shared_ptr<Adaptee>& new_adaptee);
    [[nodiscard]] std::string request() const override;

private:
    std::shared_ptr<Adaptee> adaptee;
};