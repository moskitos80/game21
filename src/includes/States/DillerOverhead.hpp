#ifndef DLR_OVERHEAD_H
#define DLR_OVERHEAD_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class DillerOverhead : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) override;
        ~DillerOverhead() {}
    };
} // namespace game21

#endif /* DLR_OVERHEAD */