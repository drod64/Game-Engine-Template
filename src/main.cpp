#include <iostream>
#include <entt/entt.hpp>
#include <SM/Vec3.h>

int main()
{
    sm::Vec3 testVec(4, 5, 3);
    entt::registry testRegistry;
    auto e = testRegistry.create();
    std::cout << "Hello World!\n";
    return 0;
}