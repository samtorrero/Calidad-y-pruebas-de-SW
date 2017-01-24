#include "gtest/gtest.h"
#include "sort3.h"

typedef testing::Types<Sort1> implementations;

INSTANTIATE_TYPED_TEST_CASE_P(MiTest, TypeParameterized, implementations);
