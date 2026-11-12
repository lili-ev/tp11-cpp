
#include "Paiement.h"
#include <iostream>

using namespace std;

Paiement::~Paiement() {
}

void PaiementCarte::effectuerPaiement(double montant) {
    cout << "Paiement de " << montant
         << " DH par carte bancaire." << endl;
}

void PaiementEspece::effectuerPaiement(double montant) {
    cout << "Paiement de " << montant
         << " DH en especes." << endl;
}
