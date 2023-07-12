#ifndef GAME21_CARD_DECK_H
#define GAME21_CARD_DECK_H

#include "Card.hpp"
#include <random>
#include <array>

namespace game21
{
    class CardDeck
    {
    public:
        static constexpr std::array<Card, 52> deck{
            Card{CardRank::RANK_2, CardSuit::Spade},
            {CardRank::RANK_2, CardSuit::Diamond},
            {CardRank::RANK_2, CardSuit::Club},
            {CardRank::RANK_2, CardSuit::Heart},

            {CardRank::RANK_3, CardSuit::Spade},
            {CardRank::RANK_3, CardSuit::Diamond},
            {CardRank::RANK_3, CardSuit::Club},
            {CardRank::RANK_3, CardSuit::Heart},

            {CardRank::RANK_4, CardSuit::Spade},
            {CardRank::RANK_4, CardSuit::Diamond},
            {CardRank::RANK_4, CardSuit::Club},
            {CardRank::RANK_4, CardSuit::Heart},

            {CardRank::RANK_5, CardSuit::Spade},
            {CardRank::RANK_5, CardSuit::Diamond},
            {CardRank::RANK_5, CardSuit::Club},
            {CardRank::RANK_5, CardSuit::Heart},

            {CardRank::RANK_6, CardSuit::Spade},
            {CardRank::RANK_6, CardSuit::Diamond},
            {CardRank::RANK_6, CardSuit::Club},
            {CardRank::RANK_6, CardSuit::Heart},

            {CardRank::RANK_7, CardSuit::Spade},
            {CardRank::RANK_7, CardSuit::Diamond},
            {CardRank::RANK_7, CardSuit::Club},
            {CardRank::RANK_7, CardSuit::Heart},

            {CardRank::RANK_8, CardSuit::Spade},
            {CardRank::RANK_8, CardSuit::Diamond},
            {CardRank::RANK_8, CardSuit::Club},
            {CardRank::RANK_8, CardSuit::Heart},

            {CardRank::RANK_9, CardSuit::Spade},
            {CardRank::RANK_9, CardSuit::Diamond},
            {CardRank::RANK_9, CardSuit::Club},
            {CardRank::RANK_9, CardSuit::Heart},

            {CardRank::RANK_10, CardSuit::Spade},
            {CardRank::RANK_10, CardSuit::Diamond},
            {CardRank::RANK_10, CardSuit::Club},
            {CardRank::RANK_10, CardSuit::Heart},

            {CardRank::RANK_J, CardSuit::Spade},
            {CardRank::RANK_J, CardSuit::Diamond},
            {CardRank::RANK_J, CardSuit::Club},
            {CardRank::RANK_J, CardSuit::Heart},

            {CardRank::RANK_Q, CardSuit::Spade},
            {CardRank::RANK_Q, CardSuit::Diamond},
            {CardRank::RANK_Q, CardSuit::Club},
            {CardRank::RANK_Q, CardSuit::Heart},

            {CardRank::RANK_K, CardSuit::Spade},
            {CardRank::RANK_K, CardSuit::Diamond},
            {CardRank::RANK_K, CardSuit::Club},
            {CardRank::RANK_K, CardSuit::Heart},

            {CardRank::RANK_A, CardSuit::Spade},
            {CardRank::RANK_A, CardSuit::Diamond},
            {CardRank::RANK_A, CardSuit::Club},
            {CardRank::RANK_A, CardSuit::Heart},
        };

        static void shuffle() noexcept;
        static const Card &getCard() noexcept(false);
    };
} // namespace game21

#endif // GAME21_CARD_DECK_H