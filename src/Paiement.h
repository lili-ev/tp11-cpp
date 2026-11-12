
#ifndef PAIEMENT_H
#define PAIEMENT_H

class Paiement {
public:
    virtual void effectuerPaiement(double montant) = 0;
    virtual ~Paiement();
};

class PaiementCarte : public Paiement {
public:
    void effectuerPaiement(double montant) override;
};

class PaiementEspece : public Paiement {
public:
    void effectuerPaiement(double montant) override;
};

#endif
