
#ifndef FOUNDATION_FOR_BETTER_LIFE_GAS_H
#define FOUNDATION_FOR_BETTER_LIFE_GAS_H
#include "GameObject.h"
class Player;
class Gas : public GameObject {
public:
    virtual void influencePlayer(Player& player); //adds gas + 3
    virtual ~Gas();
    virtual void draw(int x_pos, int y_pos);

    
private:
    const int ADD_TO_GAS = 3;
    

};


#endif
