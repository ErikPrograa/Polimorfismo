#ifndef POLIMORFISMO_HIPOPOTAMO_H
#define POLIMORFISMO_HIPOPOTAMO_H
#include "Animal.h"

class Hipopotamo : public Animal {

public:
    Hipopotamo();
    Hipopotamo(Hipopotamo &rhs);
    Hipopotamo(std::string mainColor, float height, float weight, int age, int humansKilled, float minsUnderWater);
    virtual ~Hipopotamo();

    int getHumansKilled();
    float getMinsUnderWater();
    void setHumansKilled(int humansKilled);
    void setMinsUnderWater(float minsUnderWater);


    void makeSound() override;

private:
    int humansKilled;
    float minsUnderWater;

};


#endif //POLIMORFISMO_HIPOPOTAMO_H
