#include<stdio.h>
int sumatoria(int a){
    int resultado;
    if (a%2==0){
    resultado=(1)/(2*a)+1;
    }
    else {
      resultado=(-1)/(2*a)+1;  
    }
    return resultado;
}

int main(){
int num, b, i, sum;
sum=0;
printf("Ingrese el numero a evaluar\n");
scanf("%d", &num);

for (i=0; i<=num; i++){
b=sumatoria(i);
sum=sum+b;
}
printf("ELl resultado es: %d\n", sum);
    return 0;
}