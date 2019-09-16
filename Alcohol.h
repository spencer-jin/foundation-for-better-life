#ifndef ALCOHOL_H
#define ALCOHOL_H
#include "GameObject.h"
#include "Player.h"


class Alcohol : public GameObject {
public:
<<<<<<< HEAD
    virtual ~Alcohol();
=======
	virtual ~Alcohol() {};
>>>>>>> 0b819483682efb491142a62340dd2e2b6b08ab11
    virtual void influencePlayer(Player &player); //sets player status as drunk
};

#endif // ALCOHOL_H
