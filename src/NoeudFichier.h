
#ifndef NOEUDFICHIER_H
#define NOEUDFICHIER_H

#include <string>
#include <vector>

using namespace std;

// Classe abstraite
class NoeudFichier {
public:
    virtual string nom() const = 0;
    virtual int taille() const = 0;

    virtual ~NoeudFichier();
};

// Classe Fichier
class Fichier : public NoeudFichier {
private:
    string nomFichier;
    int tailleFichier;

public:
    Fichier(string nom, int taille);

    string nom() const override;
    int taille() const override;
};

// Classe Dossier
class Dossier : public NoeudFichier {
private:
    string nomDossier;
    vector<NoeudFichier*> enfants;

public:
    Dossier(string nom);

    string nom() const override;
    int taille() const override;

    void ajouter(NoeudFichier* noeud);

    ~Dossier();
};

#endif
