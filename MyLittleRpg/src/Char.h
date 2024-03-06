    // Char.h
    #pragma once
    #include <string>
    #include <vector>
    #include <unordered_map>
    #include <memory>
    #include "Stats.h"
    #include "Equip.h"

    class Character 
    {

    private:
        
        const std::vector<std::wstring> m_EquipmentSlotLabels = 
        { 
            L"Head",
            L"Body",
            L"Shoulders",
            L"Tabard",
            L"Legs",
            L"Feet",
            L"Left Hand", L"Right Hand",
            L"First Ring", L"Second Ring", L"Third Ring", L"Fourth Ring",
            L"Neck",
            L"Trinket" 
        };

        const std::vector<std::wstring> m_StatsLabels = 
        {
            L"Attack",
            L"Defence",
            L"Speed",
            L"Intelligence",
            L"Strength",
            L"Dexterity",
            L"Stamina"
        };
        
    protected:
        std::wstring m_Name;
        std::wstring m_Identity;
        int m_Level;

        int m_MaxHP;
        int m_CurrentHP;

        int m_XPToNextLevel;
        int m_XP;

        int m_MaxMP;
        int m_CurrentMP;
    
    public:

        enum class EntityType
        {
            Player,
            Skeleton,
            Goblin,
            Bandit,
            Werewolf,
            Troll,
            Necromancer,
            Vampire,
            Dragon,
            Devil
        };

        enum class CharType
        {
            Warrior,
            Thief,
            Mage,
            Cleric,
            Paladin,
            Necromancer,
            Ranger,
            Wizard
        };
        
        void move();
        void attack();
        void takeDamage();

        Character();
        Character(const std::wstring& name, const std::wstring& identity, int level, int max_hp, CharType type = CharType::Mage);
        ~Character() = default;
    };