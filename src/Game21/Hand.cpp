#include "Hand.hpp"
#include "Card.hpp"
#include <sstream>
#include <string>
#include <vector>

namespace game21
{
    Hand::Hand() : mCardList{}
    { /* EMPTY */
    }

    void Hand::addCard(const Card *card)
    {
        mCardList.push_back(card);
    }

    int Hand::getValue() const
    {
        int val = 0;
        for (auto &&card : mCardList)
        {
            val += int(*card);
        }
        return val;
    }

    std::string Hand::toString() const
    {
        std::stringstream val{};
        for (auto &&card : mCardList)
        {
            val << card->toString() << " ";
        }
        return val.str();
    }
}