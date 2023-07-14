#include "Game.hpp"
#include "FSM.hpp"
#include <gtest/gtest.h>
#include "States/AskPlayerBalance.hpp"
#include "States/AskPlayerBid.hpp"

using namespace game21;

TEST(FSMTest, FSMTest)
{
    FSM<Scene, FSMState> fsm;
    fsm.addState(Scene::Finish, nullptr);

    AskPlayerBalance apbal;
    fsm.addState(Scene::AskPlayerBalance, &apbal);

    AskPlayerBid apbid;
    fsm.addState(Scene::AskPlayerBalance, &apbid);
}