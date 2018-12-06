#include<stdlib.h>
#include<stdio.h>
int DPB(int dec){
    int vet[8]={0,0,0,0,0,0,0,0} ,num=dec,i=7;

    while(num > 0){
        vet[i]= num % 2;
        num = num / 2;
        i -- ;
    }
    for(int i = 0;i <= 7;i++){
        printf("%d",vet[i]);
    }

}
int BPD(int bin[8]){
    int result= 0,num = 1;
    for(int i = 7;i>=0;i--){
        if(bin[i] == 1){
            result=result + num;
        }
        num = num*2;
    }
    printf("%d\n",result);
 }
int DPH(int hex,int tam){
    printf("Em desenvolvimento");
    /*int vet[8]={},num = hex,h1,n1,i=tam;
    while(num>0){
        vet[i]=num % 16;
        num=num / 16;
        i--;
    }
    for(int i=0;i<8;i++){
        if(vet[i]!=0){
            printf("%d\n",vet[i]);
        }
    }*/
}
