#include "unity.h"

/* Modify these two lines according to the project */
#include "Elections.h"
#define PROJECT_NAME   "Election voteing"

/* Prototypes for all the test functions */
void test_voidvotescount(void);




/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_votescount);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_votescount(void) {
  TEST_ASSERT_EQUAL(6,votescount());
  TEST_ASSERT_EQUAL(7,votescount());
  
}

