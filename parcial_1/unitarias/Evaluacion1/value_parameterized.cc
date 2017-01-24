#include"gtest/gtest.h"
#include"sort3.h"

class FixValParam : public testing::TestWithParam<int>{
public:
  void SetUp(){}
  void TearDown(){}
};

TEST_P(FixValParam, Sort){
    EXPECT_EQ(0, sort());
}

INSTANTIATE_TEST_CASE_P(Values, FixValParam, testing::Values(32,12,45,2,23));

//vector<int>
int array[] = {32,12,45,2,23};
INSTANTIATE_TEST_CASE_P(UsingValuesIn, FixValParam, testing::Values(array));
