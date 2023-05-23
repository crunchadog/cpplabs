#include "CalcPerimeterFigure.h"

void CalcPerimeterFigure::execute() {
    static std::vector<Figure *> figures;
    double sum = 0;

    for (int i = 0; i < figures.size(); ++i) {
        sum += figures[i]->perimeter();
    }

    std::cout << "Sum all perimeter - " << sum << '\n';

}
