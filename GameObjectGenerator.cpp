#include "GameObjectGenerator.h"
#include <vector>

void feedItem(std::vector<std::vector<GameObject*> >& lanes) {
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
   char c = getCharacterFromFile();
   switch (c) {
       case 'v':

   }

}

char getCharacterFromFile() {

}