#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    int idade, codigo;
    do{
        printf("Digite a idade: ");
        scanf("%i", &idade);
        if(idade != 0){
            while(idade < 18 || idade > 70){
                printf("Idade inválida, digite novamente: ");
                scanf("%i", &idade);
            }
            printf("Digite o código: ");
            scanf("%i", &codigo);
            if(idade >= 18 && idade <= 24){
                switch(codigo){
                case 7:
                    printf("Grupo baixo\n\n");
                    break;
                case 8:
                    printf("Grupo medio\n\n");
                    break;
                case 9:
                    printf("Grupo alto\n\n");
                    break;
                default:
                    printf("Código inválido\n\n");
                }
            }
            else if(idade >= 25 && idade <= 40){
                switch(codigo){
                case 4:
                    printf("Grupo baixo\n\n");
                    break;
                case 5:
                    printf("Grupo medio\n\n");
                    break;
                case 6:
                    printf("Grupo alto\n\n");
                    break;
                default:
                    printf("Código inválido\n\n");
                }
            }
            else{
                switch(codigo){
                case 1:
                    printf("Grupo baixo\n\n");
                    break;
                case 2:
                    printf("Grupo medio\n\n");
                    break;
                case 3:
                    printf("Grupo alto\n\n");
                    break;
                default:
                    printf("Código inválido\n\n");
                }
            }
        }
    }while(idade != 0);
}