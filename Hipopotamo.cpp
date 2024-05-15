#include "Hipopotamo.h"

Hipopotamo::Hipopotamo() = default;

Hipopotamo::Hipopotamo(Hipopotamo &rhs) {

    this-> humansKilled = rhs.humansKilled;
    this->minsUnderWater = rhs.minsUnderWater;

}
Hipopotamo::Hipopotamo(std::string mainColor, float height, float weight, int age, int humansKilled, float minsUnderWater): Animal(mainColor, height, weight, age) {
    this->humansKilled = humansKilled;
    this->minsUnderWater = minsUnderWater;
}

Hipopotamo::~Hipopotamo() = default;

void Hipopotamo::makeSound() {
    std::cout << "Glu Glu" << std::endl;
}

float Hipopotamo::getMinsUnderWater() {
    return minsUnderWater;
}
int Hipopotamo::getHumansKilled() {
    return humansKilled;
}
void Hipopotamo::setHumansKilled(int humansKilled) {
    this->humansKilled = humansKilled;
}
void Hipopotamo::setMinsUnderWater(float minsUnderWater) {
    this->minsUnderWater = minsUnderWater;
}
