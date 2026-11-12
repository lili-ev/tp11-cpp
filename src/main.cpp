
#include <iostream>
#include "Forme.h"

using namespace std;

int main() {

    double rayon;
    double longueur;
    double largeur;

    // Saisie des dimensions du cercle
    cout << "Donner le rayon du cercle : ";
    cin >> rayon;

    // Saisie des dimensions du rectangle
    cout << "Donner la longueur du rectangle : ";
    cin >> longueur;

    cout << "Donner la largeur du rectangle : ";
    cin >> largeur;

    // Tableau de pointeurs vers Forme
    Forme* formes[2];

    // Création des objets
    formes[0] = new Cercle(rayon);
    formes[1] = new Rectangle(longueur, largeur);

    // Affichage des aires
    cout << "\n--- Aires des formes ---" << endl;

    cout << "Aire du cercle : "
         << formes[0]->aire() << endl;

    cout << "Aire du rectangle : "
         << formes[1]->aire() << endl;

    // Libération de la mémoire
    delete formes[0];
    delete formes[1];

    return 0;
}
