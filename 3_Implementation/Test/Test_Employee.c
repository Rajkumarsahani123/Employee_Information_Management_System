/**
 * @file tset_employee.c
 * @author raj.sahani@ltts.com
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"


/* Modify these two lines according to the project */

#define PROJECT_NAME    "Employee_Information_Management_System"

/* Prototypes for all the test functions */

void login()

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
  RUN_TEST(test_login);
  RUN_TEST(test_Exit);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_login(void) {
  TEST_ASSERT_EQUAL(raj, 444 , login(raj, 444 ));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(raj, 444 , login(444 ));
}


