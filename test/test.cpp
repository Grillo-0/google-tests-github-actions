#include <gtest/gtest.h>
#include <soma.hpp>

TEST(soma, positivos)
{
    EXPECT_EQ(5, soma(4, 2));
}

TEST(soma, negativos)
{
    EXPECT_EQ(1, soma(-1, 2));
    EXPECT_EQ(-2, soma(-1, -1));
}
