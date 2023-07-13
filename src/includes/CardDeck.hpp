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
        static constexpr std::size_t size = 52;
        static std::array<Card, size> deck;

        static void shuffle() noexcept;
        static const Card &getCard() noexcept(false);
    };
} // namespace game21



#endif // GAME21_CARD_DECK_H