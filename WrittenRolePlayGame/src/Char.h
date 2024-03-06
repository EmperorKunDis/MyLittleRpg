    // Char.h
    #pragma once
    #include <string>
    #include <vector>
    #include <unordered_map>
    #include <memory>
    #include "Stats.h"
    #include "Equip.h"

    class Character {
    public:

        void move();
        void attack();
        std::vector<std::string> enemyType{"Skeleton", "Goblin", "Ogre", "Werewolf", "Troll", "Orc", "Vampire", "Dragon"};
        // Other character actions and attributes
        void getHealthByType(health);
    private:

    };
