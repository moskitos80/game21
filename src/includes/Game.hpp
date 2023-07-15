#ifndef GAME21_GAME_H
#define GAME21_GAME_H

#include "Card.hpp"
#include "Hand.hpp"
#include <chrono>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <thread>
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

        template <typename T>
        std::istream &getInput(T &result, const char *msg, const char *errMsg) noexcept(false)
        {
            mOutput << msg;

            while (!(mInput >> result))
            {
                if (mInput.eof())
                {
                    throw Game::InterruptedException{};
                }

                mInput.clear();
                mInput.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                mOuterr << errMsg;
            }
            mInput.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            return mInput;
        }

        inline void clearScreen() const noexcept {
            __attribute_maybe_unused__ auto _ = std::system("clear");
        }

        inline const Game &waitFor(int msec) const noexcept
        {
            // https://en.cppreference.com/w/cpp/thread/sleep_for
            // https://stackoverflow.com/questions/60480907/how-to-convert-int-to-chrono-milliseconds
            std::this_thread::sleep_for(
                std::chrono::milliseconds(msec));
            return *this;
        }

        void showInfo() const noexcept(false);
    };

} // namespace game21

#endif // GAME21_GAME_H