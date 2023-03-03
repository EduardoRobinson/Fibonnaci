#include <stdio.h>

int main(){
    int valor,fib0=0,fib1=1,fib3,verifica=0;
    printf("Qual valor vc deseja saber da sequencia?");
    scanf("%d",&valor);
    for(int i=0;i<40;i++){
        fib3=fib0+fib1;
        fib0=fib1;
        fib1=fib3;
        if(valor==fib3){
            verifica=1;
        }
        printf("\n%d",fib3);
    }
    printf("\n");
    if(verifica==1){
        printf("O valor esta na sequencia");
    }else{
        printf("O valor nao esta na sequencia");
    }
}