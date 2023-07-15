#include "States/DillerScoreWin.hpp"
#include "Game.hpp"
#include <string>

namespace game21
{
    Scene DillerScoreWin::execute(Game __attribute_maybe_unused__ *game)
    {
        game->mPlrBid = 0;

        game->waitFor(1500);
        game->clearScreen();
        game->showInfo();

        game->mOutput << "Диллер выиграл по очкам. Вы проиграли ставку.\n";

        std::string message{
            "Нажмите \"д\" - что бы играть еще, или любую клавишу, либо Ctrl+D для выхода?\n",
        };
        auto nextScene = Scene::AskPlayerBid;

        if (game->mPlrBalance == 0)
        {
            game->mOutput << "Ваш баланс пуст.\n";
            message = "Нажмите \"д\" - что бы пополнить баланс и сыграть еще, или любую клавишу, либо Ctrl+D для выхода?\n";
            nextScene = Scene::AskPlayerBalance;
        }

        std::string yORn;

        game->getInput(
            yORn, message,
            "Не корректный ввод, попробуйте еще раз (Ctrl+D выход):\n");

        if (yORn == "y" || yORn == "д")
        {
            return nextScene;
        }

        return Scene::Finish;
    }

} // namespace game21