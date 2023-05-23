#include "FigureFactory.h"

CommandInterface *FigureFactory::create(unsigned int index) {
    switch (index) {
        case 1:
            return new CreateFigure();
        case 2:
            return new PrintFigure();
        case 3:
           return new CalcSquareFigure();
        case 4:
            return new CalcPerimeterFigure();
        case 5:
             return new CalcCenterFigure();
        case 6:
            return new getMemoryFigure();
        case 7:
            return new SortFigure();
        default:
           return nullptr;
    }
}
