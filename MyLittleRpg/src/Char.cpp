#include "Char.h"

Char::Char()

    : Char(L"m_sName", L"Char_Identity", 0, 100, ClassType::Necromancer)
{

}

Char::Char(std::wstring name, std::wstring identity, int level,int currentXP, int XPToNextLevel, int currentHP, int currentMP, int maxMP, int maxHP, ClassType type)
    {   m_sName{name},  
        m_sIdentity{identity}, 
        m_Level{level}, 
        m_CurrentXP{0},
        m_XPToNextLevel{50},
        m_MaxHP{maxHP},}
        m_MaxMP{0}, 
        m_CurrentMP{0},
        m_currentStamina{0},
        m_maxStamina{0},
        m_attackPower{0},
        m_defencePower{0},
        m_speedPower{0},
        m_luckyPower{0},
        m_charismaPower{0},
        m_magicPower{0},
        m_bDead{false},
        m_eCharType{type},
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
        } ,
        m_mapStats{5, 2, 3, 5, 4, 6, 7}
    }                       //Just some random numbers to test stats Original is 1, 1, 1, 1, 1, 1, 1, on level 0

{

}

void Char::HealHP(int holyPower)
    {
        m_CurrentHP += holyPower;
    }