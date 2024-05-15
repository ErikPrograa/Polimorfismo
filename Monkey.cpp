#include "Monkey.h"

Monkey::Monkey() = default;

Monkey::Monkey(Monkey &rhs) {

    this-> species = rhs.species;
    this->favoriteFood = rhs.favoriteFood;

}
Monkey::Monkey(std::string mainColor, float height, float weight, int age, std::string species, std::string favoriteFood): Animal(mainColor, height, weight, age) {
    this->species = species;
    this->favoriteFood = favoriteFood;
}

Monkey::~Monkey() = default;

void Monkey::makeSound() {
    std::cout << "Uh Uh Ah Ah" << std::endl;
}

std::string Monkey::getfavoriteFood() {
    return favoriteFood;
}
std::string Monkey::getspecies() {
    return species;
}
void Monkey::setspecies(std::string species) {
    this->species = species;
}
void Monkey::setfavoriteFood(std::string favoriteFood) {
    this->favoriteFood = favoriteFood;
}
