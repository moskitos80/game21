#include "States/AskPlayerBalance.hpp"
#include "Game.hpp"
#include <chrono>
#include <thread>
#include <cstdlib>
#include <limits>

namespace game21
{
    Scene AskPlayerBalance::execute(Game __attribute_maybe_unused__ *game)
    {
        game->getInput(
            game->mPlrBalance,
            "Введите средства на счет (Ctrl+D выход):\n",
            "Не корректный ввод, попробуйте еще раз (Ctrl+D выход):\n");

        game->mOutput << "Ваш баланс: " << game->mPlrBalance << "\n";

        return Scene::AskPlayerBid;
    }

} // namespace game21
