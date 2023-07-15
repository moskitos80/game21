#include "States/DillerGetsCards.hpp"
#include "CardDeck.hpp"
#include "Game.hpp"

namespace game21
{
    Scene DillerGetsCards::execute(Game __attribute_maybe_unused__ *game)
    {
        game->waitFor(1500);
        game->clearScreen();
        game->showInfo();

        auto &card1 = CardDeck::getCard();
        auto &card2 = CardDeck::getCard();

        game->mOutput << "Диллер получает карты: "
                      << card1.toString() << " "
                      << card2.toString() << "\n";

        game->mDlrHand.addCard(&card1);
        game->mDlrHand.addCard(&card2);

        return Scene::PlayerGetsCards;
    }

} // namespace game21