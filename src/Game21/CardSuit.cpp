#include "CardSuit.hpp"
#include "CardSuit.hpp"
#include <stdexcept>
#include <string>

game21::CardSuit::operator std::string() const noexcept(false)
{
    switch (mSuit)
    {
    case Suit::Spade:
        return "♠";
    case Suit::Heart:
        return "♥";
    case Suit::Diamond:
        return "♦";
    case Suit::Club:
        return "♣";

    default:
        throw std::range_error{
            "Unknown Suit"};
    }
}