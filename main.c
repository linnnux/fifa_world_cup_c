#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour charger les données à partir d'un fichier
char **load_data(const char *file_name, int *num_lines) {

}

// Fonction pour retourner le nombre de lignes d'un fichier
int file_count(const char *file_name) {
    FILE *file = fopen(file_name, "r");

}

// Fonction pour retourner le nombre de champs
int field_count(const char *line, const char *sep) {

}

// Fonction pour afficher la matrice
void display_matrix(char **matrix, int num_lines, int num_fields) {

}

int main() {
    const char *file_name = "FIFA_World_Cup/FIFA-2022.txt";
    int num_lines;
    char **data = load_data(file_name, &num_lines);
    int num_fields = field_count(data[0], ",");

    printf("file fields: %s\n", data[0]);
    printf("file fields number: %d\n", num_fields);
    printf("file lines number: %d\n", num_lines);

    display_matrix(data, num_lines, num_fields);

    return 0;
}
