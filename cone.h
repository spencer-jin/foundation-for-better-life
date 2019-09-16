#ifndef CONE_H
#define CONE_H
#include "GameObject.h"
#include "Player.h"
class GameObject;
class Cone : public GameObject {
public:
    virtual ~Cone();
    virtual void influencePlayer(Player& player); // decreases player health -1
<<<<<<< HEAD
};
=======
    virtual ~Cone(){};
}
>>>>>>> 0b819483682efb491142a62340dd2e2b6b08ab11

#endif // CONE_H
