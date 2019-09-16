
#ifndef FOUNDATION_FOR_BETTER_LIFE_GAS_H
#define FOUNDATION_FOR_BETTER_LIFE_GAS_H
#include "GameObject.h"
class Player;
class Gas : public GameObject {
public:
<<<<<<< HEAD
    virtual void influencePlayer(Player& player); //adds gas + 3
    virtual ~Gas();
    
private:
    const int ADD_TO_GAS = 3;
    
=======
    virtual void influencePlayer(Player& player); //adds gas +1
>>>>>>> 0b819483682efb491142a62340dd2e2b6b08ab11
};




#endif
