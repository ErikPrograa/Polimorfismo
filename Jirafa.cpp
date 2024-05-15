#include "Jirafa.h"

Jirafa::Jirafa() = default;

Jirafa::Jirafa(Jirafa &rhs) {

    this-> numberOfSpots = rhs.numberOfSpots;
    this->neckLenght = rhs.neckLenght;

}
Jirafa::Jirafa(std::string mainColor, float height, float weight, int age, int numberOfSpots, float neckLenght): Animal(mainColor, height, weight, age) {
    this->numberOfSpots = numberOfSpots;
    this->neckLenght = neckLenght;
}

Jirafa::~Jirafa() = default;

void Jirafa::makeSound() {
    std::cout << "OoooooeeeEEEuuUUggghhhh" << std::endl;
}

float Jirafa::getNeckLenght() {
    return neckLenght;
}
int Jirafa::getNumberOfSpots() {
    return numberOfSpots;
}
void Jirafa::setNumberOfSpots(int numberOfSpots) {
    this->numberOfSpots = numberOfSpots;
}
void Jirafa::setNeckLenght(float neckLenght) {
    this->neckLenght = neckLenght;
}
