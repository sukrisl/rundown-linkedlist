#include "RunDown.h"

RunDown eFisheryConnect;

int main() {
    std::cout << "=============" << std::endl;
    std::cout << "Empty rundown" << std::endl;
    std::cout << "=============" << std::endl;
    eFisheryConnect.showAllActivity();
    std::cout << " " << std::endl;

    eFisheryConnect.addOpening(30, "On boarding");
    eFisheryConnect.addActivity(90, "Speaker 1");
    eFisheryConnect.addActivity(45, "Speaker 2");
    eFisheryConnect.addActivity(15, "Speaker 3");
    eFisheryConnect.addActivity(30, "Istirahat");
    eFisheryConnect.addActivity(120, "Hands on");

    std::cout << "=======================" << std::endl;
    std::cout << "Add activity to the end" << std::endl;
    std::cout << "=======================" << std::endl;
    eFisheryConnect.showAllActivity();
    std::cout << " " << std::endl;

    eFisheryConnect.addOpening(60, "Registrasi");

    std::cout << "====================" << std::endl;
    std::cout << "Add opening activity" << std::endl;
    std::cout << "====================" << std::endl;
    eFisheryConnect.showAllActivity();
    std::cout << " " << std::endl;

    eFisheryConnect.addActivity(15, "Coffee break", "Speaker 2");

    std::cout << "==================" << std::endl;
    std::cout << "Add activity after" << std::endl;
    std::cout << "==================" << std::endl;
    eFisheryConnect.showAllActivity();
    std::cout << " " << std::endl;

    return 1;
}