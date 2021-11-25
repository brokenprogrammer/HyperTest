#include "../code/hypertest.cpp"


// Returns the factorial of the specified number.
int 
Factorial(int Number) {
    int Result = 1;
    for (int Index = 1; Index <= Number; Index++) {
        Result *= Index;
    }

    return Result;
}

// NOTE(Oskar): Factorial Tests.
TEST(FactorialTest, Negative) {
    UNITTEST_EXPECT_EQUAL(1, Factorial(-5));
    UNITTEST_EXPECT_EQUAL(1, Factorial(-1));
    UNITTEST_EXPECT_GREATERTHAN(Factorial(-10), 0);
}

TEST(FactorialTest, Zero) {
    UNITTEST_EXPECT_EQUAL(1, Factorial(0));
}

TEST(FactorialTest, Positive) {
    UNITTEST_EXPECT_EQUAL(1, Factorial(1));
    UNITTEST_EXPECT_EQUAL(2, Factorial(2));
    UNITTEST_EXPECT_EQUAL(6, Factorial(3));
    UNITTEST_EXPECT_EQUAL(40320, Factorial(8));
}
