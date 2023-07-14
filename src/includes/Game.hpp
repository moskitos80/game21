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

    class Game
    {
        std::istream &mInput;
        std::ostream &mOutput;
        std::ostream &mOuterr;

        float mPlrBalance = 0.0f;
        float mPlrBid = 0.0f;

        Hand mPlrHand;
        Hand mDlrHand;

    public:
        class InterruptedException
            : public std::exception
        {
        };

        Game(std::istream &input,
             std::ostream &output,
             std::ostream &outerr) noexcept(false);

        void startGame() noexcept(false);
    };

} // namespace game21

#endif // GAME21_GAME_H