#include "player.h"
#include <iostream>
using namespace std;


Player::Player(string name, int health, int damage) {
    
    this -> name = name;
    this -> health = health;
    this -> damage = damage;

}

void Player::attack(Player *opponent, int damage) {

    opponent-> takeDamage(damage);
}

void Player::takeDamage(int damage) {
    health -= damage;

    if (health < 0) {
        health = 0;
    }
    cout << name << "takes " << damage << " damage. Remaining health: " << health << "\n";
}

string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getDamage() const {
    return damage;
}

void Player::setName(string name) {
    this-> name = name;
}
void Player::setHealth(int health) {
    this -> health = health;
}

void Player::setDamage(int damage){
    this -> damage = damage;
}


