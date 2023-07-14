#ifndef PLR_GETS_MORE_CARDS_H
#define PLR_GETS_MORE_CARDS_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class PlayerGetsMoreCards : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) override;
        ~PlayerGetsMoreCards() {}
    };
} // namespace game21

#endif /* PLR_GETS_MORE_CARDS_HEADER_GUARD */