
#include "Forme.h"
#include <cmath>

Forme::~Forme() {
}

// Constructeur du cercle
Cercle::Cercle(double r) {
    rayon = r;
}

// Calcul de l'aire du cercle
double Cercle::aire() const {
    return 3.14159 * rayon * rayon;
}

// Constructeur du rectangle
Rectangle::Rectangle(double l, double larg) {
    longueur = l;
    largeur = larg;
}

// Calcul de l'aire du rectangle
double Rectangle::aire() const {
    return longueur * largeur;
}
