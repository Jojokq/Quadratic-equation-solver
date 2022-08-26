#include "square_solver.h"
//----------------------------------------------------------------------------------------------------
//! @brief calculation error (lesser -> greater accuracy)
//----------------------------------------------------------------------------------------------------
const double EPSILON = 10e-9;

NUM_ROOTS SolveQuadraticEquation(struct COEFS coefs, double *x1, double *x2)
{
    assert (isfinite (coefs.a));
    assert (isfinite (coefs.b));
    assert (isfinite (coefs.c));

    assert (x1 != nullptr);
    assert (x2 != nullptr);

    if (isCompareZero(coefs.a))
    {
        return SolveLinearEquation(coefs, x1, x2);
    }
    else
    {
        double D = 0;
        double double_a = 2*(coefs.a);

        D = (coefs.b*coefs.b - 4 * coefs.a * coefs.c);

        if (D < 0)
            return zero_roots;
        else if (isCompareZero(D))
        {
            *x1 = -coefs.b / double_a;
            return one_root;
        }
        else
        {
            *x1 = (-coefs.b + sqrt(D))/double_a;
            *x2 = (-coefs.b - sqrt(D))/double_a;
            return two_roots;
        }
    }
}

int isCompareZero(const double elem)
{
    return (fabs(elem) < EPSILON) ? 1 : 0;
}

NUM_ROOTS SolveLinearEquation(struct COEFS coefs, double *x1, double *x2)
{
    if (isCompareZero(coefs.b))
    {
        return isCompareZero(coefs.c) ? inf_roots : zero_roots;
    }
    else
    {
        * x1 = -coefs.c/coefs.b;
        return one_root;
    }
}

