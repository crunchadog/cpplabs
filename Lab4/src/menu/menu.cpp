#include "vector"
#include "iostream"
#include "algorithm"
#include "menu.h"
#include "../figures/triangle/triangle.h"
#include "../figures/hexagon/hexagon.h"

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
    std::vector<Figure *> figures;
    int count = 0;

    while (true) {
        unsigned int command = menu();

        switch (command) {
            case 1: {
                unsigned int select = FiguresMenu();

                if (select == 1) {
                    figures.push_back(new Triangle::triangle());
                    figures[count]->initFromDialog();
                    count++;

                    break;
                }
                else {
                    figures.push_back(new Hexagon::hexagon());
                    figures[count]->initFromDialog();
                    count++;
                    break;
                }
            }

            case 2: {

                for (int i = 0; i < figures.size(); ++i) {
                    std::cout << figures[i]->classname() << "\n";
                }

                break;
            }

            case 3: {
                double sum = 0;

                for (int i = 0; i < figures.size(); ++i) {
                    sum += figures[i]->square();
                }

                std::cout << "Sum all squares - " << sum << '\n';

                break;
            }

            case 4: {
                double sum = 0;

                for (int i = 0; i < figures.size(); ++i) {
                    sum += figures[i]->perimeter();
                }

                std::cout << "Sum all perimeter - " << sum << '\n';

                break;
            }

            case 5: {
                double massAll = 0;
                double x = 0;
                double y = 0;

                for (int i = 0; i < figures.size(); ++i) {
                    x += figures[i]->position().x * figures[i]->mass();
                    y += figures[i]->position().y * figures[i]->mass();

                    massAll += figures[i]->mass();
                }

                std::cout << "Center is " << massAll / x << " and " << massAll / y << "\n";

                break;
            }

            case 6: {
                unsigned int memory = 0;

                for (int i = 0; i < figures.size(); ++i) {
                    memory += figures[i]->size();
                }

                std::cout << "Memory - " << memory << '\n';

                break;
            }

            case 7: {

                std::sort(figures.begin(), figures.end(), [](Figure *x, Figure *y) {
                    return x->mass() < y->mass();
                });

                for (int i = 0; i < figures.size(); ++i) {
                    std::cout << figures[i]->mass() << " ";
                }

                std::cout << '\n';

                break;
            }

            default:
                return 0;
        }
    }
}