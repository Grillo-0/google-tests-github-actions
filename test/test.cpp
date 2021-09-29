#include <gtest/gtest.h>

#include <soma.hpp>

TEST(soma, positivos)
{
    EXPECT_EQ(6, soma(4, 2));
}
