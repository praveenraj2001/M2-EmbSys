#include "../unity/unity.h"
#include "../header/onlytesting.h"

void setUp()
{
   
}
void tearDown()
{
} 

void test_map(void) 
{ int val = map(20, 492, 478, 20, 35);
  TEST_ASSERT_EQUAL_INT(20,val);
}




int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_map);

  return UNITY_END();
}