/*
Exerc�cio 5: 
Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e apresentando o total de vendas ao final. Considere que cada venda precisa do nome de um produto, seu pre�o e sua quantidade. Crie um menu onde o usu�rio possa digitar o n�mero 1 para adicionar uma venda e o n�mero 2 para sair do menu e exibir o total das vendas realizadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int i, n[5];
    int nImpar=0,nPar=0,nNegativo=0,maiorN,menorN;
    float mediaPar=0, mediaTotal=0;

    for(i=0;i<5;i++){
        printf("Informe o %i� n�mero inteiro:",i+1);
        scanf("%i",&n[i]);

        mediaTotal+=n[i]/5;

        nNegativo += n[i]<0?1:0;

        if(n[i]%2==0){
            nPar++;
            mediaPar+=n[i];
        }else{
            nImpar++;
        }
        
        if(i==0){
            maiorN = menorN = n[i];
        }else{
            maiorN = n[i]>maiorN?n[i]:maiorN;
            menorN = n[i]<menorN?n[i]:menorN;
        }
    }

    mediaPar/=nPar;

    system("cls || clear");

    printf("N�MERO DE IMPARES: %i\n",nImpar);
    printf("QUANTIDADE DE N�MEROS NEGATIVOS: %i\n",nNegativo);
    printf("MAIOR: %i | MENOR%i\n",maiorN,menorN);
    printf("M�DIA PARES: %.1f\n",mediaPar);
    printf("M�DIA TOTAL: %.1f\n",mediaTotal);

    return 0;
}