#ifndef LAB4_4_FIGUREFACTORY_H
#define LAB4_4_FIGUREFACTORY_H

#include "../CommandInterface.h"
#include "CreateFigure.h"
#include "PrintFigure.h"
#include "CalcSquareFigure.h"
#include "CalcPerimeterFigure.h"
#include "CalcCenterFigure.h"
#include "getMemoryFigure.h"
#include "SortFigure.h"

class FigureFactory {
public:
    static CommandInterface* create(unsigned int index);
};


#endif
