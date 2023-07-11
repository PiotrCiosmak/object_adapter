#include "../include/Adapter.hpp"

Adapter::Adapter(const std::shared_ptr<Adaptee>& new_adaptee) : adaptee{new_adaptee}
{}

std::string Adapter::request() const
{
    std::string to_reverse = this->adaptee->specificRequest();
    std::reverse(to_reverse.begin(), to_reverse.end());
    return "Adapter: (TRANSLATED)" + to_reverse;
}

