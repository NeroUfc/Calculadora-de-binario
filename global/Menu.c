#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void tela(){
    int opc;
    puts(" ..######.....###....##........######..##.....##.##..........###....########...#######..########.....###...");
    puts(".##....##...##.##...##.......##....##.##.....##.##.........##.##...##.....##.##.....##.##.....##...##.##..");
    puts( ".##........##...##..##.......##.......##.....##.##........##...##..##.....##.##.....##.##.....##..##...##.");
    puts( ".##.......##.....##.##.......##.......##.....##.##.......##.....##.##.....##.##.....##.########..##.....##");
    puts( ".##.......#########.##.......##.......##.....##.##.......#########.##.....##.##.....##.##...##...#########");
    puts( ".##....##.##.....##.##.......##....##.##.....##.##.......##.....##.##.....##.##.....##.##....##..##.....##");
    puts( "..######..##.....##.########..######...#######..########.##.....##.########...#######..##.....##.##.....##");
    printf("\t\t Menu:\n");
    printf("Selecione uma opcao:\n");
    printf("1-----> Binario para decimal.\n");
    printf("2-----> Decimal para binario.\n");
    printf("3-----> Decimal para Hexadecimal.\n");
}
int selecao(int opc){
    aqui:
    switch (opc) {
        case 1:
            return 0;
        case 2:
            return 1;
        case 3:
            return 2;
        default:
            printf("Digite opçao valida:");
            system("Pause");
            system("cls");
            goto aqui;
    }
    system("cls");

}
