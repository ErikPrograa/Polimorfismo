#include "Cebra.h"

Cebra::Cebra() = default;

Cebra::Cebra(Cebra &rhs) {

    this-> numberOfLines = rhs.numberOfLines;
    this->speed = rhs.speed;

}
Cebra::Cebra(std::string mainColor, float height, float weight, int age, int numberOfLines, float speed): Animal(mainColor, height, weight, age) {
    this->numberOfLines = numberOfLines;
    this->speed = speed;
}

Cebra::~Cebra() = default;

void Cebra::makeSound() {
    std::cout << "NiiHoHoHo" << std::endl;
}

float Cebra::getSpeed() {
    return speed;
}
int Cebra::getNumberOfLines() {
    return numberOfLines;
}
void Cebra::setNumberOfLines(int numberOfLines) {
    this->numberOfLines = numberOfLines;
}
void Cebra::setSpeed(float speed) {
    this->speed = speed;
}
