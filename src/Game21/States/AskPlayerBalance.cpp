#include "States/AskPlayerBalance.hpp"
#include "Game.hpp"
#include <chrono>
#include <cstdlib>
#include <limits>
#include <thread>

namespace game21
{
    Scene AskPlayerBalance::execute(Game __attribute_maybe_unused__ *game)
    {
        game->mOutput << "AskPlayerBalance\n";

        // TODO: Extact to Game::getInput method
        game->mOutput << "Введите средства на счет (Ctrl+D выход):\n";
        while (!(game->mInput >> game->mPlrBalance))
        {
            if (game->mInput.eof())
            {
                throw Game::InterruptedException{};
            }
            game->mInput.clear();
            game->mInput.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            game->mOuterr << "Не корректный ввод, попробуйте еще раз (Ctrl+D выход):\n";
        }
        game->mInput.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // TODO: Extact to Game::clrSrc method
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(1500ms);
        __attribute_maybe_unused__ auto _ = std::system("clear");

        game->mOutput
            << "Ваш баланс: " << game->mPlrBalance << "\n";

        return Scene::AskPlayerBid;
    }

} // namespace game21
