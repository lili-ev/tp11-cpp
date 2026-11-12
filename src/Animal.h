
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    virtual void crier() const = 0;

    void info() const;

    virtual ~Animal();
};

class Chien : public Animal {
public:
    void crier() const override;
};

class Chat : public Animal {
public:
    void crier() const override;
};

class Vache : public Animal {
public:
    void crier() const override;
};

#endif
