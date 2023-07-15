#ifndef PLR_SCORE_WIN_H
#define PLR_SCORE_WIN_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class PlayerScoreWin : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) noexcept(false) override;
        ~PlayerScoreWin() {}
    };
} // namespace game21

#endif /* PLR_SCORE_WIN_HEADER_GUARD */