    // Char.h
    #pragma once
    #include <string>
    #include <vector>
    #include <unordered_map>
    #include <memory>
    #include "Stats.h"
    #include "Equip.h"

    class Char
    {
    public:
        enum class EntityType
        {
            Player, Skeleton, Goblin, Bandit, Werewolf, Troll, Necromancer, Vampire, Dragon, Devil
        };
        enum class CharType
        {
            Warrior, Thief, Mage, Cleric, Paladin, Necromancer, Ranger, Wizard
        };
    private:
        const std::vector<std::wstring> m_EquipSlotsLabels = 
        { 
            L"Head", L"Body", L"Shoulders", L"Tabard", L"Legs", L"Feet", L"Left Hand", L"Right Hand",
            L"First Ring", L"Second Ring", L"Third Ring", L"Fourth Ring", L"Neck", L"Trinket" 
        };
        const std::vector<std::wstring> m_StatsLabels = 
        {
            L"Attack", L"Defence", L"Speed", L"Intelligence", L"Strength", L"Dexterity", L"Stamina"
        };
        
    protected:
        std::wstring m_Name;
        std::wstring m_Identity;
        int m_Level;
        int m_MaxHP, m_CurrentHP;
        int m_XPToNextLevel, m_XP;
        int m_MaxMP, m_CurrentMP;
        bool m_bDead;

	    CharType m_eCharType;
	
	    std::unordered_map<Stats::EquipSlots, std::shared_ptr<Equip>> m_mapEquipSlots;

        Stats m_Stats;


    public:
        void move();
        void attack();
        void takeDamage();
        Char();
        Char(const std::wstring& name, const std::wstring& identity, int level, int max_hp, CharType type = CharType::Mage);
        ~Character() = default;

        inline const int GetHP() const { return m_CurrentHP; }
        inline const int GetMaxHP() const { return m_MaxHP; }
        inline const int GetMP() const { return m_CurrentMP; }
        inline const int GetMaxMP() const { return m_MaxMP; }
        inline const int GetXP() const { return m_XP; }
        inline const int GetXPToNextLevel() const { return m_XPToNextLevel; }
        
        inline const std::wstring& GetName() const { return m_Name; }
        inline const std::wstring& GetIdentity() const { return m_Identity; }
        inline const int GetLevel() const { return m_Level; }
        
        const std::vector<std::wstring>& GetEquipmentSlotLabels() const { return m_EquipmentSlotLabels; }
        const std::vector<std::wstring>& GetStatsLabels() const { return m_StatsLabels; }

        std::unordered_map<Stats::EquipSlots, std::shared_ptr<Equip>>& GetEquipment() { return m_Equipment; }
        Stats& GetStats() const { return m_StatsLabels; }
    };
