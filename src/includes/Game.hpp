#ifndef GAME21_GAME_H
#define GAME21_GAME_H

#include "Card.hpp"
#include "Hand.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

namespace game21
{
    enum class Scene
    {
        Finish,
        AskPlayerBalance,
        AskPlayerBid,
        DillerGetsCards,
        PlayerGetsCards,
        PlayerGetsMoreCards,
        DillerGetsMoreCards,
        PlayerOverhead,
        DillerOverhead,
        PlayerScoreWin,
        DillerScoreWin,
        DeadHeat,
    };

    struct Game
    {

        std::istream &mInput;
        std::ostream &mOutput;
        std::ostream &mOuterr;

        Hand mPlrHand;
        Hand mDlrHand;

        float mPlrBalance;
        float mPlrBid;

        class InterruptedException
            : public std::runtime_error
        {
        public:
            InterruptedException()
                : std::runtime_error{"Прервано"} {}
        };

        Game(std::istream &input,
             std::ostream &output,
             std::ostream &outerr) noexcept(false);

        void startGame() noexcept(false);
    };

} // namespace game21

#endif // GAME21_GAME_H