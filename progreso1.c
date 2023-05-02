//Naomi Lizano
//Prueba progreso 1
#include<stdio.h>

//Funcion para definir los valores de la serie
float sumatoria(int a){
    float resultado;

    //priemra parte de la ecuacion dada
    resultado=(2*a)+1;

    //if para definir si el 1 es negativo o positivo dependiendo de si esta elevado a un par o impar
     if (a%2==0){
     resultado= 1/resultado;
    }
    else {
       resultado= -1/resultado; 
    }
    //retorno del resultado
    return resultado;
}

int main(){
//definicion de variables
float b, sum;
int num, i;
sum=0;

do{
printf("Ingrese el numero positivo a evaluar\n");
scanf("%d", &num);
} while (num<0);

//ciclo for para ejecutar la sumatoria 
for (i=0; i<=num; i++){
//se invoca la funcion
b=sumatoria(i);
sum=sum+b;
}

//se devulve el resultado al usuario
printf("El resultado es: %f\n", sum);
    return 0;
}