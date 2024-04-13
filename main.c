#include <stdio.h>
#include <string.h>
#include <stdlib.h>
///void cambio(int *a,int *b);
///int suma(int *a, int *b);
///int prod(int *a, int *b);
///void cubo(int *a, int *b);
///void lonicad(int *a, char *b);
///void mayus(char *cad);
///void mayusprimera(char *pcad);
///void darvueltacad(char *p, char *p2);
///int comprarcadena(char *p,char *p2);
void copiarcadena(char *p,char *p2);
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
    /*pto 10
    char cadena[]= {"prueba de fuego"};
    char *pcad = &cadena;
    mayus(pcad);*/
    /*pto 11
    char cadena[]= {"la primera mayus"};
    char *pcad = &cadena;
    mayusprimera(pcad);*/
    /*pto 12
    char cadena1[]= {"veamos esto"};
    char cadena2[]= {"veamos esto"};
    char *pcad1 = & cadena1;
    char *pcad2 = & cadena2;
    printf("%s\n",pcad1);
    printf("%s\n",pcad2);
    darvueltacad(pcad1,pcad2);
    printf("%s\n",pcad2);*/
    /*pto 13
    char cadena1[]={"cadena  de prueba"};
    char cadena2[]={"cadena  de prueba"};
    char *pcad1=&cadena1;
    char *pcad2=&cadena2;
    int igual = comprarcadena(pcad1,pcad2);
    if (igual==0){
        printf("son iguales\n");
    }else{
        printf("son diferentes\n");
    }*/
    char cad1[]={"esta es la cadena"};
    char *p = &cad1;
    char *p2 =NULL;
    int a = 18;
    printf("%d",a);
    p2 = malloc(18*sizeof(char));
    copiarcadena(p,p2);
    printf("%s\n",p);
    return 0;
}
void copiarcadena(char *p,char *p2){
    for(int i=0;*(p+i)!='\0';i++){
        printf("%c\t",*(p+i));
        printf("%c\t",*(p2+i));
        p2[i] = *(p+i);
    }
}
/*int comprarcadena(char *p,char *p2){
    for(int i=0;*(p+i)!='\0';i++){
        if(*(p+i)!=*(p2+i)){
            return 1;
        }
    }
    return 0;
}*/
/*void darvueltacad(char *p, char *p2){
    int j = 0;
    for (int i = strlen(p);i>=0;i--){
        if(*(p2+i)!='\0'){
            *(p2+j)=*(p+i);
            j++;
        }
    }
}*/
/*void mayusprimera(char *pcad){
    for (int i=0; *(pcad+i) != '\0';i++){
        if (*(pcad+i)!=' ' && *(pcad+i-1)!=' ' && i!=0){
        *(pcad+i)=*(pcad+i)-32;
        printf("%c\n",*(pcad+i));
        }
    }
}*/
/*void mayus(char *cad){
    for (int i=0; *(cad+i) != '\0';i++){
        if (*(cad+i)!=' '){
        printf("%c\n",*(cad+i));
        *(cad+i)=*(cad+i)-32;}
    }
}*/
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
