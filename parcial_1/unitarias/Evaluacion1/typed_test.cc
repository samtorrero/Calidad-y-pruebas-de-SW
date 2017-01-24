#include "gtest/gtest.h"
#include "sort3.h"

template<class instanceType>
class FixTyped : public testing::Test {
public:
	FixTyped() {
		instance2Test = new instanceType;
	}
  ~FixTyped() {
    delete instance2Test;
    instance2Test = NULL;
  }
protected:
	Sort* instance2Test;
};

typedef testing::Types<Sort1> implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(FixTyped, testName) {
	EXPECT_EQ(0, this->instance2Test->sort());
}
