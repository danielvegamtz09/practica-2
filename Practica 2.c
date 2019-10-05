/*
practica 2
Vega Martimnez Daniel
*/
#include<stdlib.h>
#include<conio.h>
int main (void){
float a,b,c
char repeticion;
do{
printf(*elige una operacion \n*);
printf("1.-suma cn");
printf("2.-resta \n");
printf("3.-multiplicacion \n");
printf("4.-division \n");

scanf("%d",&opt);
printf("introduce la primera cantidad:");
scanf("%d",&a);
printf("introduce la segunda catidad:");
scanf("%d",&b);
int c;
int opt;
swich (opt){
case 1:
    c=a+b
    printf("el resultado es:%f\n",c);
    break;
case 2:
    c=a-b
    printf("el resultado es:%f\n",c);
    break;
case 3:
    c=a*b
    printf("el resultado es:%f\n",c);
    break;
case 4:
    while(b==0){
        printf("el segundo operando debe ser distinto na cero")
        printf("introduce el segundo operando")
        scanf("%f",&b);
    }
 c= a/b;
 break;
    default:
        printf("opcion invalida")
}
printf("deseas hacer otra operacion ? S N :")
repeticion=getc();
}
   while (repeticion=="S" || repeticion=="s")
}
