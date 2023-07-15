#ifndef __ASKPLBID__H__
#define __ASKPLBID__H__

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{
    class AskPlayerBid : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) noexcept(false) override;
        ~AskPlayerBid() {}
    };

} // namespace game21

#endif //!__ASKPLBID__H__