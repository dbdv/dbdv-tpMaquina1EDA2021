/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   articulo.h
 * Author: daniel
 *
 * Created on 10 de septiembre de 2021, 10:55
 */

#ifndef ARTICULO_H
#define ARTICULO_H
#define N 20

typedef struct {
  char cod[8], tipoArticulo[N], marca[N], descrip[N];
  int existentes;
  float precio;
}Articulo;

/*Inicializador*/
void init(Articulo *articulo){
    (*articulo).precio = 0;
}

/*Funciones cargar y mostrar*/
void carga_Cod(Articulo *articulo, char codigo[]){
    strcpy((*articulo).cod,codigo);
}
char* mostrar_Cod(Articulo articulo){
    char *aux=(char*)malloc(sizeof(char)*8);
    strcpy(aux, articulo.cod);
    return aux;
}

void carga_TipoArticulo(Articulo *articulo, char tipo[]){
    strcpy((*articulo).tipoArticulo,tipo);
}

char* mostrar_TipoArticulo(Articulo articulo){
     char *aux=(char*)malloc(sizeof(char)*8);
    strcpy(aux, articulo.tipoArticulo);
    return aux;
}

void carga_Marca(Articulo *articulo, char marca[]){
    strcpy((*articulo).marca,marca);
}

char* mostrar_Marca(Articulo articulo){
    char *aux=(char*)malloc(sizeof(char)*8);
    strcpy(aux, articulo.marca);
    return aux;
}

void carga_Descripcion(Articulo *articulo, char descripcion[]){
    strcpy((*articulo).descrip,descripcion);
}

char* mostrar_Descripcion(Articulo articulo){
    char *aux=(char*)malloc(sizeof(char)*8);
    strcpy(aux, articulo.descrip);
    return aux;
}

void carga_Existentes(Articulo *articulo,int cantidad){
    (*articulo).existentes = cantidad;
}

int mostrar_Existentes(Articulo articulo){
    return articulo.existentes;
}

void carga_Precio(Articulo *articulo,float precio){
    (*articulo).precio = precio;
}

float mostrar_Precio(Articulo articulo){
    return articulo.precio;
}

#endif /* ARTICULO_H */

