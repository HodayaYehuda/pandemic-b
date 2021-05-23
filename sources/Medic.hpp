#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>

namespace pandemic {

class Medic: public Player{
    public:
      Medic(Board& b, City c);
      Medic& treat(const City& c) override;
      Medic& fly_direct(const City& c) override;
      Medic& fly_shuttle(const City& c) override;
      Medic& fly_charter(const City& c) override;
      Medic& drive(const City& c) override;
      std::string role() override ;
   
    

};
}
