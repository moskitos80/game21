#include "CardRank.hpp"
#include <stdexcept>
#include <string>

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
    case RANK_A:
        return 10;
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