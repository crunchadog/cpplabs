//
// Created by bobry on 24.04.2023.

#ifndef LAB4_4_FIGURE_H
#define LAB4_4_FIGURE_H

#include "../CVector2D/CVector2D.h"
#include "../IPhysObject/IPhysObject.h"
#include "../IPrintable/IPrintable.h"
#include "../BaseCObject/BaseCObject.h"
#include "../IDialogInitiale/IDialogInitiale.h"
#include "../IGeoFig/IGeoFig.h"
#include "vector"

class Figure :
        public CVector2D,
        public IPhysObject,
        public IPrintable,
        public IDialogInitiale,
        public IGeoFig,
        public BaseCObject{
};

#endif
