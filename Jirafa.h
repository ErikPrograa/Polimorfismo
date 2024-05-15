#ifndef POLIMORFISMO_JIRAFA_H
#define POLIMORFISMO_JIRAFA_H
#include "Animal.h"

class Jirafa : public Animal {

public:
    Jirafa();
    Jirafa(Jirafa &rhs);
    Jirafa(std::string mainColor, float height, float weight, int age, int numberOfSpots, float neckLenght);
    virtual ~Jirafa();

    int getNumberOfSpots();
    float getNeckLenght();
    void setNumberOfSpots(int numberOfSpots);
    void setNeckLenght(float neckLenght);


    void makeSound() override;

private:
    int numberOfSpots;
    float neckLenght;

};

#endif //POLIMORFISMO_JIRAFA_H
