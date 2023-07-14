#include "FSM.hpp"
#include "Game.hpp"
#include "States/AskPlayerBalance.hpp"
#include "States/AskPlayerBid.hpp"
#include <gtest/gtest.h>

using namespace game21;

TEST(FSMTest, FSMTest)
{
    FSM<Scene, FSMState<Scene, Game>, Game> fsm;

    AskPlayerBalance scene1;
    fsm.addState(Scene::AskPlayerBalance, &scene1);

    AskPlayerBid scene2;
    fsm.addState(Scene::AskPlayerBid, &scene2);

    testing::internal::CaptureStdout();
    fsm.run(Scene::AskPlayerBalance, Scene::Finish, nullptr);
    auto output = testing::internal::GetCapturedStdout();

    EXPECT_STREQ("AskPlayerBalance\nAskPlayerBid\n", output.c_str());
}