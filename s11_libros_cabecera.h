
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LIBROS 10
#define MAX_TITULO 100
#define MAX_AUTOR 50
#define MAX_ESTADO 20

// Estructura libros
typedef struct {
    int id;
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int anio_publicacion;
    char estado[MAX_ESTADO];
} Libro;

// Estructura biblioteca
typedef struct {
    Libro libros[MAX_LIBROS];
    int total_libros;
} Biblioteca;


void inicializar_biblioteca(Biblioteca *biblioteca);
int agregar_libro(Biblioteca *biblioteca);
void mostrar_libros(Biblioteca *biblioteca);
void buscar_libro(Biblioteca *biblioteca);
void actualizar_estado(Biblioteca *biblioteca);
void eliminar_libro(Biblioteca *biblioteca);
int validar_id_unico(Biblioteca *biblioteca, int id);
void mostrar_menu();


