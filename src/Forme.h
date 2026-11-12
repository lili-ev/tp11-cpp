
#ifndef FORME_H
#define FORME_H

class Forme {
public:
    virtual double aire() const = 0;
    virtual ~Forme();
};

class Cercle : public Forme {
private:
    double rayon;

public:
    Cercle(double r);
    double aire() const override;
};

class Rectangle : public Forme {
private:
    double longueur;
    double largeur;

public:
    Rectangle(double l, double larg);
    double aire() const override;
};

#endif
