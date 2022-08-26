#ifndef SQUARE_SOLVER
#define SQUARE_SOLVER

#include <math.h>
#include <assert.h>
#include "support.h"

//----------------------------------------------------------------------------------------------------
//! @param[in] COEFS struct with three parameters (a,b,c - coef-s in square equation)
//! @param[in] *x1,*x2 - pointers to roots
//! @return number of roots
//----------------------------------------------------------------------------------------------------
NUM_ROOTS SolveQuadraticEquation(struct COEFS, double *x1, double *x2);

//----------------------------------------------------------------------------------------------------
//! @param[in] COEFS struct with three parameters (a,b,c - coef-s in square equation)
//! @param[in] *x1,*x2 - pointers to roots
//! @return number of roots
//----------------------------------------------------------------------------------------------------
NUM_ROOTS SolveLinearEquation(struct COEFS, double *x1, double *x2);

//----------------------------------------------------------------------------------------------------
//! @brief checks if number equal to zero
//! @param[in] elem element comparing to 0
//! @return true or false
//----------------------------------------------------------------------------------------------------
int isCompareZero(const double elem);

#endif // SQUARE_SOLVER
