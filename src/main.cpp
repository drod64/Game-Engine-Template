#include <iostream>
#include <conduit/core/World.hpp>

int main()
{
    conduit::core::World testWorld;

    auto e = testWorld.m_registry.create();

    std::cout << "Hello World!\n";
    std::cout << "Entity: " << static_cast<uint32_t>(e) << '\n';
    
    return 0;
}