#include "testing_module.h"
#include "square_solver.h"
//----------------------------------------------------------------------------------------------------
//! @brief number of tests
//----------------------------------------------------------------------------------------------------
const int N_TESTS = 5;

static int isCmpRoots(NUM_ROOTS nRoots, NUM_ROOTS true_nRoots) {
    return nRoots == true_nRoots;
}

static TEST_STATUS TestOneEquation(struct COEFS coefs,
                    NUM_ROOTS nRoots, NUM_ROOTS true_nRoots,
                    double *x1, double *x2, double true_x1, double true_x2)
{
    if (!( isCmpRoots(nRoots, true_nRoots) &&
           isCompareZero(*x1 - true_x1)    &&
           isCompareZero(*x2 - true_x2) ))
    {
        printf("FAILED (%lg, %lg, %lg), nRoots = %d , x1 = %lg, x2 = %lg \nExpected nRoots = %d , x1 = %lg, x2 = %lg \n",
                coefs.a, coefs.b, coefs.c, nRoots, *x1, *x2, true_nRoots, true_x1, true_x2);

        return TEST_FAILED;
    }
    else
    {
        printf("TEST_PASSED - ");
        return TEST_PASSED;
    }
}

void UnitTest()
{
    double x1 = 0, x2 = 0;

    int num_of_passed_tests = 0;

    COEFS test_structure_massive_of_coefs[N_TESTS] =
    {
        {0,  0, 0},
        {0,  1, 1},
        {1, -3, 2},
        {1,  1, 1},
        {1, -2, 1}
    };

    NUM_ROOTS true_num_of_Roots_massive[N_TESTS] =
    {
        inf_roots,
        one_root,
        two_roots,
        zero_roots,
        zero_roots
    };

    NICE_ROOTS true_roots_massive[N_TESTS] =
    {
        { 0, 0},
        {-1, 0},
        { 2, 1},
        { 0, 0},
        { 0, 0}
    };

    for (int i = 0; i < N_TESTS; i++)
    {
        NUM_ROOTS nRoots = SolveQuadraticEquation(test_structure_massive_of_coefs[i], &x1, &x2);
        if( !TestOneEquation(test_structure_massive_of_coefs[i],
                             nRoots, true_num_of_Roots_massive[i],
                             &x1, &x2, true_roots_massive[i].true_x1, true_roots_massive[i].true_x2 ))
        {
            num_of_passed_tests += 1;
            printf("%d\n", i);
        }

        x1 = 0; x2 = 0;
    }

    printf("Number of passed tests: %d\n", num_of_passed_tests);
}
