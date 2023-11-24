# include <stdio.h>
# include <stdlib.h>
# include "inventario.h"

int main (){
    int op;

    do {
        printf("--- Sistema de Inventario ---\n");
        printf("1. Agregar producto\n");
        printf("2. Editar Producto\n");
        printf("3. Eliminar Producto\n");
        printf("4. Lista de Producto\n");
        printf("5. Salir\n");
        printf("Ingrese opcion:\n");
        scanf("%d",&op);

        switch (op){
        case 1:
            nuevoProducto();
            break;
        case 2:
            editar();
            break;
        case 3:
            eliminar();
            break;
        case 4:
            enlistar();
            break;
        case 5:
            printf("Saliendo del Sistema de Inventario \n");
            break;
        default:
            printf("Opcion Incorrecta\n");
            break;
        }
    }while (op!=5);



    return 0;
}
