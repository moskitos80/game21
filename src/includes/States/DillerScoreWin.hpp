#ifndef DLR_SCORE_WIN_H
#define DLR_SCORE_WIN_H

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class DillerScoreWin : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) noexcept(false) override;
        ~DillerScoreWin() {}
    };
} // namespace game21

#endif /* DLR_SCORE_WIN_HEADER_GUARD */