#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    Player();
    int getHealth();
    int getGas();
    bool isDrunk();         // returns True when player is drunk
    bool isDead();          // checks m_gas and m_health before returning
    
    void setHealth(int health);     // checks to see if player is dead as well
    void setGas(int gas);           // checks to see if player is dead as well
    void setDrunkState(bool drunk);
    
    virtual void draw(int x_pos);
    
private:
    int m_gas;
    int m_health;
    bool m_drunkState;      // is True when player is drunk
    bool m_isDead;            // returns True if m_health or m_gas is 0
    
    
};


#endif // PLAYER_H
