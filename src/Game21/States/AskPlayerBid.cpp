#include "States/AskPlayerBid.hpp"
#include "Game.hpp"
#include <iomanip>
#include <sstream>

namespace game21
{
    Scene AskPlayerBid::execute(Game __attribute_maybe_unused__ *game)
    {
        game->waitFor(1500);
        game->clearScreen();

        std::ostringstream msg;
        msg << "Укажите вашу ставку (не более "
            << std::fixed << std::setprecision(2)
            << game->mPlrBalance
            << " Ctrl+D выход):\n";

        while (true)
        {
            game->getInput(
                game->mPlrBid, msg.str().c_str(),
                "Не корректный ввод, попробуйте еще раз (Ctrl+D выход):\n");
            if (game->mPlrBid <= game->mPlrBalance)
            {
                break;
            }
            game->mOuterr << "Ставка: " << game->mPlrBid
                          << " не может превышать баланс: "
                          << game->mPlrBalance << "\n";
        }

        game->mPlrBalance -= game->mPlrBid;

        return Scene::DillerGetsCards;
    }

} // namespace game21
