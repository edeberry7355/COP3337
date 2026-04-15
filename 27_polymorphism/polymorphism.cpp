#include <iostream>

class Weapon {
public:
    virtual void use() = 0; // why set equal to zero
};

class Gun : public Weapon {
public:
    void use() {
        std::cout << "BANG!" << std::endl;
    }
private:

};

class MachineGun : public Gun {
public:
    MachineGun() : magazine(20) {
        // why is this empty
    }

    void use() override {
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
    void use() override {
        std::cout << "STAB!" << std::endl;
    }
};

class Player {
public:
    void use(Weapon& weapon) {
        weapon.use();
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
    Knife knife;

    player.use(gun);
    player.use(mg);
    player.use(bazooka);
    player.use(knife);

    return 0;
}