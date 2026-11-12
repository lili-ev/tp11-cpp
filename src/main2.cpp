
#include <iostream>
#include "Paiement.h"

using namespace std;

int main() {

    // Tableau de pointeurs vers Paiement
    Paiement* paiements[4];

    // Création des différentes instances
    paiements[0] = new PaiementCarte();
    paiements[1] = new PaiementEspece();
    paiements[2] = new PaiementCarte();
    paiements[3] = new PaiementEspece();

    // Montants des paiements
    double montants[4] = {250, 100, 500, 75};

    cout << "--- Simulation des paiements ---" << endl;

    // Utilisation du polymorphisme
    for (int i = 0; i < 4; i++) {
        paiements[i]->effectuerPaiement(montants[i]);
    }

    // Libération de la mémoire
    for (int i = 0; i < 4; i++) {
        delete paiements[i];
    }

    return 0;
}
