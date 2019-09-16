#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
class GameObject: public Board {
	virtual void influencePlayer(Player &p);
};
#endif // GAMEOBJECT_H
