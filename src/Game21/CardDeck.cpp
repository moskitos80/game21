#include "CardDeck.hpp"
#include <random>
#include <utility>

namespace game21
{
    std::array<Card, CardDeck::size> CardDeck::deck{
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
    
    void CardDeck::shuffle() noexcept
    {
#if defined(NDEBUG) || defined(GTEST_TEST)
        static std::mt19937 gen{nullptr};
#else
        static std::random_device rd;
        static std::mt19937 gen{rd()};
#endif
        static std::uniform_int_distribution<> deckDist(0, CardDeck::size-1);

        for (size_t i = 0; i < CardDeck::size; i++)
        {
            std::swap(
                CardDeck::deck[i],
                CardDeck::deck[deckDist(gen)]);
        }
    }

    const Card &CardDeck::getCard() noexcept(false)
    {
        static size_t pointer = 0;
        pointer = pointer == CardDeck::size ? 0 : pointer;

        return CardDeck::deck[pointer++];
    }
}
