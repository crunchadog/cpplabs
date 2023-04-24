cmake_minimum_required(VERSION 3.24)
project(lab4_4)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab4_4 main.cpp src/menu/menu.cpp src/figures/hexagon/hexagon.cpp src/figures/triangle/triangle.cpp src/interface/CVector2D/CVector2D.cpp src/interface/IGeoFig/IGeoFig.h src/interface/Figure/Figure.h src/interface/CVector2D/CVector2D.h src/interface/IPhysObject/IPhysObject.h src/interface/IPrintable/IPrintable.h src/interface/IDialogInitiale/IDialogInitiale.h src/interface/BaseCObject/BaseCObject.h)
