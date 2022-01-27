/* Programa para saber se é par ou impar

por José de Ribamar Siqueira Bastos

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Entre com o valor de x:  ");
    scanf("%d", &x);

    if (x %2== 0)
        printf("\n par");

        else
            printf("\n impar");

     //return 0;
     getch();

}
