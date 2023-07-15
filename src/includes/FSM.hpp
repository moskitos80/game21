#ifndef __FSM__H__
#define __FSM__H__

#include <iostream>
#include <map>

namespace game21
{
    template<typename Key, typename Ctx>
    class FSMState
    {
    public:
        // TODO: Change type: FSMState::execute(Ctx *context) to FSMState::execute(Ctx &context)
        virtual Key execute(Ctx *context) = 0;
        virtual ~FSMState() {}
    };

    template <typename Key, typename Ctx, typename State = FSMState<Key,Ctx>>
    class FSM
    {
        std::map<Key, State *> mStateList;

    public:
        FSM &addState(Key key, State *state) noexcept
        {
            mStateList[key] = state;
            return *this;
        }

        void run(Key start, Key finish, Ctx *context) noexcept(false)
        {
            auto startState = mStateList.find(start);
            if (std::end(mStateList) == startState) {
                throw std::range_error{"state doesn't exists"};
            }

            auto nextStateKey = start;

            do {
                auto *state = mStateList[nextStateKey];
                nextStateKey = state->execute(context);
            } while (nextStateKey != finish);
        }
    };

} // namespace game21

#endif //!__FSM__H__