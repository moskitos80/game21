#include "States/AskPlayerBalance.hpp"
#include "Game.hpp"

namespace game21
{
    Scene AskPlayerBalance::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "AskPlayerBalance\n";
        return Scene::AskPlayerBid;
    }

} // namespace game21
