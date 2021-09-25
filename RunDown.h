#ifndef _RUN_DOWN_H
#define _RUN_DOWN_H

#include <iostream>
#include <stdio.h>
#include <time.h>

class Activity {
 public:
    int duration;
    std::string activityName;
    
    Activity* next;

    Activity(int duration, std::string actName = "Fun Activity") {
        this->duration = duration;
        this->activityName = actName;
        next = NULL;
    }
};

class RunDown {
 public:
    Activity* openingAct;

    RunDown() {
        openingAct = NULL;
    }

    void addOpening(int duration, std::string actName);
    void addActivity(int duration, std::string actName, std::string addAfter = "");
    void showAllActivity();
 };


#endif // _RUN_DOWN_H