#include <iostream>
#include <string>
#include <map>
#include "Dispatcher.hpp"

namespace pandemic {

 Dispatcher::Dispatcher(Board& b, City c):Player(b,c){}

  Dispatcher& Dispatcher::fly_direct(const City& c) {
      if (myCity == c) {
               throw invalid_argument{"ERROR - my city is the city"};
          }
      if (myBoard.researchStations.count(myCity) == 1){
         myCity = c;
         return *this;
      }
      if (myBoard.researchStations.count(myCity) == 0){
        if (cityCards.count(c) == 0){
            throw invalid_argument{"ERROR - no cards"};
        }
        else{
           cityCards.erase(c);
        myCity = c;
        return *this;
  }
        }

       

  return *this;
  }

    std::string Dispatcher::role() {
            return "Dispatcher"; 
    }
}

