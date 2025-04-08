#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name,health,damage) {
    this -> weapon = weapon;
}

void Warrior::swingWeapon(Player *opponent) {
    cout << name << " swing their " << weapon << " at " << opponent-> getName() << "\n";

    attack(opponent,damage);
}

string Warrior::getWeapon() const {
    return weapon;
}

void Warrior::setWeapon(string weapon) {
    this -> weapon = weapon;
}
 
