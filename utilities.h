// utilities.h

// Note:  YOU MUST NOT MAKE ANY CHANGE TO THIS FILE!

#ifndef UTILITIES_INCLUDED
#define UTILITIES_INCLUDED

const char ARROW_LEFT  = 'a';
const char ARROW_RIGHT = 'd';


char getCharacter();
void clearScreen();
int randInt(int limit);             // random int from 0 to limit-1
bool trueWithProbability(double p); // return true with probability p

#endif // UTILITIES_INCLUDED
