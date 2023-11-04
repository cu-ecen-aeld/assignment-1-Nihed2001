#include <unity.h>

void test_example1(void) {
    TEST_ASSERT_EQUAL(2, 1 + 1);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_example1);
    return UNITY_END();
}

