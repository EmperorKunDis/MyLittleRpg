#include "Char.h"

Char::Char()

    : Char(L"m_sName", L"m_sIdentity", 0, 50, ClassType::Necromancer)
{

}

Char::Char(     std::wstring name, std::wstring identity, int level,int currentXP, int XPToNextLevel, int currentHP, int maxHP,
                int currentMP, int maxMP, int currentStamina, int maxStamina, int attackPower, int defencePower, int speedPower,
                int luckyPower, int charismaPower, int magicPower, ClassType type, std::unordered_map<Stats::EquipSlot, std::shared_ptr<Equip>> mapEquipSlot, ) 
    :   m_sName{name},  
        m_sIdentity{identity}, 
        m_Level{level}, 
        m_CurrentXP{0},
        m_XPToNextLevel{50},
        m_MaxHP{maxHP},
        m_MaxMP{maxMP}, 
        m_CurrentMP{0},
        m_currentStamina{0},
        m_maxStamina{maxStamina},
        m_attackPower{attackPower},
        m_defencePower{defencePower},
        m_speedPower{speedPower},
        m_luckyPower{luckyPower},
        m_charismaPower{charismaPower},
        m_magicPower{magicPower},
        m_bDead{false},
        m_eClassType{type},
        m_mapEquipSlots{
            { Stats::EquipSlot::Head, nullptr},
            { Stats::EquipSlot::Body, nullptr},
            { Stats::EquipSlot::Shoulders, nullptr},
            { Stats::EquipSlot::Tabard, nullptr},
            { Stats::EquipSlot::Legs, nullptr},
            { Stats::EquipSlot::Feet, nullptr},
            { Stats::EquipSlot::LeftHand, nullptr},
            { Stats::EquipSlot::RightHand, nullptr},
            { Stats::EquipSlot::FirstRing, nullptr},
            { Stats::EquipSlot::SecondRing, nullptr},
            { Stats::EquipSlot::ThirdRing, nullptr},
            { Stats::EquipSlot::FourthRing, nullptr},
            { Stats::EquipSlot::Neck, nullptr},
            { Stats::EquipSlot::Trinket, nullptr}
        },
        m_mapStats{5, 2, 3, 5, 4, 6, 7}
                           //Just some random numbers to test stats Original is 1, 1, 1, 1, 1, 1, 1, on level 0

{

}

void Char::HealHP(int holyPower)
    {
        m_CurrentHP += holyPower;
    }