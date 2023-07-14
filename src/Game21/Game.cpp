#include "Game.hpp"
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
          mDlrHand{}
    {
        // TODO: realize Game::Game
    }

    void Game::startGame() noexcept(false)
    {
        // TODO: realize Game::startGame
    }
} // namespace game21
