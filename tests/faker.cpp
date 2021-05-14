#include <gtest/gtest.h>
#include "faker.hpp"

TEST(Faker, generator) {
    LibFaker::Faker f;
    ASSERT_TRUE(f.someTestAssertion());
}
