#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool canConstruct(char *ransomNote, char *magazine) {
    bool res = false;            // Resultado inicial
    int len = strlen(ransomNote);
    int len2 = strlen(magazine);

    for (int j = 0; j < len; j++) {
        char temp = ransomNote[j]; // Carácter temporal a verificar
        bool encontrado = false;   // Bandera para indicar si se encontró el carácter en magazine

        for (int i = 0; i < len2; i++) {
            if (temp == magazine[i]) {
                magazine[i] = '\0'; // Reemplaza el carácter en magazine por '\0' para indicar que se ha utilizado
                encontrado = true;  // Marca el carácter como encontrado
                break;              // Rompe el bucle para evitar verificar el mismo carácter varias veces
            }
        }

        if (!encontrado) {
            res = false;  // Si el carácter no se encontró, el resultado es falso
            break;        // Rompe el bucle principal ya que no se puede construir el ransomNote
        }

        res = true;  // Si el carácter se encontró, actualiza el resultado a true
    }

    return res;
}