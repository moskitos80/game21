#ifndef __ASKPLBAL__H__
#define __ASKPLBAL__H__

#include "FSM.hpp"
#include "Game.hpp"

namespace game21
{

    class AskPlayerBalance : public FSMState<Scene, Game>
    {
    public:
        Scene execute(Game *context) noexcept(false) override;
        ~AskPlayerBalance() {}
    };

} // namespace game21

#endif //!__ASKPLBAL__H__