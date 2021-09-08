#include "unity.h"
#include "function.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_add_contact(void)
{
  char name[10]="goutami";
  char phone[25]="8073908629";
   char address[50]="Nehruchowk";
   char email[25]="goutamij@gmail.com";
  TEST_ASSERT_EQUAL("goutami",name);
  TEST_ASSERT_EQUAL("Nehruchowk",address);
  TEST_ASSERT_EQUAL("8073908629",phone);
  TEST_ASSERT_EQUAL("goutamij@gmail.com",email);
  

}


int test_main(void)
{
/* Initiate the Unity Test Framework*/
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_contact);
 
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}