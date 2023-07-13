#include "CardDeck.hpp"
#include <gtest/gtest.h>
#include <string>

TEST(CardTest, CardDeckRepeatableTest)
{
    using namespace game21;

    std::string rep1{};
    for (size_t i = 0; i < CardDeck::size; i++)
    {
        rep1 += static_cast<std::string>(CardDeck::getCard());
    }

    std::string rep2{};
    for (size_t i = 0; i < CardDeck::size; i++)
    {
        rep2 += static_cast<std::string>(CardDeck::getCard());
    }

    EXPECT_STREQ(rep1.c_str(), rep2.c_str());
}

TEST(CardTest, CardDeckShuffableTest)
{
    using namespace game21;

    std::string rep1{};
    for (size_t i = 0; i < CardDeck::size; i++)
    {
        rep1 += static_cast<std::string>(CardDeck::getCard());
    }

    CardDeck::shuffle();

    std::string rep2{};
    for (size_t i = 0; i < CardDeck::size; i++)
    {
        rep2 += static_cast<std::string>(CardDeck::getCard());
    }
    EXPECT_STRNE(rep1.c_str(), rep2.c_str());

    std::string rep3 = "";
    for (size_t i = 0; i < CardDeck::size; i++)
    {
        rep3 += static_cast<std::string>(CardDeck::getCard());
    }
    EXPECT_STREQ(rep2.c_str(), rep3.c_str());
}