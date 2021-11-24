#include <stdio.h>
#include <stdlib.h>

// typedef renames things to decrease verbosity and increase readibility

typedef enum  // enums are just numbers, 0 1 2 3 4 by default, can be given values
{
    TEA,   
    COFFEE,
    JUICE = 100,  
    BEER ,   
} Menu; // renamed enum Menu

int main()
{
    Menu mario = COFFEE; // don't have to call 'enum menu'
    Menu andrea = BEER;

   //printf("Mario's share of the bill was:  $%d\n", mario);
   //printf("Andrea's share of the bill was: $%d\n", andrea);
    printf("\n");
    printf("Mario drank %d coffee\n", mario);
    printf("Andrea drank %d beers\n\n", andrea);


    return EXIT_SUCCESS;
}
