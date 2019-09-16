#include "Player.h"

Player::Player()
{
    m_health = 25;
    m_gas = 25;
    m_drunkState = false;
    m_isDead = false;
}

int Player::getHealth()
{
    return m_health;
}

int Player::getGas()
{
    return m_gas;
}

bool Player::isDrunk()         // returns True when player is drunk
{
    return m_drunkState;
}

bool Player::isDead()
{
    if(m_gas <= 0 || m_health <= 0)
        m_isDead = true;
    
    return m_isDead;
}

void Player::setHealth(int h)
{
    m_health = h;
    
    if(m_health <= 0)
        m_isDead = true;
}

void Player::setGas(int g)
{
    m_gas = g;
    
    if(m_gas <= 0)
        m_isDead = true;
}

void Player::setDrunkState(bool d)
{
    m_drunkState = d;
}
