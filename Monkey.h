#ifndef POLIMORFISMO_MONKEY_H
#define POLIMORFISMO_MONKEY_H
#include "Animal.h"
class Monkey : public Animal {

public:
    Monkey();
    Monkey(Monkey &rhs);
    Monkey(std::string mainColor, float height, float weight, int age, std::string species, std::string favoriteFood);
    virtual ~Monkey();

    std::string getspecies();
    std::string getfavoriteFood();
    void setspecies(std::string species);
    void setfavoriteFood(std::string favoriteFood);


    void makeSound() override;

private:
    std::string species;
    std::string favoriteFood;

};
#endif //POLIMORFISMO_MONKEY_H
