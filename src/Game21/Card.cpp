#include "Card.hpp"

game21::Card::operator int() const
{
    return mRank;
}

game21::Card::operator std::string() const noexcept(false)
{
    return static_cast<std::string>(mRank) + 
        "[" + static_cast<std::string>(mSuit) + "]";
}