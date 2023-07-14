#include "Card.hpp"
#include "Hand.hpp"
#include <gtest/gtest.h>

using namespace game21;

TEST(HandTest, HandTest)
{
    Hand hand;

    Card c1{CardRank::RANK_5, CardSuit::Diamond};
    Card c2{CardRank::RANK_10, CardSuit::Heart};
    Card c3{CardRank::RANK_A, CardSuit::Club};

    hand.addCard(&c1);
    hand.addCard(&c2);
    hand.addCard(&c3);

    EXPECT_EQ(26, hand.getValue());
    EXPECT_STREQ("5[♦] 10[♥] A[♣] ", hand.toString().c_str());
}