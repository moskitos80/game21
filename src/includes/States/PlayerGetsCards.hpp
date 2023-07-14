#ifndef PLAYER_GETS_CARDS_H
#define PLAYER_GETS_CARDS_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class PlayerGetsCards : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) override;
        ~PlayerGetsCards() {}
    };
} // namespace game21


#endif /* PLAYER_GETS_CARDS_HEADER_GUARD */