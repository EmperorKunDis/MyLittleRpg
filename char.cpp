// Char.cpp
#include "Char.h"

Character::Character() {
    int getHealtByType(int type) 
    {
        switch (type)
        {
        case Skeleton:
            return 5;
            break;
        case Goblin:
            return 10;
            break;
        case Ogre:
            return 15;
            break;
        case Werewolf:
            return 20;
            break;
        case Troll:
            return 25;
            break;
        case Orc:
            return 30;
            break;
        case Vampire:
            return 35;
            break;
        case Dragon:
            return 100;
            break;
        default:
            return 0;
            break;
        }

    };
}

void Character::move() {
    // Move implementation
}

void Character::attack() {
    // Attack implementation
}