#include <iostream>

// make a base class for everyone
class Character {
public:
    Character(int hp = 100) : hp(hp) {
        std::cout << "Character constructor\n";
    }
// private:
    int hp; // health points
};

class Elf : virtual public Character {
public:
    Elf() {
        std::cout << "I am an Elf!\n";
    }
    void think() const {
        std::cout << "Let's not fight!\n";
    }
};

// make virtual to use only one instance of Character property
// prevents ElfWarrior from having two health points
class Warrior : virtual public Character {
public:
    Warrior() {
        std::cout << "I am a Warrior!\n";
    }
    void fight() const {
        std::cout << "Slash!\n";
    }
};

class ElfWarrior : public Elf, public Warrior {

};

int main(void) {
    ElfWarrior buddy; // both constructors of both of the parent classes are called without using keyword virtual

    buddy.fight();
    buddy.think();

    std::cout << buddy.hp << std::endl;

    return 0;
}