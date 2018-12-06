#include<stdlib.h>
#include<stdio.h>
#include <string.h>
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
int DPH(int dec){
    char hexa[10] = {'\0'}, getInt[10] = {'\0'};
    int q,resto,i;

    do{
 	    q = dec / 16;
 		resto = dec % 16;
 		dec /= 16;

 	switch(resto){
 		case 10:
 			strcat(hexa, "A");
 		break;
 		case 11:
 			strcat(hexa, "B");
 		break;
 		case 12:
 			strcat(hexa, "C");
 		break;
 		case 13:
 			strcat(hexa, "D");
 		break;
 		case 14:
 			strcat(hexa, "E");
 		break;
 		case 15:
 			strcat(hexa, "F");
 		break;
 		case 16:
 			strcat(hexa, "G");
 		break;
 		default:
 			sprintf(getInt, "%i", resto);
 			strcat(hexa, getInt);
 	}
 	}while(q != 0);

 	for(i=strlen(hexa); i >= 0; i--){
 		printf("%c", hexa[i]);
 	}
}
