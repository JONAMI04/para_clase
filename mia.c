//
// Created by nahue on 19/4/2024.
//
void unioncadena(char *p_tex1,char *p_tex2,char *p_dest){
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

}
int contarcadena(const char *p_tex){
    int cont=0;
    for (int i=0;*(p_tex+i)!='\0';i++){
        cont++;
    }
    return cont;
}
int comprarcadena(char *p,char *p2){
    for(int i=0;*(p+i)!='\0';i++){
        if(*(p+i)!=*(p2+i)){
            return 1;
        }
    }
    return 0;
}
void darvueltacad(char *p, char *p2){
    int j = 0;
    for (int i = strlen(p);i>=0;i--){
        if(*(p2+i)!='\0'){
            *(p2+j)=*(p+i);
            j++;
        }
    }
}
void mayusprimera(char *pcad){
    for (int i=0; *(pcad+i) != '\0';i++){
        if (*(pcad+i)!=' ' && *(pcad+i-1)!=' ' && i!=0){
        *(pcad+i)=*(pcad+i)-32;
        printf("%c\n",*(pcad+i));
        }
    }
}
void mayus(char *cad){
    for (int i=0; *(cad+i) != '\0';i++){
        if (*(cad+i)!=' '){
        printf("%c\n",*(cad+i));
        *(cad+i)=*(cad+i)-32;}
    }
}
void lonicad(int *a,char *b){
    *a= strlen(b);
}
void cubo(int *a, int *b){
    *b=*a * *a * *a;
}
void cambio(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int suma(int *a, int *b){
    int sum=*a + *b;
    return sum;
}
int prod(int *a, int *b){
    int producto=*a * *b;
    return producto;
}