#ifndef GAME21_CARD_SUIT_H
#define GAME21_CARD_SUIT_H

#include <string>

namespace game21
{
    struct CardSuit
    {
        enum Suit {
            Spade,
            Heart,
            Diamond,
            Club
        };

    private:
        Suit mSuit;

    public:
        constexpr CardSuit(Suit suit) : mSuit{suit} {}
        operator std::string() const noexcept(false);
    };
}

#endif // GAME21_CARD_SUIT_H