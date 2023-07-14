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

std::string game21::Card::toString() const
{
    return static_cast<std::string>(mRank) +
           "[" + static_cast<std::string>(mSuit) + "]";
}

game21::Card::operator const std::string() const noexcept(false)
{
    return toString();
}