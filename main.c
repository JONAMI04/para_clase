#include <stdio.h>
///#include <string.h>
///#include <stdlib.h>
///void cambio(int *a,int *b);
///int suma(int *a, int *b);
///int prod(int *a, int *b);
///void cubo(int *a, int *b);
///void lonicad(int *a, char *b);

int main() {
    /*pto 1
    un puntero es una variable que guarda una direccion de memoria */

    /*pto 2
     el pasaje por valor pasa una direccion de memoria para que sea modificada la variable indirectamente
     el pasaje por valor pasa un valor de una variable y esta es copiada en la subfuncion y modificada ahi*/

    /*pto 3
     son formas de acceder a la direccion de memoria, el * sirve para declarar una variable puntero y acceder
     a lo guardado por el puntero, el & sirve para acceder a la direccion de memoria de una variable*/

    /*pto4 A
     imprime el valor de num que es 8
     imprime la direccion guardada por el puntero
     imprime el valor a donde esrta dirigido el puntero que es 8
    int num = 8;
    int *ptr_num = &num;
    printf("el valor de num: %d\n", num);
    printf("el valor de ptr_num: %p\n", ptr_num);
    printf("el valor apuntado por ptr_num: %d\n", *ptr_num);
    */

    /*pto4 B
    imprime el valor de x que es 5
    imprime el valor de y que es 8
    imprime el valor de x que es 8
    imprime el valor de x que es 8 y el valor de y que es 15
   int x=5, y=10, z=15;
   int *p1, *p2;
   p1=&x;
   p2=&y;
   printf("%d\n", *p1);
   *p1 = 8;
   *p2=*p1;
   printf("%d\n", y);
   p1 = p2;
   *p1=20;
   printf("%d\n", x);
   p2=&z;
   *p1=*p2;
   printf("%d  %d\n",x,y);
    */

    /*pto 4 C
     imprime la direccion de a
     la direccion de a
     el valor de a 7
     el valor de a 7
     basura
     la direccion de a guardada en el puntero
    int a;
    int *aptr;
    a=7;
    aptr=&a;
    printf("1: %p\n2: %p\n3: %d\n4:%d\n5:%dp\n6:%p\n",&a,aptr,a,*aptr,&*aptr,*&aptr);*/

    /*pto 5
    int a=1,b=2;
    int *p1=&a,*p2=&b;
    printf("la var a=%d\nla var b=%d\n",a,b);
    cambio(p1,p2);
    printf("ahora\nla var a=%d\nla var b=%d\n",a,b);
    */

    /*pto 6
    int a=3, b=5, sum, pro;
    int *pa=&a,  *pb=&b;
    sum=suma(pa,pb);
    printf("la suma es: %d\n",sum);
    pro=prod(pa, pb);
    printf("el producto es: %d\n",pro);
     */

    /*pto7
    int num=3;
    if(num%2 == 0){
        printf("el valor es par\n");
    }else{
        printf("el valor es impar\n");
    }
     */

    /*pto 8
    int num=3, cub;
    int *pa=&num , *pcub=&cub;
    cubo(pa,pcub);
    printf("el cubo de %d es: %d\n",num,cub);
     */

    /*pto 9
    int longi=0;
    char cadena[]="esta es la cadena";
    int *plongi= &longi;
    char *pcad= &cadena;
    lonicad(plongi,pcad);
    printf("la longitud de la cadena es: %d\n",longi);
     */

    /*pto 11*/

    printf("");
    return 0;
}

/*void lonicad(int *a,char *b){
    *a= strlen(b);
}*/
/*void cubo(int *a, int *b){
    *b=*a * *a * *a;
}*/
/*void cambio(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}*/
/*int suma(int *a, int *b){
    int sum=*a + *b;
    return sum;
}
int prod(int *a, int *b){
    int producto=*a * *b;
    return producto;
}*/

//asdgg