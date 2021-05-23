#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

#include <iostream>
namespace pandemic {

class Researcher: public Player{
    
    public:
    Researcher(Board&, City);
    Researcher& discover_cure(const Color&) override ;
    std::string role() override ;

    

};
}
