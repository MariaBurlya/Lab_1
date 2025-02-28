#include "array.h"

int main() {
    Array array;
    string command;
    int index, value;

    while (true) {
        cout << "Введите команду MPUSH, MGET, MDEL, MSET, PRINT, LENGHT, EXIT: ";
        getline(cin, command);

        if (command.substr(0, 5) == "MPUSH") {
            if (command.find(' ') == command.rfind(' ')) {
                sscanf(command.c_str(), "MPUSH %d", &value);
                array.MPUSH(value);
            } else {
                sscanf(command.c_str(), "MPUSH %d %d", &index, &value);
                array.MPUSH(index, value);
            }
        } else if (command.substr(0, 4) == "MGET") {
            sscanf(command.c_str(), "MGET %d", &index);
            cout << "Элемент по индексу " << index << ": " << array.MGET(index) << endl;
        } else if (command.substr(0, 4) == "MDEL") {
            sscanf(command.c_str(), "MDEL %d", &index);
            array.MDEL(index);
        } else if (command.substr(0, 4) == "MSET") {
            sscanf(command.c_str(), "MSET %d %d", &index, &value);
            array.MSET(index, value);
        } else if (command == "PRINT") {
            array.PRINT();
        } else if (command == "LENGHT") {
            cout << "Длина массива: " << array.LENGHT() << endl;
        } else if (command == "EXIT") {
            break;
        } else {
            cout << "Неизвестная команда" << endl;
        }
    }
    return 0;
}
