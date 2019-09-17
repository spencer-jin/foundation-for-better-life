#include "GameObjectGenerator.h"
#include <vector>

void GameObjectGenerator::feedItem(std::vector<std::vector<GameObject*> >& lanes) {
    //only possible combination can be fed into the lanes
    //create a file with possible set of items, use file io to feed into the lanes 
    /*
        file spec:
        v: void item 
        w: wrench 
        g: gas 
        a: alcohol 
        b: bomb 
        C: car
        c: cone
        create 40 lines and loop them forever
        
    */
   std::string s = getLineFromFile();
   char a = s.at(0);
   char b = s.at(1);
   char c = s.at(2);

}


std::string GameObjectGenerator::getLineFromFile() {
    
}
