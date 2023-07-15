#ifndef DLR_GETS_MORE_CARDS_H
#define DLR_GETS_MORE_CARDS_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class DillerGetsMoreCards : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) noexcept(false) override;
        ~DillerGetsMoreCards() {}
    };
} // namespace game21

#endif /* DLR_GETS_MORE_CARDS_HEADER_GUARD */