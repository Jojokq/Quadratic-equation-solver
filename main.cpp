#include "square_solver.h"
#include "user_interface.h"
#include "testing_module.h"

//----------------------------------------------------------------------------------------------------
//! Quadratic equation solver
//! Made by Joka 23-25.08.22
//----------------------------------------------------------------------------------------------------
int main()
{
    UnitTest();

    struct COEFS coefs = {};
    double x1 = 0, x2 = 0;

    int is_run_solver_quadr_eq = 1;

    while (is_run_solver_quadr_eq)
    {
        EnterCoefs(&coefs);

        NUM_ROOTS nRoots = SolveQuadraticEquation(coefs, &x1, &x2);

        PrintSolution(nRoots, &x1, &x2);

        is_run_solver_quadr_eq = ContinueWork();
    }

    return 0;
}
