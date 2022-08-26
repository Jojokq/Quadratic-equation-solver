#ifndef SUPPORT
#define SUPPORT

#include <stdio.h>
//----------------------------------------------------------------------------------------------------
//! @brief const with all possible numbers of roots
//----------------------------------------------------------------------------------------------------
enum NUM_ROOTS
{
    inf_roots = -1,
    zero_roots,
    one_root,
    two_roots
};

//----------------------------------------------------------------------------------------------------
//!@brief struct with coef-s of quadratic equation
//----------------------------------------------------------------------------------------------------
struct COEFS
{
    double a;
    double b;
    double c;
};

#endif
