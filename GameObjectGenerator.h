#include <deque>
#include <string>
#include <fstream>
#include "GameObject.h"

class GameObjectGenerator { 
public:
    GameObjectGenerator();
    ~GameObjectGenerator();
    void feedItem(std::deque<std::deque<std::shared_ptr<GameObject> > >& lanes);
    std::string getLineFromFile();
    
    
private:
    std::ifstream input;
    
    char lane1;
    char lane2;
    char lane3;
};
