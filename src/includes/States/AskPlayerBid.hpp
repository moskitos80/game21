#ifndef __ASKPLBID__H__
#define __ASKPLBID__H__

#include "FSM.hpp"

namespace game21
{
    class AskPlayerBid : public FSMState
    {
    public:
        int execute(void *context) override;
        ~AskPlayerBid(){}
    };

} // namespace game21

#endif //!__ASKPLBID__H__