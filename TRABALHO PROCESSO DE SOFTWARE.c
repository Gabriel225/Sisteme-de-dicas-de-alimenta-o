#include<stdio.h>
int main(){
    int a;
    do{
        printf("--APRESENTACAO DO SOFTWARE.--\n");

        printf("1-Para diabete.\n");
        printf("2-Pressao alta.\n");
        printf("3-Nao tenho nenhuma doenca.\n");


        scanf("%i",&a);

        switch (a){
            case 1:
                printf("Alimentos proprios para quem sofe diabetes.\n");
                break;
            case 2:
                printf("Alimentos proprios para quem sofre de pressao alta.\n");
                break;
            case 3:
                printf("Sair do programa.\n");
                break;
        }
    }while(a!=3);
    return 0;
}
