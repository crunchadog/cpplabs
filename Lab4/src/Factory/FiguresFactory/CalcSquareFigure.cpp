#include "CalcSquareFigure.h"

void CalcSquareFigure::execute() {
    static std::vector<Figure*> figures;
    double sum = 0;

    for (int i = 0; i < figures.size(); ++i) {
        sum += figures[i]->square();
    }

    std::cout << "Sum all squares - " << sum << '\n';
}
