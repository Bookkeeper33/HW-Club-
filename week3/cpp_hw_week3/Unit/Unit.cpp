#include "Unit.h"

void Unit::ensureIsAlive() {
    if ( this->hitPoints == 0 ) {
        throw UnitIsDead();
    } 
}

Unit::Unit(const std::string& name, int health, int damage) {
    if ( health < 0 ) {
        health = 0;
    }

    if ( damage <= 0 ) {
        damage = 1;
    }

    this->name = name;
    this->hitPoints = health;
    this->hitPointsLimit = health;
    this->damage = damage;
    this->ensureIsAlive();
}

Unit::~Unit() {

}

int Unit::getDamage() const {
    return this->damage;
}

int Unit::getHitPoints() const {
    return this->hitPoints;
}

int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::addHitPoints(int health) {
    int newHitPoints;

    this->ensureIsAlive();

    newHitPoints = this->hitPoints + health;
    if ( newHitPoints < this->hitPoints ) {
        std::cout << "Invalid healing params." << std::endl;
        return;
    } else if ( newHitPoints > this->hitPointsLimit ) {
        std::cout << "Too much heal. Health restored to max." << std::endl;
        this->hitPoints = this->hitPointsLimit;
    } else {
        this->hitPoints = newHitPoints;
    }
}

void Unit::takeDamage(int damage) {
    int damagedHp;

    this->ensureIsAlive();

    damagedHp = this->hitPoints - damage;
    if ( damagedHp <= 0 ) {
        this->hitPoints = 0;
        return;
    } 

    this->hitPoints = damagedHp;
}

void Unit::attack(Unit& enemy) {
    this->ensureIsAlive();
    enemy.takeDamage(this->damage);
    enemy.counterAttack(*this);
}

void Unit::counterAttack(Unit& enemy) {
    this->ensureIsAlive();
    enemy.takeDamage(this->damage / 2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "________Stats_________" << "\n"  << unit.getName() << "\n"
        << "Damage               : " << unit.getDamage() << "\n"
        << "Current health       : " << unit.getHitPoints() << "\n"
        << "Max amount of health : " << unit.getHitPointsLimit();

    return out; 
}