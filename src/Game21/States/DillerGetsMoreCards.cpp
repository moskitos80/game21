#include "States/DillerGetsMoreCards.hpp"
#include "CardDeck.hpp"
#include "Game.hpp"

namespace game21
{
    Scene DillerGetsMoreCards::execute(Game __attribute_maybe_unused__ *game)
    {
        game->waitFor(1500);
        game->clearScreen();
        game->showInfo();

        if (game->mDlrHand.getValue() < 17) {
            auto &card = CardDeck::getCard();
            game->mDlrHand.addCard(&card);
            game->mOutput << "Диллер получает карту: " << card.toString() << "\n";
        }        

        auto dillerScore = game->mDlrHand.getValue();
        if (dillerScore < 17)
        {
            game->mOutput << "Диллер возьмет еще...\n";
            return Scene::DillerGetsMoreCards;
        }

        if (dillerScore > 21)
        {
            return Scene::DillerOverhead;
        }        

        auto playerScore = game->mPlrHand.getValue();
        if (dillerScore < playerScore)
        {
            return Scene::PlayerScoreWin;
        }

        if (dillerScore > playerScore)
        {
            return Scene::DillerScoreWin;
        }

        return Scene::DeadHeat;
    }

} // namespace game21