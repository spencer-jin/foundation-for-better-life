#include "GameObjectGenerator.h"
#include "Wrench.h"
#include "Alcohol.h"
#include "Bomb.h"
#include "cone.h"
#include "Gas.h"
#include "Car.h"

#include <deque>
#include <fstream>
#include <iostream>


GameObjectGenerator::GameObjectGenerator()
{
    input.open("map.txt");
    
}

GameObjectGenerator::~GameObjectGenerator()
{
    input.close();
}

void GameObjectGenerator::feedItem(std::deque<std::deque<std::shared_ptr<GameObject> > >& lanes) {
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
    lane1 = s.at(0);
    lane2 = s.at(1);
    lane3 = s.at(2);
    
    
    switch(lane1)
    {
        case 'v': lanes.at(0).push_front( std::shared_ptr<GameObject> (new GameObject()) );
             break;
        case 'w': lanes.at(0).push_front( std::shared_ptr<GameObject> (new Wrench()) );
            break;
        case 'g':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Gas()) );
            break;
        case 'a':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Alcohol()) );
            break;
        case 'b':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Bomb()) );
            break;
        case 'C':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Car()) );
            break;
        case 'c':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Cone()) );
            break;
    }
    
    switch(lane2)
    {
        case 'v': lanes.at(0).push_front( std::shared_ptr<GameObject> (new GameObject()) );
            break;
        case 'w': lanes.at(0).push_front( std::shared_ptr<GameObject> (new Wrench()) );
            break;
        case 'g':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Gas()) );
            break;
        case 'a':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Alcohol()) );
            break;
        case 'b':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Bomb()) );
            break;
        case 'C':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Car()) );
            break;
        case 'c':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Cone()) );
            break;
    }
    
    
    switch(lane3)
    {
        case 'v': lanes.at(0).push_front( std::shared_ptr<GameObject> (new GameObject()) );
            break;
        case 'w': lanes.at(0).push_front( std::shared_ptr<GameObject> (new Wrench()) );
            break;
        case 'g':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Gas()) );
            break;
        case 'a':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Alcohol()) );
            break;
        case 'b':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Bomb()) );
            break;
        case 'C':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Car()) );
            break;
        case 'c':  lanes.at(0).push_front( std::shared_ptr<GameObject> (new Cone()) );
            break;
    }
    
    
    
    
}

std::string GameObjectGenerator::getLineFromFile() {

    if(!input.is_open()){
        std::cout  <<"File cannot be opened.";
        exit (10);
    }
    
    std::string line;
    
    if( input.eof() ) {
        input.std::__1::ios_base::clear();
        input.seekg(0, std::ios::beg);
    }
    
    getline(input, line);
    return line;
    
    
    
    
}

