#ifndef GAME21_RANK_H
#define GAME21_RANK_H

#include <string>

namespace game21
{
    struct CardRank
    {
        enum Rank {
            RANK_2 = 2,
            RANK_3,
            RANK_4,
            RANK_5,
            RANK_6,
            RANK_7,
            RANK_8,
            RANK_9,
            RANK_10,
            RANK_J,
            RANK_Q,
            RANK_K,
            RANK_A,
        };

    private:
        Rank mRank;

    public:
        constexpr CardRank(Rank rank) : mRank{rank} {}

        operator int() const;
        operator std::string() const noexcept(false);

        int operator+(int value) const;
        int operator+(const CardRank &rhs) const;
    };
}

#endif // GAME21_CARD_RANK_H