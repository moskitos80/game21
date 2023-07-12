#include "CardRank.hpp"
#include <gtest/gtest.h>
#include <string>

// Demonstrate some basic assertions.
TEST(CardTest, CardRankToIntTest)
{
    using namespace game21;

    CardRank rank2{CardRank::RANK_2};
    CardRank rank3{CardRank::RANK_3};
    CardRank rank4{CardRank::RANK_4};
    CardRank rank5{CardRank::RANK_5};
    CardRank rank6{CardRank::RANK_6};
    CardRank rank7{CardRank::RANK_7};
    CardRank rank8{CardRank::RANK_8};
    CardRank rank9{CardRank::RANK_9};
    CardRank rank10{CardRank::RANK_10};
    CardRank rankJ{CardRank::RANK_J};
    CardRank rankQ{CardRank::RANK_Q};
    CardRank rankK{CardRank::RANK_K};
    CardRank rankA{CardRank::RANK_A};

    ASSERT_EQ(2, static_cast<int>(rank2));
    ASSERT_EQ(3, static_cast<int>(rank3));
    ASSERT_EQ(4, static_cast<int>(rank4));
    ASSERT_EQ(5, static_cast<int>(rank5));
    ASSERT_EQ(6, static_cast<int>(rank6));
    ASSERT_EQ(7, static_cast<int>(rank7));
    ASSERT_EQ(8, static_cast<int>(rank8));
    ASSERT_EQ(9, static_cast<int>(rank9));
    ASSERT_EQ(10, static_cast<int>(rank10));
    ASSERT_EQ(10, static_cast<int>(rankJ));
    ASSERT_EQ(10, static_cast<int>(rankQ));
    ASSERT_EQ(10, static_cast<int>(rankK));
    ASSERT_EQ(11, static_cast<int>(rankA));
}

TEST(CardTest, CardRankToStrTest)
{
    using namespace game21;

    CardRank rank2{CardRank::RANK_2};
    CardRank rank3{CardRank::RANK_3};
    CardRank rank4{CardRank::RANK_4};
    CardRank rank5{CardRank::RANK_5};
    CardRank rank6{CardRank::RANK_6};
    CardRank rank7{CardRank::RANK_7};
    CardRank rank8{CardRank::RANK_8};
    CardRank rank9{CardRank::RANK_9};
    CardRank rank10{CardRank::RANK_10};
    CardRank rankJ{CardRank::RANK_J};
    CardRank rankQ{CardRank::RANK_Q};
    CardRank rankK{CardRank::RANK_K};
    CardRank rankA{CardRank::RANK_A};

    ASSERT_STREQ("2",  static_cast<std::string>(rank2).c_str());
    ASSERT_STREQ("3",  static_cast<std::string>(rank3).c_str());
    ASSERT_STREQ("4",  static_cast<std::string>(rank4).c_str());
    ASSERT_STREQ("5",  static_cast<std::string>(rank5).c_str());
    ASSERT_STREQ("6",  static_cast<std::string>(rank6).c_str());
    ASSERT_STREQ("7",  static_cast<std::string>(rank7).c_str());
    ASSERT_STREQ("8",  static_cast<std::string>(rank8).c_str());
    ASSERT_STREQ("9",  static_cast<std::string>(rank9).c_str());
    ASSERT_STREQ("10", static_cast<std::string>(rank10).c_str());
    ASSERT_STREQ("J",  static_cast<std::string>(rankJ).c_str());
    ASSERT_STREQ("Q",  static_cast<std::string>(rankQ).c_str());
    ASSERT_STREQ("K",  static_cast<std::string>(rankK).c_str());
    ASSERT_STREQ("A",  static_cast<std::string>(rankA).c_str());
}

TEST(CardTest, CardRankUnexistsTest)
{
    using namespace game21;
    CardRank errRank{static_cast<CardRank::Rank>(-1)};

    EXPECT_THROW(static_cast<int>(errRank), std::range_error);
    EXPECT_THROW(static_cast<std::string>(errRank), std::range_error);
}