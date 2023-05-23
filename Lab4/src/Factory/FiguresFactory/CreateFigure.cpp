#include "CreateFigure.h"

void CreateFigure::execute() {
    static std::vector<Figure *> figures;
    static int count = 0;
    unsigned int select = AppStart::AppMenu::FiguresMenu();

    if (select == 1) {
        figures.push_back(new Triangle::triangle());
        figures[count]->initFromDialog();
        ++count;
    } else {
        figures.push_back(new Hexagon::hexagon());
        figures[count]->initFromDialog();
        ++count;
    }
}
