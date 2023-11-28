#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int i,j;
    char bandas[3][200], nomes[3][5][200];

    for(i=0;i<3;i++){
        printf("Informe o nome da %iª banda: ",i+1);
        gets(bandas[i]);
        for(j=0;j<5;j++){
            printf("    Informe o nome do %iº integrante: ",i+1);
            gets(nomes[i][j]);
        }
        printf("\n");
    }
    
    system("cls || clear");

    for(i=0;i<3;i++){
        printf("%iª BANDA: %s\n",i+1,bandas[i]);
        for(j=0;j<5;j++){
            printf("    %iº INTEGRANTE: %s\n",i+1,nomes[i][j]);
        }
        printf("\n");
    }

    return 0;
}