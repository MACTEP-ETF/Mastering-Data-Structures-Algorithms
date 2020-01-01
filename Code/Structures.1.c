/*******************************
Autors : Vladimirs Fedorovics
Mērķis : Structure. Bāze.
*******************************/

#include <stdio.h>
#include <stdlib.h>

struct Taisnsturis
{
    int garums;
    int platums;
};

int main()
{
    //struct Taisnsturis r; //deklarācija
    struct Taisnsturis r = {10,5}; //deklarācija un inicializācija
    
    r.garums = 15; //Šādā veidā mēs piekļūstam pie locekļiem
    r.platums = 15;
    
    printf("Trīstūra laukums ir %d", r.garums*r.platums);
    
    return EXIT_SUCCESS;
}
