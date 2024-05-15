#ifndef POLIMORFISMO_ANIMAL_H
#define POLIMORFISMO_ANIMAL_H
#include <iostream>

class Animal {
public:
    Animal();
    Animal(Animal &rhs);
    Animal(std::string mainColor, float height, float weight, int age);
    virtual ~Animal();

    float getHeight();
    float getWeight();
    int getAge();
    std::string getMainColor();

    void setHeight(float height);
    void setWeight(float weight);
    void setAge(int age);
    void setMainColor(std::string color);

    virtual void makeSound();

private:
    std::string mainColor;
    float height;
    float weight;
    int age;

};

#endif //POLIMORFISMO_ANIMAL_H
