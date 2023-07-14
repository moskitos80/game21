#include <gtest/gtest.h>
#include "Card.hpp"

using namespace game21;

TEST(CardTest, CardTestToInt)
{
    Card card2S { CardRank::RANK_2, CardSuit::Spade };
    Card card10D { CardRank::RANK_10, CardSuit::Diamond };
    Card cardQH { CardRank::RANK_Q, CardSuit::Heart };
    Card cardAC { CardRank::RANK_A, CardSuit::Club };

    EXPECT_EQ(2, static_cast<int>(card2S));
    EXPECT_EQ(10, static_cast<int>(card10D));
    EXPECT_EQ(10, static_cast<int>(cardQH));
    EXPECT_EQ(11, static_cast<int>(cardAC));
}

TEST(CardTest, CardUnesxistsTest)
{
    Card cardRankError{static_cast<CardRank::Rank>(-1), CardSuit::Heart};
    Card cardSuitError{CardRank::RANK_A, static_cast<CardSuit::Suit>(-1)};

    EXPECT_THROW(static_cast<int>(cardRankError), std::range_error);
    EXPECT_THROW(cardSuitError.toString(), std::range_error);
}

TEST(CardTest, CardTestToStr)
{
    Card card2S{CardRank::RANK_2, CardSuit::Spade};
    Card card10D{CardRank::RANK_10, CardSuit::Diamond};
    Card cardQH{CardRank::RANK_Q, CardSuit::Heart};
    Card cardAC{CardRank::RANK_A, CardSuit::Club};

    EXPECT_STREQ("2[♠]", card2S.toString().c_str());
    EXPECT_STREQ("10[♦]", card10D.toString().c_str());
    EXPECT_STREQ("Q[♥]", cardQH.toString().c_str());
    EXPECT_STREQ("A[♣]", cardAC.toString().c_str());
}

TEST(CardTest, CardTestOperatorPlus)
{
    Card card2S{CardRank::RANK_2, CardSuit::Spade};
    Card card10D{CardRank::RANK_10, CardSuit::Diamond};
    Card cardAC{CardRank::RANK_A, CardSuit::Club};

    EXPECT_EQ(23, card2S + card10D + cardAC);
    EXPECT_EQ(7, card2S + 5);
}