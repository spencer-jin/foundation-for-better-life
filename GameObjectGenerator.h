#include <vector> 
#include <string>
#include "GameObject.h"

class GameObjectGenerator { 
public:
    void feedItem(std::vector<std::vector<GameObject*> >& lanes);
    std::string getLineFromFile();
};