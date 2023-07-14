#ifndef PLR_OVERHEAD_H
#define PLR_OVERHEAD_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class PlayerOverhead : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) override;
        ~PlayerOverhead() {}
    };
} // namespace game21

#endif /* PLR_OVERHEAD */