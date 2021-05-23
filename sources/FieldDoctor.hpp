#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>


namespace pandemic {

class FieldDoctor: public Player{
    public:
      public:
    FieldDoctor(Board& b, City c);
    FieldDoctor& treat(const City& c) override;
    std::string role() override ;
    
    

};
}
