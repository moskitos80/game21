#include "Game.hpp"
#include "States/AskPlayerBid.hpp"

namespace game21
{    
    int AskPlayerBid::execute(void __attribute_maybe_unused__ *context)
    {
        std::cout<<"AskPlayerBid\n";
        return static_cast<int>(Scene::Finish);
    }

} // namespace game21
