#include <stdio.h>

int main() {
    float notes[] = {12.5, 15.0, 14.5, 13.0, 16.5};
    int taille = sizeof(notes) / sizeof(notes[0]);
    float somme = 0;

    for(int i =0; i <taille / 2 ; i++){
        somme+= notes[i];
    }
    float moyenne = somme / taille; 
    printf("Moyenne:%.2f\n", moyenne);
    
    return 0;
}