#ifndef CONDUIT_WORLD_HPP
#define CONDUIT_WORLD_HPP
#include <entt/entt.hpp>

namespace conduit::core {
class World {
public:
    entt::registry m_registry;

    void test();
}; // class World
} // namespace conduit::core

#endif // CONDUIT_WORLD_HPP