#include <stdio.h>
///#include <string.h>
///#include <stdlib.h>
///void cambio(int *a,int *b);
///int suma(int *a, int *b);
///int prod(int *a, int *b);
///void cubo(int *a, int *b);
///void lonicad(int *a, char *b);
///void mayus(char *cad);
///void mayusprimera(char *pcad);
///void darvueltacad(char *p, char *p2);
///int comprarcadena(char *p,char *p2);
int contarcadena(const char p_tex);
///void unioncadena(char *p_tex1,char *p_tex2,char *p_dest);

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
    /*pto 16
    char texto1[20],texto2[20];
    char *p1 = (char *) &texto1, *p2 = texto2, *p3 = NULL;
    printf("ingrese el 1er texto\n");
    fflush(stdin);
    gets(texto1);
    printf("ingrese el 2do texto\n");
    fflush(stdin);
    gets(texto2);
    unioncadena(p1,p2,p3);
    printf("%s \n %s \n %s \n",p1,p2,p3);*/
    /*pto 17
    int *p_conA=NULL, *p_conB=NULL;
    int conja=0;
    int conjb=0;
    printf("Ingrese el tama de 1er conjunto\n");
    scanf("%d",&conja);
    printf("Ingrese el tama de 2do conjunto\n");
    scanf("%d",&conjb);
    p_conA= malloc(conja* sizeof(int));
    p_conB= malloc(conjb* sizeof(int));
    for (int i = 0; i < conja; i++) {
        printf("Ingrese el valor %d en el conjunto A\n",i+1);
        scanf("%d",&p_conA[i]);
    }
    for (int i = 0; i < conjb; i++) {
        printf("Ingrese el valor %d en el conjunto B\n",i+1);
        scanf("%d",&p_conB[i]);
    }
    for (int i = 0; i < conja; i++) {
        for (int j = 0; j < conjb; j++) {
            if(p_conA[i]==p_conB[j]){
                printf("%d esta en la interseccion\n",p_conA[i]);
            }
        }
    }*/
    /*pto 18
    char cad1[20],compara,remplazo;
    char *p1=NULL, *p=&cad1;
    printf("ingrese la cadena\n");
    fflush(stdin);
    gets(cad1);
    fflush(stdin);
    printf("ingrese el valor de busqueda\n");
    scanf("%c",&compara);
    fflush(stdin);
    printf("ingrese el valor de remplazo\n");
    scanf("%c",&remplazo);
    p1= malloc((contarcadena(p)+1)*sizeof(char));
    for(int i = 0; cad1!='\0';i++){
        if(cad1[i]==compara){
            p[i]=compara;
        }
        else{
            p[i]=cad1[i];
        }
    }
    printf("%s\n",cad1);*/
    /*pto 19
     * igual al 5*/
    /*pto 20*/
    int fichero[5][4]={1,2,3,4,5,6,7,8,9,10
    ,11,12,13,14,15,16,17,18,19,20,};
    int busca, cod;
    for(int i = 0;i<5;i++){
        for(int j=0;j<4;j++){
            printf("ingrese el codigo\t");
            cod= scanf("%d",&cod);
            fichero[i][j]= cod;
            printf("%d",fichero[i][j]);
        }
        printf("\n");
    }
    printf("ingrese el codigo a buscar\n");
    for (int i=0; i < 5;i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d",fichero[i][j]);
            }
    }
    scanf("%d",&busca);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            if(busca==fichero[i][j]){
                printf("el fichero esta en el lugar %d columna %d",i,j);
            }
        }
    }
    printf("\n");
    return 0;
}
/*void unioncadena(char *p_tex1,char *p_tex2,char *p_dest){
    int t_tex1= contarcadena(p_tex1);
    int tamano = (t_tex1 + contarcadena(p_tex2))+2;
    p_dest = malloc(sizeof(char)*tamano);
    printf("%s\t",p_dest);
    for (int i = 0; *(p_tex1+i)!='\0'; i++) {
        *(p_dest+i)=*(p_tex1+i);
        printf("%c\t",*(p_dest+i));
    }
    for (int i = 0; *(p_tex2+i)!='\0'; i++) {
        *(p_dest+t_tex1)=*(p_tex2+i);
        printf("%c\t",*(p_dest+t_tex1));
        t_tex1++;
        *(p_dest+t_tex1)='\0';
    }
    printf("%s\t",p_dest);

    printf("%d\t",tamano);

}*/
/*int contarcadena(const char *p_tex){
    int cont=0;
    for (int i=0;*(p_tex+i)!='\0';i++){
        cont++;
    }
    return cont;
}*/
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
