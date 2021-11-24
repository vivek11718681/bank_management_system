#include "unity.h"
#include "bank.h"
#include "unity_internals.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

struct customer c[1]={{101,"ravi",400}};
void test_search(void)
{
  TEST_ASSERT_EQUAL(0, search(c,1,101));
  TEST_ASSERT_EQUAL(-1, search(c,1,0));
}
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_search);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}