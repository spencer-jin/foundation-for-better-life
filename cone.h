#ifndef CONE_H
#define CONE_H

class Cone : public GameObject {
public:
    virtual void influencePlayer(Player& player); // decreases player health -1
    virtual ~Cone(){};
}

#endif // CONE_H
