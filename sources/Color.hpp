#pragma once
#include <iostream>


namespace pandemic {

enum Color {Yellow, Red, Blue, Black };

inline Color stringToColor(std::string color){
    if(color == "Yellow") return Yellow;
    else if(color == "Red") return Red;
    else if(color == "Blue") return Blue;
    return Black;
   
}

};
