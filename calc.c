#include<stdio.h>
#include<stdlib.h>
#include"global/Menu.c"
#include"global/ops.c"
#include"global/func.c"
int main(){
    int bin[8],bins,opc, dec,hex,tam;
    comeco:
    system("cls");
    tela();
    scanf("%d",&opc);
    selecao(opc);
    if(selecao(opc)== 0){
        printf("Binario ----> Decimal\n");
        printf("Insira o numero:\n");
        scanf("%d",&bins);
        num_vetor(bins,bin);
        BPD(bin);
        printf("\nDeseja retornar ao menu?? 1->sim 2->nao\n");
        scanf("%d",&opc);
        if(opc==1){
            goto comeco;
        }else{
            exit(0);
        }

    }else if(selecao(opc)== 1){
        printf("Decimal ----> Binario\n");
        printf("Insira O numero para a conversao:\n");
        scanf("%d",&dec);
        DPB(dec);
        printf("\nDeseja retornar ao menu?? 1->sim 2->nao\n");
        scanf("%d",&opc);
        if(opc==1){
            goto comeco;
        }else{
            exit(0);
        }

    }else if(selecao(opc)==2){
        printf("Decimal ----> hexadecimal\n");
        printf("Insira O numero para a conversao:\n");
        scanf("%d",&hex);
        tam=qt_alg(hex);
        DPH(hex,tam);
        printf("\nDeseja retornar ao menu?? 1->sim 2->nao\n");
        scanf("%d",&opc);
        if(opc==1){
            goto comeco;
        }else{
            exit(0);
        }
    }

    return 0;
}
