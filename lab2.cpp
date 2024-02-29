#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    Animal(string a, int b) : name(a), age(b){}

    void makeSound(){
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string a, int b) : Animal(a, b) {}

    void makeSound(){
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string a, int b) : Animal(a, b) {}

    void makeSound(){
        cout << "Cat barks" << endl;
    }
};

int main(){
    Dog dog("Сейчас", 12);
    Cat cat("НОЧЬ", 15);

    cat.makeSound();
    dog.makeSound();

    return 0;
}