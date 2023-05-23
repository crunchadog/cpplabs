#include "vector"
#include "iostream"
#include "algorithm"
#include "menu.h"
#include "../figures/triangle/triangle.h"
#include "../figures/hexagon/hexagon.h"
#include "../Factory/FiguresFactory/FigureFactory.h"

unsigned int AppStart::AppMenu::menu() {
    while (true) {
        std::cout << "1 - Add figure\n";
        std::cout << "2 - Show all figures\n";
        std::cout << "3 - Sum all figures squares\n";
        std::cout << "4 - Sum all figures perimeters\n";
        std::cout << "5 - Figure mass center\n";
        std::cout << "6 - Memory\n";
        std::cout << "7 - Sort all figures by mass\n";
        std::cout << "8 - Exit\n";

        unsigned int select;
        std::cin >> select;

        return select;
    }
}

unsigned int AppStart::AppMenu::FiguresMenu() {
    while (true) {
        std::cout << "1 - Triangle\n";
        std::cout << "2 - Hexagon\n";

        unsigned int select;
        std::cin >> select;

        return select;
    }
}

int AppStart::AppMenu::start() {
    int n;
    while (true) {
        std::cin >> n;
        (new FigureFactory())->create(n)->execute();
    }
}