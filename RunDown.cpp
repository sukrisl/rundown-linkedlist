#include "RunDown.h"

void RunDown::addOpening(int duration, std::string actName) {
    Activity* newAct = new Activity(duration, actName);

    if (openingAct != NULL) newAct->next = openingAct;
    openingAct = newAct;
}

void RunDown::addActivity(int duration, std::string actName, std::string addAfter) {
    Activity* newAct = new Activity(duration, actName);
    Activity* latestAct = openingAct;

    if (openingAct == NULL && addAfter == "") {
        openingAct = newAct;
        return;
    }

    while (latestAct->next != NULL) {
        if (latestAct->activityName == addAfter) {
            newAct->next = latestAct->next;
            break;
        }

        latestAct = latestAct->next;
    }
    
    latestAct->next = newAct;
}

void RunDown::showAllActivity() {
    Activity* currentAct = openingAct;

    if (openingAct == NULL) {
        std::cout << "There is no activity found..." << std::endl;
        return; 
    }

    int actNum = 1;
    do {
        std::cout << actNum << " " << currentAct->activityName << ", " << currentAct->duration << " minute" << std::endl;
        actNum++;
        currentAct = currentAct->next;
    } while (currentAct->next != NULL);
}