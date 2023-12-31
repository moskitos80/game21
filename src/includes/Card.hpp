#ifndef GAME21_CARD_H
#define GAME21_CARD_H

#include "CardSuit.hpp"
#include "CardRank.hpp"

namespace game21 {

    using card_suit_t = CardSuit;
    using card_rank_t = CardRank;

    struct Card
    {
        constexpr Card(CardRank rank, CardSuit suit)
            : mRank{rank}, mSuit{suit}
        {}

        operator int() const;
        operator const std::string() const noexcept(false);

        int operator+(int value) const;
        int operator+(const Card &rhs) const;

        std::string toString() const;        

        private : 
            CardRank mRank;
            CardSuit mSuit;
    };
}

#endif // GAME21_CARD_H