#include "../unity/unity.h"
#include "../header/onlytesting.h"

void setUp()
{
   
}
void tearDown()
{
} 

void test_map(void) 
{ 
  TEST_ASSERT_EQUAL_FLOAT(100,fan_led_percent_map(252));
}




int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_map);

  return UNITY_END();
}