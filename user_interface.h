#ifndef USER_INTERFACE
#define USER_INTERFACE

#include "support.h"

const char SYMBOL_FOR_CONTINUE = 'y';
//----------------------------------------------------------------------------------------------------
//! @param[in] COEFS * pointer to structure with 3 coef-s
//! @return nothing, it just enters coef-s
//----------------------------------------------------------------------------------------------------
void EnterCoefs (struct COEFS *);

//----------------------------------------------------------------------------------------------------
//! @brief checking if user want to continue
//----------------------------------------------------------------------------------------------------
int ContinueWork();

//----------------------------------------------------------------------------------------------------
//! @brief cleans buffer
//----------------------------------------------------------------------------------------------------
void CleanBuf();

//----------------------------------------------------------------------------------------------------
//! @param[in] NUM_ROOTS number of calculated roots
//! @param[in] *x1,*x2 pointers to roots
//----------------------------------------------------------------------------------------------------
void PrintSolution(const NUM_ROOTS n, const double *x1, const double *x2);

#endif
