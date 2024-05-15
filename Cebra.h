#ifndef POLIMORFISMO_CEBRA_H
#define POLIMORFISMO_CEBRA_H
#include "Animal.h"
class Cebra : public Animal {

public:
    Cebra();
    Cebra(Cebra &rhs);
    Cebra(std::string mainColor, float height, float weight, int age, int numberOfLines, float speed);
    virtual ~Cebra();

    int getNumberOfLines();
    float getSpeed();
    void setNumberOfLines(int numberOfLines);
    void setSpeed(float speed);


    void makeSound() override;

private:
    int numberOfLines;
    float speed;

};
#endif //POLIMORFISMO_CEBRA_H
