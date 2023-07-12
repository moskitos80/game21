#include "CardSuit.hpp"
#include <gtest/gtest.h>
#include <stdexcept>
#include <string>

TEST(CardTest, CardSuitTest)
{
    using namespace game21;

    CardSuit spade{CardSuit::Spade};
    CardSuit heart{CardSuit::Heart};
    CardSuit diamond{CardSuit::Diamond};
    CardSuit club{CardSuit::Club};

    ASSERT_STREQ("♠", static_cast<std::string>(spade).c_str());
    ASSERT_STREQ("♥", static_cast<std::string>(heart).c_str());
    ASSERT_STREQ("♦", static_cast<std::string>(diamond).c_str());
    ASSERT_STREQ("♣", static_cast<std::string>(club).c_str());
}

TEST(CardTest, CardSuitUnexistsTest)
{
    using namespace game21;
    CardSuit err{static_cast<CardSuit::Suit>(-1)};
    EXPECT_THROW(static_cast<std::string>(err), std::range_error);
}