#include <list> 
#include "GameObject.h"

class GameObjectGenerator { 
public:
    void feedItem(std::list<std::list<GameObject>>& lanes);
};