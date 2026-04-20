#include <iostream>

class Weapon {
public:
    virtual void use() = 0; // Abstract function
};

class Gun : public Weapon {
public:
    void use() override {
        std::cout << "BANG!" << std::endl;
    }
private:

};

class MachineGun : public Gun {
public:
    MachineGun() : magazine(20) {
        // why is this empty
    }

    void use() override { // override is optional, makes sure the function already exists in the parent and is a virtual function
        // (if misspelled it won't work so overriede is good to use to check)
        while (magazine--) {
            std::cout << "BANG!";
        }
        std::cout << "\n";
        magazine = 20;
    }
private:
    int magazine;
};

class Bazooka : public Gun {
public:
    void use() override {
        std::cout << "BOOM!" << std::endl;
    }
};

class Knife : public Weapon {
public:
    Knife(bool stainless = false) : is_stainless(stainless) {

    }
    void use() override {
        std::cout << "STAB!" << std::endl;
    }
    bool getIsStainless() {
        return is_stainless;
    }
private:
    bool is_stainless;
};

class Player {
public:
    // takes a reference to the base class
    void use(Weapon& weapon) {
        // use dynamic casting to cast the base class object into any derived class object
        // will have a non-null value if it goes well, or otherwise have a null value
        // Dynamic casting
        // inside parenthesis is the address of the weapon
        Knife* knife = dynamic_cast<Knife*>(&weapon); // casting of a parent address to child pointer
        if (knife != nullptr && knife->getIsStainless()) {
            std::cout << "Stainless knife. Can use it." << std::endl;
            weapon.use();
        }
        // if it is a knife but is not stainless steel
        else if (knife != nullptr && !knife->getIsStainless()) {
            std::cout << "Cannot use non stainless knife." << std::endl;
        }
        else {
            std::cout << "Not a knife." << std::endl;
        }
    }
};

int main (void) {
    Gun gun;
    MachineGun mg;

    mg.use();

    // why is this a pointer???
    std::cout << "Array\n";
    Gun* guns[2] = {&gun, &mg};

    for (int i = 0; i < 2; i++) {
        guns[i]->use();
    }

    std::cout << "Player\n";
    Player player;
    Bazooka bazooka;
    Knife knife(true);

    player.use(gun);
    player.use(mg);
    player.use(bazooka);
    player.use(knife);

    return 0;
}