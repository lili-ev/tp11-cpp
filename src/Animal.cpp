
#include "Animal.h"
#include <iostream>

using namespace std;

// Destructeur
Animal::~Animal() {
}

// Méthode info
void Animal::info() const {
    cout << "Je suis un animal." << endl;
}

// Chien
void Chien::crier() const {
    cout << "Wouf !" << endl;
}

// Chat
void Chat::crier() const {
    cout << "Miaou !" << endl;
}

// Vache
void Vache::crier() const {
    cout << "Meuh !" << endl;
}
