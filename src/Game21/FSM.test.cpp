#include "FSM.hpp"
#include "Game.hpp"
#include "States/AskPlayerBalance.hpp"
#include "States/AskPlayerBid.hpp"
#include "States/DeadHeat.hpp"
#include "States/DillerGetsCards.hpp"
#include "States/DillerGetsMoreCards.hpp"
#include "States/DillerOverhead.hpp"
#include "States/DillerScoreWin.hpp"
#include "States/PlayerGetsCards.hpp"
#include "States/PlayerGetsMoreCards.hpp"
#include "States/PlayerOverhead.hpp"
#include "States/PlayerScoreWin.hpp"

#include <gtest/gtest.h>

using namespace game21;

TEST(FSMTest, FSMTest)
{
    // FSM<Scene, FSMState<Scene, Game>, Game> fsm;

    // AskPlayerBalance scene1;
    // fsm.addState(Scene::AskPlayerBalance, &scene1);

    // AskPlayerBid scene2;
    // fsm.addState(Scene::AskPlayerBid, &scene2);

    // DillerGetsCards scene3;
    // fsm.addState(Scene::DillerGetsCards, &scene3);

    // PlayerGetsCards scene4;
    // fsm.addState(Scene::PlayerGetsCards, &scene4);

    // PlayerGetsMoreCards scene5;
    // fsm.addState(Scene::PlayerGetsMoreCards, &scene5);

    // DillerGetsMoreCards scene6;
    // fsm.addState(Scene::DillerGetsMoreCards, &scene6);

    // DillerOverhead scene7;
    // fsm.addState(Scene::DillerOverhead, &scene7);

    // PlayerOverhead scene8;
    // fsm.addState(Scene::PlayerOverhead, &scene8);

    // DillerScoreWin scene9;
    // fsm.addState(Scene::DillerScoreWin, &scene9);

    // PlayerScoreWin scene10;
    // fsm.addState(Scene::PlayerScoreWin, &scene10);
    // fsm.addState(Scene::DillerScoreWin, &scene9);

    // DeadHeat scene11;
    // fsm.addState(Scene::DeadHeat, &scene11);

    // std::stringstream input{"some input here"};
    // std::ostringstream output;
    // std::ostringstream errout;
    // Game theGame{input, output, errout};

    // testing::internal::CaptureStdout();
    // fsm.run(Scene::AskPlayerBalance, Scene::Finish, &theGame);
    // auto output = testing::internal::GetCapturedStdout();

    // EXPECT_STREQ(
    //     "AskPlayerBalance\n"
    //     "AskPlayerBid\n"
    //     "DillerGetsCards\n"
    //     "PlayerGetsCards\n"
    //     "PlayerGetsMoreCards\n"
    //     "DillerGetsMoreCards\n"
    //     "DillerOverhead\n"
    //     "PlayerOverhead\n"
    //     "DillerScoreWin\n"
    //     "PlayerScoreWin\n"
    //     "DeadHeat\n",
    //     output.str().c_str());
}