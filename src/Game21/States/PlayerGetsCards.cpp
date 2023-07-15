#include "States/PlayerGetsCards.hpp"
#include "CardDeck.hpp"
#include "Game.hpp"

namespace game21
{
    Scene PlayerGetsCards::execute(Game __attribute_maybe_unused__ *game)
    {
        game->waitFor(1500);
        game->clearScreen();
        game->showInfo();

        auto &card1 = CardDeck::getCard();
        auto &card2 = CardDeck::getCard();

        game->mOutput << "Игрок получает карты: "
                      << card1.toString() << " "
                      << card2.toString() << "\n";

        game->mPlrHand.addCard(&card1);
        game->mPlrHand.addCard(&card2);

        return Scene::PlayerGetsMoreCards;
    }

} // namespace game21