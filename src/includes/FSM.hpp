#ifndef __FSM__H__
#define __FSM__H__

#include <iostream>
#include <map>

namespace game21
{
    class FSMState
    {
    public:
        virtual int execute(void *context) = 0;
        virtual ~FSMState() {}
    };

    template<typename Key, typename State>
    class FSM
    {
        std::map<Key, State *> mStateList;

    public:
        FSM &addState(Key key, State *state) noexcept
        {
            mStateList[key] = state;
            return *this;
        }
        
        void run(Key key, void *context) noexcept(false)
        {
            auto startState = mStateList.find(key);
            if (std::end(mStateList) == startState) {
                throw std::range_error{"state doesn't exists"};
            }

            auto curState = mStateList[key];
            
            while(nullptr != curState) {
                key = curState->execute(context);
                curState = mStateList[key];
            }
        }
    };

} // namespace game21

#endif //!__FSM__H__