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

        std::ostringstream vErrMsg;
        vErrMsg << std::fixed << std::setprecision(2)
                << "Ставка не может превышать баланс: "
                << game->mPlrBalance << "\n";

        auto balance = game->mPlrBalance;

        game->getInput(
            game->mPlrBid,
            msg.str(),
            "Не корректный ввод, попробуйте еще раз (Ctrl+D выход):\n",
            vErrMsg.str(),
            std::function<bool(float)>([balance](float result) -> bool
                                       { return result <= balance; }));

        game->mPlrBalance -= game->mPlrBid;

        return Scene::DillerGetsCards;
    }

} // namespace game21
