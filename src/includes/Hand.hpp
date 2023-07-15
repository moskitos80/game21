#ifndef HAND_H
#define HAND_H

#include "Card.hpp"
#include <vector>

namespace game21
{
    class Hand
    {
        std::vector<const Card*> mCardList;

        public:
            Hand();
            
            void addCard(const Card*);
            int getValue() const;
            std::string toString() const;
            void clear();
    };
}

#endif /* HAND_HEADER_GUARD */