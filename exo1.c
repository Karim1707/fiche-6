#include <stdio.h>

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    for(int i =0; i<taille / 2 ; i++){
        int temp = tableau [i];
        tableau[i] = tableau [taille -1 - i];
        tableau[taille -1 -i] = temp;
    }

    printf("Tableau inversé­ :" );
    for (int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
    }
    printf("\n");
    
    return 0;

}