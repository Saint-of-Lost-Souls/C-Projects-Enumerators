#include <stdio.h>
#include <stdlib.h>

enum months
{
    JAN = 1, // so the index doesn't start at 0
    REB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
};

int main()
{
    enum months my_favourite_month = JUL;
    enum months my_worst_month = DEC;

    printf("\n\n");
    printf("My favourite month of the year is: %d\n", my_favourite_month);
    printf("My least favourite month is: %d\n\n", my_worst_month);

    return EXIT_SUCCESS;
}
