#include "States/DillerOverhead.hpp"
#include "Game.hpp"

namespace game21
{
    Scene DillerOverhead::execute(Game __attribute_maybe_unused__ *game)
    {
        game->mPlrBalance += game->mPlrBid * 2;
        game->mPlrBid = 0;

        game->waitFor(1500);
        game->clearScreen();
        game->showInfo();        

        std::string yORn;

        game->getInput(
            yORn,
            "У диллера перебор. Вы выиграли. Желаете сыграть еще?\n"
            "Нажмите \"д\" - что бы играть еще, или любую клавишу, либо Ctrl+D для выхода?\n",
            "Не корректный ввод, попробуйте еще раз (Ctrl+D выход):\n");

        if (yORn == "y" || yORn == "д")
        {
            return Scene::AskPlayerBid;
        }

        return Scene::Finish;
    }

} // namespace game21