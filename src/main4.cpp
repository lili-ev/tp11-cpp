
#include <iostream>
#include <string>
#include <limits>
#include "NoeudFichier.h"

using namespace std;

// Fonction pour remplir un dossier
void remplirDossier(Dossier* dossier) {

    int nbFichiers;
    int nbDossiers;

    cout << "\nNombre de fichiers dans "
         << dossier->nom() << " : ";
    cin >> nbFichiers;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Ajouter les fichiers
    for (int i = 0; i < nbFichiers; i++) {

        string nomFichier;
        int tailleFichier;

        cout << "Nom du fichier " << i + 1 << " : ";
        getline(cin, nomFichier);

        cout << "Taille du fichier en octets : ";
        cin >> tailleFichier;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        dossier->ajouter(new Fichier(nomFichier, tailleFichier));
    }

    // Ajouter les sous-dossiers
    cout << "\nNombre de sous-dossiers dans "
         << dossier->nom() << " : ";
    cin >> nbDossiers;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < nbDossiers; i++) {

        string nomDossier;

        cout << "Nom du sous-dossier " << i + 1 << " : ";
        getline(cin, nomDossier);

        Dossier* sousDossier = new Dossier(nomDossier);

        dossier->ajouter(sousDossier);

        // Remplir le sous-dossier
        remplirDossier(sousDossier);
    }
}

int main() {

    string nomRacine;

    cout << "=== Systeme de fichiers virtuel ===" << endl;

    cout << "Nom du dossier principal : ";
    getline(cin, nomRacine);

    Dossier* dossierPrincipal = new Dossier(nomRacine);

    // Création de la structure
    remplirDossier(dossierPrincipal);

    // Afficher la taille totale
    cout << "\n=== Resultat ===" << endl;

    cout << "Dossier selectionne : "
         << dossierPrincipal->nom() << endl;

    cout << "Taille totale : "
         << dossierPrincipal->taille()
         << " octets" << endl;

    // Libération de la mémoire
    delete dossierPrincipal;

    return 0;
}
