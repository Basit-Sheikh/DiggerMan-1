#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include "GameConstants.h"
#include "Actor.h"
#include <string>
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

const int MAXSIZE_X = 64;
const int MAXSIZE_Y = 64;

const int MINESHAFT_START_LEFT = 29;
const int MINESHAFT_STOP_RIGHT = 34;
const int MINESHAFT_BOTTOM = 4;

// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp

class StudentWorld : public GameWorld
{
public:
    StudentWorld(std::string assetDir)
        : GameWorld(assetDir)
    {}

    void setGameText();
    virtual int init();
    virtual int move();
    virtual void cleanUp();

	void removeDeadActors();
    void deleteDirt(int xPassed, int yPassed); 
    bool checkActorBelow(int xPassed, int yPassed, int IMID);
	bool checkDiggermanBelow(int xPassed, int yPassed);
    bool checkDirtBelow(int xPassed, int yPassed);
	void setDiggermanHP(int hitPoints);
   
private:
    Actor * m_actor[MAXSIZE_X][MAXSIZE_Y];
    Dirt * m_dirt[MAXSIZE_X][MAXSIZE_Y];
    DiggerMan* m_diggerman;
};

#endif // STUDENTWORLD_H_
