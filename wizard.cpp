#include "wizard.h"
#include <iostream>
using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name,health,damage){
    this -> mana = mana;
}

void Wizard::castSpell(Player *opponent) {
    cout << name << " cast spell on " << opponent -> getName() << " for " << mana << " damage.\n";

    attack(opponent,mana);
}

int Wizard::getMana() const {
    return mana;
}

void Wizard::setMana(int mana) {
    this -> mana = mana;
}
