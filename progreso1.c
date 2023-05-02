#include<stdio.h>
float sumatoria(int a){
    float resultado;
    resultado=(2*a)+1;
     if (a%2==0){
     resultado= 1/resultado;
    }
    else {
       resultado= -1/resultado; 
    }
    return resultado;
}

int main(){
float b, sum;
int num, i;
sum=0;
printf("Ingrese el numero a evaluar\n");
scanf("%d", &num);

for (i=0; i<=num; i++){
    printf ("i:%d\n", i);
b=sumatoria(i);
printf("%f\n", b);
sum=sum+b;
}

printf("El resultado es: %f\n", sum);
    return 0;
}