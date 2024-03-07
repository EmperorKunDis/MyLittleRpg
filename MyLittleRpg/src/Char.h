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
        enum class ClassType
        {
            Warrior, Thief, Mage, Cleric, Paladin, Necromancer, Ranger
        };
    private:
        const std::vector<std::wstring> m_EquipSlotLabel = 
        { 
            L"Head", L"Body", L"Shoulders", L"Tabard", L"Legs", L"Feet", L"Left Hand", L"Right Hand",       // Head Body Shoulders Tabard Legs Feet Left_Hand Right_Hand
            L"First Ring", L"Second Ring", L"Third Ring", L"Fourth Ring", L"Neck", L"Trinket"               // First - Fourth Ring Neck Trinket
        };
        const std::vector<std::wstring> m_StatsLabel = 
        {
            L"Strength", L"Dexterity", L"Vitality" ,L"Intelligence", L"Wisdom", L"Charisma", L"Luck"
        };
        
    protected:
        std::wstring m_sName;
        std::wstring m_sIdentity;
        int m_Level;
        int m_MaxHP,            m_CurrentHP;
        int m_XPToNextLevel,    m_CurrentXP;
        int m_MaxMP,            m_CurrentMP;
        int m_currentStamina,   m_maxStamina;
        int m_attackPower,      m_defencePower,     m_speedPower,   m_staminaPower,     m_luckyPower,    m_charismaPower,   m_magicPower;
        bool m_bDead;

	    ClassType m_eClassType;
	
	    std::unordered_map<Stats::EquipSlot, std::shared_ptr> m_mapEquipSlot;

        Stats m_Stats;


    public:
        Char();
        Char( const std::wstring name,const std::wstring identity, int level,int currentXP, int XPToNextLevel, int currentHP, int maxHP,
                int currentMP, int maxMP, int currentStamina, int maxStamina, int attackPower, int defencePower, int speedPower,
                int luckyPower, int charismaPower, int magicPower, ClassType type, const std::unordered_map<Stats::EquipSlot, std::shared_ptr> mapEquipSlot);

        ~Char() = default;

        const std::vector<std::wstring>& GetEquipSlotLabel() const { return m_EquipSlotLabel; };
        const std::vector<std::wstring>& GetStatsLabel() const { return m_StatsLabel; };

        std::unordered_map<Stats::EquipSlot, std::shared_ptr>& GetEquip () { return m_Equip; };
        Stats& GetStats() { return m_Stats; };
        
        inline const std::wstring& GetName() const { return m_sName; };
        inline const std::wstring& GetIdentity() const { return m_sIdentity; };

        const int GetLevel() const { return m_Level; };
        const int GetHP() const { return m_CurrentHP; };
        const int GetMaxHP() const { return m_MaxHP; };
        const int GetMP() const { return m_CurrentMP; };
        const int GetMaxMP() const { return m_MaxMP; };
        const int GetXP() const { return m_CurrentXP; };
        const int GetStamina() const { return m_currentStamina; };
        const int GetMaxStamina() const { return m_maxStamina; };
        const int GetAttackPower() const { return m_attackPower; };
        const int GetDefencePower() const { return m_defencePower; };
        const int GetSpeedPower() const { return m_speedPower; };
        const int GetStaminaPower() const { return m_staminaPower; };
        const int GetLuckyPower() const { return m_luckyPower; };
        const int GetCharismaPower() const { return m_charismaPower; };
        const int GetMagicPower() const { return m_magicPower; };


        const int GetXPToNextLevel() const { return m_XPToNextLevel; };


        const bool IsDead() const { return m_bDead; };


        void HealHP(int holyPower);


        void VampHP(int unholyPower);


        void Move(int distance);


        void Attack(int attackDamage);


        void TakeDamage(int damage);


        bool UseMagic(int mp);


    };
