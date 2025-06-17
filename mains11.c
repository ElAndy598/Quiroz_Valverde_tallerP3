#include <stdio.h>
#include "s11_libros_cabecera.h"

int main() {
    Biblioteca biblioteca;
    inicializar_biblioteca(&biblioteca);
    
    int opcion;
    
    do {
        mostrar_menu();
        
        if (scanf("%d", &opcion) != 1) {
            printf("Opcion invalida. Por favor ingrese un numero.\n");
            continue;
        }
        
        switch (opcion) {
            case 1:
                agregar_libro(&biblioteca);
                break;
            case 2:
                mostrar_libros(&biblioteca);
                break;
            case 3:
                buscar_libro(&biblioteca);
                break;
            case 4:
                actualizar_estado(&biblioteca);
                break;
            case 5:
                eliminar_libro(&biblioteca);
                break;
            case 6:
                printf("\nGracias\n");
                break;
            default:
                printf("Opcion invalida. Por favor seleccione una opcion del 1 al 6.\n");
                break;
        }
        
        if (opcion != 6) {
            printf("\nPresione Enter para continuar");
            getchar();
        }
        
    } while (opcion != 6);
    
    return 0;
}
