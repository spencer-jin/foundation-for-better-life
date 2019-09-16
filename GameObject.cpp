#include "GameObject.h"
#include "Player.h"

GameObject::~GameObject(){}

// do nothing since this is base's class virtual function
void GameObject::influencePlayer(Player &p) {
	return;
}