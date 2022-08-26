#ifndef TESTING_MODULE
#define TESTING_MODULE

#include <iostream>
#include "support.h"
//----------------------------------------------------------------------------------------------------
//! @brief test status, can be passed or failed
//----------------------------------------------------------------------------------------------------
enum TEST_STATUS
{
    TEST_PASSED,
    TEST_FAILED
};

//----------------------------------------------------------------------------------------------------
//! @brief struct that contains correct roots (for tests)
//----------------------------------------------------------------------------------------------------
struct NICE_ROOTS
{
    double true_x1;
    double true_x2;
};

//----------------------------------------------------------------------------------------------------
//! @brief function that takes tests (to change tests you need change this function)
//----------------------------------------------------------------------------------------------------
void UnitTest();

#endif
