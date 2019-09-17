#include <vector> 
#include <string>
#include <fstream>
#include "GameObject.h"

class GameObjectGenerator { 
public:
    GameObjectGenerator();
    ~GameObjectGenerator();
    void feedItem(std::vector<std::vector<GameObject*> >& lanes);
    std::string getLineFromFile();
    
    
private:
    std::ifstream input;
};
