#include "CardRank.hpp"
#include <stdexcept>
#include <string>

int game21::CardRank::operator+(int value) const
{
    return static_cast<int>(mRank) + value;
}

int game21::CardRank::operator+(const CardRank &rhs) const
{
    return static_cast<int>(mRank) + static_cast<int>(rhs.mRank);
}

game21::CardRank::operator int() const noexcept(false)
{
    switch (mRank)
    {
    case RANK_2:
    case RANK_3:
    case RANK_4:
    case RANK_5:
    case RANK_6:
    case RANK_7:
    case RANK_8:
    case RANK_9:
        return static_cast<int>(mRank);
    case RANK_10:
    case RANK_J:
    case RANK_Q:
    case RANK_K:
        return 10;
    case RANK_A:
        return 11;
    default:
        throw std::range_error{
            "Unknown Suit"};
    }
}

game21::CardRank::operator std::string() const noexcept(false)
{
    switch (mRank)
    {
    case RANK_2:
    case RANK_3:
    case RANK_4:
    case RANK_5:
    case RANK_6:
    case RANK_7:
    case RANK_8:
    case RANK_9:
    case RANK_10:
        return std::to_string(static_cast<int>(mRank));
    case RANK_J:
        return "J";
    case RANK_Q:
        return "Q";
    case RANK_K:
        return "K";
    case RANK_A:
        return "A";
    default:
        throw std::range_error{
            "Unknown Suit"};
    }
}