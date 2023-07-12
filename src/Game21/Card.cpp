#include "Card.hpp"

int game21::Card::operator+(int value) const
{
    return mRank + value;
}

int game21::Card::operator+(const Card &rhs) const
{
    return mRank + rhs.mRank;
}

game21::Card::operator int() const
{
    return mRank;
}

game21::Card::operator std::string() const noexcept(false)
{
    return static_cast<std::string>(mRank) + 
        "[" + static_cast<std::string>(mSuit) + "]";
}