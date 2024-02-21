#include <stdio.h>

void interchangerValeur(int *varUn, int *varDeux);

int main(){
    int numUn, numDeux;

    printf("Veillez saisir votre premier chiffre : ");
    scanf("%d", &numUn);

    printf("Veillez saisir votre second chiffre : ");
    scanf("%d", &numDeux);

    printf("Valuers actuelles :\nPremier Chiffre : %d     Second Chiffre : %d\n\n", numUn, numDeux );

    interchangerValeur(&numUn, &numDeux);
    printf("Valuers interchangées :\nPremier Chiffre : %d     Second Chiffre : %d\n", numUn, numDeux );
    return 0;
}

void interchangerValeur(int *varUn, int *varDeux){
    int stockTemporaire = *varUn;
    *varUn = *varDeux;
    *varDeux = stockTemporaire;
}