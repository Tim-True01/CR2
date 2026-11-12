#include "file.h"
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");

    Smartphone phone("Samsung", 256);
    Laptop laptop("ASUS", 16);
    Tablet tablet("iPad", 11);

    cout << "=== Раннее связывание ===" << endl;

    phone.showInfo();
    phone.turnOn();

    cout << endl;

    laptop.showInfo();
    laptop.turnOn();

    cout << endl;

    tablet.showInfo();
    tablet.turnOn();

    cout << endl << "=== Позднее связывание ===" << endl;

    Device* device = nullptr;
    int choice;

    cout << "Выберите устройство:" << endl;
    cout << "1 - Смартфон" << endl;
    cout << "2 - Ноутбук" << endl;
    cout << "3 - Планшет" << endl;

    cin >> choice;

    if (choice == 1) {
        device = new Smartphone("Xiaomi", 128);
    }
    else if (choice == 2) {
        device = new Laptop("Lenovo", 8);
    }
    else if (choice == 3) {
        device = new Tablet("Samsung Tab", 10.5);
    }
    else {
        cout << "Неверный выбор!" << endl;
    }

    if (device != nullptr) {
        device->showInfo();
        device->turnOn();
        delete device;
    }

    cout << endl;
    cout << "Количество созданных объектов: "
         << Device::count << endl;

    return 0;
}
