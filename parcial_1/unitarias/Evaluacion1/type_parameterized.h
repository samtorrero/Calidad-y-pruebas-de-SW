#include "gtest/gtest.h"
#include "sort3.h"

template<class instanceType>
class TypeParameterized : public testing::Test
{
public:
    TypeParameterized()
    {
        instance2Test = new instanceType;
    }
    ~TypeParameterized()
    {
        delete instance2Test;
        instance2Test = NULL;
    }
protected:
    Sort* instance2Test;
};

TYPED_TEST_CASE_P(TypeParameterized);

TYPED_TEST_P(TypeParameterized, simple)
{
    EXPECT_EQ(0, this->instance2Test->sort());
}

TYPED_TEST_P(TypeParameterized, advanced)
{
    EXPECT_EQ(0, this->instance2Test->sort());
}

REGISTER_TYPED_TEST_CASE_P(TypeParameterized, simple, advanced);
