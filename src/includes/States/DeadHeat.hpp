#ifndef DEAD_HEAT_H
#define DEAD_HEAT_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class DeadHeat : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) override;
        ~DeadHeat() {}
    };
} // namespace game21

#endif /* DEAD_HEAT_HEADER_GUARD */