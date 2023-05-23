#include "CalcCenterFigure.h"

void CalcCenterFigure::execute() {
    static std::vector<Figure *> figures;
    double massAll = 0;
    double x = 0;
    double y = 0;

    for (int i = 0; i < figures.size(); ++i) {
        x += figures[i]->position().x * figures[i]->mass();
        y += figures[i]->position().y * figures[i]->mass();

        massAll += figures[i]->mass();
    }

    std::cout << "Center is " << massAll / x << " and " << massAll / y << "\n";

}
