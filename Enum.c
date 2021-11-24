#include <stdio.h>
#include <stdlib.h>

enum menu // enums are just numbers, 0 1 2 3 4 by default, can be given values
{
    TEA,   
    COFFEE,
    JUICE = 100,  
    BEER ,   
};

int main()
{
    enum menu mario = COFFEE;
    enum menu andrea = BEER;

   //printf("Mario's share of the bill was:  $%d\n", mario);
   //printf("Andrea's share of the bill was: $%d\n", andrea);
    printf("\n");
    printf("Mario drank %d coffee\n", mario);
    printf("Andrea drank %d beers\n\n", andrea);


    return EXIT_SUCCESS;
}
