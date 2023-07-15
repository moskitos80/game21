#include "Game.hpp"
#include "FSM.hpp"

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

#include <iomanip>
#include <iostream>
#include <locale>

namespace game21
{
    Game::Game(
        std::istream &input,
        std::ostream &output,
        std::ostream &outerr) noexcept(false)
        : mInput{input},
          mOutput{output},
          mOuterr{outerr},
          mPlrHand{},
          mDlrHand{},
          mPlrBalance{0},
          mPlrBid{0}
    {
        mOutput << std::fixed 
                << std::setprecision(2);
        mOuterr << std::fixed
                << std::setprecision(2);
    }

    void Game::startGame() noexcept(false)
    {
        FSM<Scene, Game, FSMState<Scene, Game>> fsm;

        AskPlayerBalance scene1;
        fsm.addState(Scene::AskPlayerBalance, &scene1);

        AskPlayerBid scene2;
        fsm.addState(Scene::AskPlayerBid, &scene2);

        DillerGetsCards scene3;
        fsm.addState(Scene::DillerGetsCards, &scene3);

        PlayerGetsCards scene4;
        fsm.addState(Scene::PlayerGetsCards, &scene4);

        PlayerGetsMoreCards scene5;
        fsm.addState(Scene::PlayerGetsMoreCards, &scene5);

        DillerGetsMoreCards scene6;
        fsm.addState(Scene::DillerGetsMoreCards, &scene6);

        DillerOverhead scene7;
        fsm.addState(Scene::DillerOverhead, &scene7);

        PlayerOverhead scene8;
        fsm.addState(Scene::PlayerOverhead, &scene8);

        DillerScoreWin scene9;
        fsm.addState(Scene::DillerScoreWin, &scene9);

        PlayerScoreWin scene10;
        fsm.addState(Scene::PlayerScoreWin, &scene10);

        DeadHeat scene11;
        fsm.addState(Scene::DeadHeat, &scene11);

        fsm.run(Scene::AskPlayerBalance, Scene::Finish, this);
    }

    void Game::showInfo() const noexcept(false)
    {
        mOutput << "Баланс игрока: " << mPlrBalance << "\n"
                << "Ставка игрока: " << mPlrBid << "\n"
                << "Карты игрока: " << mPlrHand.toString()
                << "(" << mPlrHand.getValue() << ")\n"
                << "Карты диллера: " << mDlrHand.toString()
                << "(" << mDlrHand.getValue() << ")\n\n";
    }
} // namespace game21
