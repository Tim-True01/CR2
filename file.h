#pragma once
#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string name;
public:
    static int count;

    Device(string n);
    virtual void showInfo() = 0;
    virtual void turnOn() = 0;
    virtual ~Device();
};
class Smartphone : public Device {
private:
    int memory;
public:
    Smartphone(string n, int m);
    void showInfo() override;
    void turnOn() override;
};
class Laptop : public Device {
private:
    int ram;

public:
    Laptop(string n, int r);
    void showInfo() override;
    void turnOn() override;
};

class Tablet : public Device {
private:
    double screenSize;

public:
    Tablet(string n, double s);
    void showInfo() override;
    void turnOn() override;
};
