/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: daniel
 *
 * Created on 10 de septiembre de 2021, 10:35
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "articulo.h"

#define N 20
int contadorExistentes = 0;

void menu_LSO();
void menu_LSOBI();
void ingresar(Articulo articulos[], Articulo aIngresar);
void eliminar(Articulo articulos[]);
void buscarLSO(Articulo articulos[], char aBuscar[], int *exito, int *posicion);
void buscarLSO_Binario(Articulo articulos[], char aBuscar[], int *exito, int *posicion);
void consultar(Articulo articulos[], int posicion);
/*
 * 
 */
int main() {        
        
    Articulo inventario[250];
    init(inventario);
    
    /*int opcion;
    
    do{
        printf("MENU: Seleccione tipo de lista con la que desea trabajar\n");
        printf("1:Lista secuencial ordenada\n2:Lista secuencial ordenada con busqueda binaria\n3:Salir\n");
        scanf("%d",&opcion);
    }while(opcion<1 || opcion>3);
    
    printf("%d",opcion);

    switch(opcion){
        case 3:     return 0;
        
        case 1:     
            break;
            
        case 2:
            break;
    }*/
    return 0;
}

void menu_LSO(Articulo inventario[]){
    int opcion, cant_aux, posicion, exito;
    float precio_aux;
    Articulo art_aux;
    init(&art_aux);
    char codigos_aux [8];
    char textos_aux [N];
    
    
    do{
        
    do{
        printf("MENU LSO: Seleccione la operacion\n");
        printf("1: Ingresar un articulo.\n2: Eliminar un articulo\n3: Consultar por un articulo\n4: Consultar existencia de articulo.\n5: Precargar archivos.\n6: Mostrar inventario.\n7: Atras");
        scanf("%d",&opcion);
    }while(opcion<1 || opcion>7);
    
    printf("%d",opcion);

    switch(opcion){
        case 7: 
            printf("Fin\n");
            break;
        
        case 1:
            if(contadorExistentes == 250){
                printf("El inventario esta lleno, ya no se pueden ingresar mas articulos.\n");
            }else{
            printf("Ingrese el codigo del articulo: ");
            scanf("%s", codigos_aux);
            carga_Cod(&art_aux, codigos_aux);
            
            printf("Ingrese la marca del articulo: ");
            scanf("%s", textos_aux);
            carga_Marca(&art_aux, textos_aux);
            
            printf("Ingrese una descripcion para el articulo: ");
            scanf("%s", textos_aux);
            carga_Descripcion(&art_aux, textos_aux);
            
            printf("Ingrese el tipo articulo: ");
            scanf("%s", textos_aux);
            carga_TipoArticulo(&art_aux, textos_aux);
            
            printf("Ingrese la cantidad de articulos: ");
            scanf("%i", &cant_aux);
            carga_Existentes(&art_aux, cant_aux);
           
            printf("Ingrese el precio del articulo: ");
            scanf("%f", &precio_aux);
            carga_Precio(&art_aux, precio_aux);
            
            buscarLSO(inventario, mostrar_Cod(art_aux), &exito, &posicion);
            if(exito){
                printf("El articulo que intenta ingresar ya se encuentra cargado.\n");
            }else{
                ingresar(inventario, art_aux);
                contadorExistentes++;
            }
            }
            break;
            
        case 2:
             break;
            
        case 3:
            break;
            
        case 4:
            break;
            
        case 5:
            break;
            
        case 6:
            break;
            
    }
}while(opcion != 7);
}

void menu_LSOBI(){
    
}

void ingresar(Articulo articulos[], Articulo aIngresar){
    
}

void eliminar(Articulo articulos[]){
    
}

void buscarLSO(Articulo articulos[], char aBuscar[],  int *exito, int *posicion){
    
}

void buscarLSO_Binario(Articulo articulos[], char aBuscar[], int *exito, int *posicion){
    
}

void consultar(Articulo articulos[], int posicion){
    
    
}