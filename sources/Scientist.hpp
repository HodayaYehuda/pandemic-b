#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>

namespace pandemic {

class Scientist: public Player{
   
    public:
    int num = 4;
       Scientist(Board&, City , int );
        Scientist& discover_cure(const Color&) override ;
        std::string role() override ;

};
}
