#include "States/DeadHeat.hpp"
#include "Game.hpp"

namespace game21
{
    Scene DeadHeat::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "DeadHeat\n";
        return Scene::Finish;
    }

} // namespace game21