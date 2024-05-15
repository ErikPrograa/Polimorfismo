#include "Animal.h"

Animal::Animal() = default;

Animal::Animal(Animal &rhs) {

    this->mainColor = rhs.mainColor;
    this->height = rhs.height;
    this->weight = rhs.weight;
    this->age = rhs.age;

}
Animal::Animal(std::string mainColor, float height, float weight, int age){
    this->mainColor = mainColor;
    this->height = height;
    this->weight = weight;
    this->age = age;
}

Animal::~Animal() = default;

void Animal::makeSound() {
    std::cout << "..." << std::endl;
}

float Animal::getHeight() {
    return height;
}
float Animal::getWeight() {
    return weight;
}
int Animal::getAge() {
    return age;
}
std::string Animal::getMainColor() {
    return mainColor;
}
void Animal::setHeight(float height) {
    this->height = height;
}
void Animal::setWeight(float weight) {
    this->weight = weight;
}
void Animal::setAge(int age) {
    this->age = age;
}
void Animal::setMainColor(std::string color) {
    this->mainColor = color;
}
