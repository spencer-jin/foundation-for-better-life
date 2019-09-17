#include <vector> 
#include "GameObject.h"

class GameObjectGenerator { 
public:
    void feedItem(std::vector<std::vector<GameObject> >& lanes);
    char getCharacterFromFile();
};