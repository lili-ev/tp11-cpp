
#include "NoeudFichier.h"

// Destructeur de NoeudFichier
NoeudFichier::~NoeudFichier() {
}

// Constructeur de Fichier
Fichier::Fichier(string nom, int taille) {
    nomFichier = nom;
    tailleFichier = taille;
}

// Retourner le nom du fichier
string Fichier::nom() const {
    return nomFichier;
}

// Retourner la taille du fichier
int Fichier::taille() const {
    return tailleFichier;
}

// Constructeur de Dossier
Dossier::Dossier(string nom) {
    nomDossier = nom;
}

// Retourner le nom du dossier
string Dossier::nom() const {
    return nomDossier;
}

// Calculer la taille totale du dossier
int Dossier::taille() const {
    int total = 0;

    for (int i = 0; i < enfants.size(); i++) {
        total += enfants[i]->taille();
    }

    return total;
}

// Ajouter un fichier ou un sous-dossier
void Dossier::ajouter(NoeudFichier* noeud) {
    enfants.push_back(noeud);
}

// Libérer la mémoire des enfants
Dossier::~Dossier() {
    for (int i = 0; i < enfants.size(); i++) {
        delete enfants[i];
    }
}
