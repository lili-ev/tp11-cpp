
#include <iostream>
#include <vector>
#include "Animal.h"

using namespace std;

int main() {

    // Création d'un vecteur de pointeurs vers Animal
    vector<Animal*> animaux;

    // Ajout des différents animaux
    animaux.push_back(new Chien());
    animaux.push_back(new Chat());
    animaux.push_back(new Vache());

    cout << "--- Gestion des animaux ---" << endl;

    // Parcours du vecteur
    for (int i = 0; i < animaux.size(); i++) {

        animaux[i]->info();

        animaux[i]->crier();

        cout << endl;
    }

    // Libération de la mémoire
    for (int i = 0; i < animaux.size(); i++) {
        delete animaux[i];
    }

    animaux.clear();

    return 0;
}
