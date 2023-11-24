#ifndef INVENTARIO_H_INCLUDED
#define INVENTARIO_H_INCLUDED

# include <stdio.h>
# include <string.h>
#define Capacidad 100
char nombre [Capacidad] [30];
int cantidad[Capacidad];
float precios[Capacidad];
int nproductos=0;

void nuevoProducto(){
    printf("1. Agregar Producto\n");
    printf("Nombre: \n");
    scanf ("%s",nombre[nproductos]);
    printf("Cantidad: \n");
    scanf("%d",&cantidad[nproductos]);
    printf("Precio: \n");
    scanf("%f",&precios[nproductos]);

    nproductos++;

    printf("PRODUCTO AGREGADO\n");

}

void editar(){
   int codigo;
    printf ("2. Editar Producto\n");
    if (nproductos == 0){
        printf ("No hay productos agregados\n");
        return;
    }

    printf("Ingresa el código del producto del 1-%d", nproductos);
    scanf("%d",&codigo);
    if (codigo<1 || codigo>nproductos){
        printf("Codigo Invalido\n");
        return;
    }

    printf("Nombre: %s\n", nombre[codigo-1]);
    printf("Cantidad: %d\n", cantidad[codigo-1]);
    printf("Precio: %f\n",precios[codigo-1]);

    printf("Nuevo Nombre:\n");
    scanf("%s",nombre[codigo-1]);
    printf("Nueva Cantidad:\n");
    scanf("%d",&cantidad[codigo-1]);
    printf("Nuevo Precio: \n");
    scanf("%f",&precios[codigo-1]);

    printf("PRODUCTO EDITADO \n");
}

void eliminar(){
    int codigo;
    printf ("3. Eliminar Producto\n");
     if (nproductos == 0){
        printf ("No hay productos agregados\n");
        return;
    }

    printf("Ingresa el código del producto del 1-%d", nproductos);
    scanf("%d",&codigo);
    if (codigo<1 || codigo>nproductos){
        printf("Codigo Invalido\n");
        return;
    }

    for( int i= codigo-1; i<nproductos-1 ; i++){
        strcpy(nombre[i],nombre[i+1]);
        cantidad[i]= cantidad[i+1];
        precios[i]= precios[i+1];
    }

    nproductos--;
    printf("PRODUCTO ELIMINADO\n");
}

void enlistar(){
    if (nproductos == 0){
        printf ("No hay productos agregados\n");
        return;
    }
    printf("4. Lista de Producto\n");
    for (int i= 0; i<nproductos;i++){
        printf("Codigo Producto: %d\n",i+1);
        printf("Nombre: %s\n",nombre[i]);
        printf("Cantidad: %d\n",cantidad[i]);
        printf("Precio: %.2f\n",precios[i]);
    }
}
#endif // INVENTARIO_H_INCLUDED
