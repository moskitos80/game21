#ifndef __ASKPLBAL__H__
#define __ASKPLBAL__H__

#include "FSM.hpp"

namespace game21
{

    class AskPlayerBalance : public FSMState
    {
    public:
        int execute(void *context) override;
        ~AskPlayerBalance(){}
    };

} // namespace game21

#endif //!__ASKPLBAL__H__