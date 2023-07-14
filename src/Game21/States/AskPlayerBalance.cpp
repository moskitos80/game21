#include "Game.hpp"
#include "States/AskPlayerBalance.hpp"

namespace game21
{    
    int AskPlayerBalance::execute(void __attribute_maybe_unused__ *context)
    {
        std::cout<<"AskPlayerBalance\n";
        return static_cast<int>(Scene::AskPlayerBalance);
    }

} // namespace game21
