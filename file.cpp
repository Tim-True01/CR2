#include "file.h"

int Device::count = 0;

Device::Device(string n) {
    name = n;
    count++;
}

Device::~Device() {
}

Smartphone::Smartphone(string n, int m) : Device(n) {
    memory = m;
}

void Smartphone::showInfo() {
    cout << "Смартфон: " << name << endl;
    cout << "Память: " << memory << " ГБ" << endl;
}

void Smartphone::turnOn() {
    cout << "Смартфон включен" << endl;
}

Laptop::Laptop(string n, int r) : Device(n) {
    ram = r;
}

void Laptop::showInfo() {
    cout << "Ноутбук: " << name << endl;
    cout << "Оперативная память: " << ram << " ГБ" << endl;
}

void Laptop::turnOn() {
    cout << "Ноутбук загружается" << endl;
}

Tablet::Tablet(string n, double s) : Device(n) {
    screenSize = s;
}

void Tablet::showInfo() {
    cout << "Планшет: " << name << endl;
    cout << "Диагональ экрана: " << screenSize << " дюйма" << endl;
}

void Tablet::turnOn() {
    cout << "Планшет включен" << endl;
}
