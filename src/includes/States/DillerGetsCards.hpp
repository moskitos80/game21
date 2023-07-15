#ifndef DILLER_GETS_CARDS_H
#define DILLER_GETS_CARDS_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class DillerGetsCards : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) noexcept(false) override;
        ~DillerGetsCards() {}
    };
} // namespace game21


#endif /* DILLER_GETS_CARDS_HEADER_GUARD */