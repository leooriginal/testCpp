// Это пример кода. В нём много незнакомого, но скоро вы во всём разберётесь.
// Прочитать код вы можете уже сейчас.

#include <algorithm> // многие библиотеки будут изучены в платном курсе
#include <iostream>
#include <map>
#include <string> // эта библиотека изучается далее в теме 1
#include <vector> // эта библиотека изучается в теме 3

using namespace std; // пространство имён изучается подробнее в платной части курса

// структура (struct) - составной тип данных
// struct здесь объявляется до main, так как эта структура создана пользователем
// она не входит в стандартные библиотеки
// созданая пользователем структура применяется дальше в функции main

struct birth_date {
    int year; // int - целочисленный тип данных; изучается далее в теме 1
    int month;
    int day;
};

int main() {
    // переменная имеет тип данных map, который изучается в платном курсе
    map<string, birth_date> birth_dates; // birth_dates - имя переменной
    
    string name; // строка - тип данных, который изучается далее в теме 1

    // читаем число записей из потока ввода
    int count;
    cin >> count;

    // читаем все записи, применив цикл; циклы изучаются в теме 2
    for (int i = 0; i < count; ++i) {
        int year, month, day;
        cin >> name >> year >> month >> day;
        birth_dates[name] = {year, month, day};
    }

    // контейнер vector изучается в теме 3
    vector<string> born_in_may;

    // применяем цикл по константности; константность изучается в теме 6
    for (const auto& [name,birth_date] : birth_dates) {
        if (birth_date.month == 5) {
            born_in_may.push_back(name); // добавляем имя в конец
        }
    }

    // сортируем массив по алфавиту; сортировка изучается в платной части
    sort(born_in_may.begin(), born_in_may.end());

    for (const auto& name : born_in_may) {
        cout << name << ' ';
    }
    cout << endl;
}
