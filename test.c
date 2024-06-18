#ifndef stdlib_h
#define stdlib_h
#include <stdlib.h>
#endif /* stdlid_h */

#ifndef stdio_h
#define stdio_h
#include <stdio.h>
#endif /* stdio_h */

#ifndef string_h
#define string_h
#include <string.h>
#endif /* string_h */


typedef struct Arbol{
    char letra;
    int largo;
    struct Nodo *derecha;
    struct Nodo *izquierda;
}Arbol;

typedef struct Nodo{
    char letra;
    struct Nodo *derecha;
    struct Nodo *izquierda;
}Nodo;


Nodo* crearNodo(char letra){
  Nodo* nodo = (Nodo*)malloc(sizeof(Nodo));
  if(nodo != NULL){
    nodo->letra = letra ;
    nodo->derecha = NULL;
    nodo->izquierda = NULL;
  }
  return nodo;
}

void imprimirLista(struct Nodo* inicio) {
    struct Nodo* actual = inicio;
    while (actual != NULL)
    {
        
        printf("%c", actual->letra);
        if(actual->derecha != NULL){
            actual = actual->izquierda;
        }else if(actual->izquierda != NULL){
            actual = actual->derecha;
        }else{
            return;
        }
        
    }
} 


int main(){
  //  printf("helllo wolrd");

    Arbol *arbolitOriginal = (Arbol*)malloc(sizeof(Arbol));    //creamos y damos memoria
    Arbol *arbolito = (Arbol*)malloc(sizeof(Arbol));    //creamos y damos memoria
    arbolito ->largo = 3;
    arbolito->letra = 'b'  ;
    arbolito ->derecha = NULL;
    arbolito ->izquierda = NULL;
    char entrada = 'c';

    arbolitOriginal = arbolito;
    if(arbolito->letra < entrada){
        arbolito ->derecha = crearNodo(entrada);
    }
    entrada = 'a';
    if(arbolito->letra > entrada){
        arbolito ->izquierda = crearNodo(entrada);
        
    }
    printf("%c",arbolito->letra);
        if(arbolito->izquierda!= NULL){
            imprimirLista(arbolito->izquierda);
        }
        if(arbolito->derecha != NULL){
            imprimirLista(arbolito->derecha);
        }
/*
    if('a'>'b'){
        printf("a es mayor");
    }else if('b'>'a'){ //devuelve B es mayor por ASSCI
        printf("b es mayor");
    }*/
    return 0;
}
