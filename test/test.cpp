#include <gtest/gtest.h>
#include <soma.hpp>

TEST(soma, positivos)
{
    EXPECT_EQ(8, soma(4, 2));
}
