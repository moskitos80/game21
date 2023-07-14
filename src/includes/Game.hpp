#ifndef GAME21_GAME_H
#define GAME21_GAME_H

#include <iostream>
#include <stdexcept>

namespace game21
{
    enum class Scene {
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

        public:

            class InterruptedException: public std::exception {};
            Game(std::istream &input, std::ostream &output) noexcept(false);
            void startGame() noexcept(false);
    };

} // namespace game21

#endif //GAME21_GAME_H