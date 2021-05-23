#pragma once
#include <iostream>
#include <set>
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
using namespace std;




namespace pandemic {
 class Board;
 class Player{

    protected:
     //Board myBoard;
    public:
     Board& myBoard;
     City myCity;
     set<pandemic::City> cityCards;  

     
   
        Player(Board &b, City c);
        ~Player();
    
    virtual Player& drive(const City& c);
    virtual Player& fly_direct(const City& c);
    virtual Player& fly_shuttle(const City& c);
    virtual Player& fly_charter(const City& c);

    virtual Player& remove_charter(const City& c);
    virtual Player& remove_shuttle(const City& c);
    virtual Player& build();
    virtual Player& discover_cure(const Color& c);
    virtual Player& treat(const City& c);

    virtual string role(const City& c);
    virtual string role();

    virtual Player& take_card(const City& c);
    virtual Player& remove_cards(const City& c);









    };
}