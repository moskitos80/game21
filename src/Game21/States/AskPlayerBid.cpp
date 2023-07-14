#include "Game.hpp"
#include "States/AskPlayerBid.hpp"

namespace game21
{
    Scene AskPlayerBid::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout<<"AskPlayerBid\n";
        return Scene::Finish;
    }

} // namespace game21
