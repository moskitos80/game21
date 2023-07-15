#include "States/PlayerGetsMoreCards.hpp"
#include "CardDeck.hpp"
#include "Game.hpp"

namespace game21
{
    Scene PlayerGetsMoreCards::execute(Game __attribute_maybe_unused__ *game)
    {
        if (game->mPlrHand.getValue() > 21)
        {
            return Scene::PlayerOverhead;
        }

        game->waitFor(1500);
        game->clearScreen();
        game->showInfo();

        std::string yORn;

        game->getInput(
            yORn,
            "Взять еще карту - \"д\", отказаться любая кл. (Ctrl+D выход)?\n",
            "Не корректный ввод, попробуйте еще раз (Ctrl+D выход):\n");

        if (yORn != "y" && yORn != "д")
        {
            return Scene::DillerGetsMoreCards;
        }

        auto &card = CardDeck::getCard();
        game->mPlrHand.addCard(&card);
        game->mOutput << "Игрок получает карту: " << card.toString() << "\n";

        return Scene::PlayerGetsMoreCards;
    }

} // namespace game21