#include <iostream>
#include <string>
#include <map>
#include"OperationsExpert.hpp"


namespace pandemic {

     OperationsExpert::OperationsExpert(Board& b, City c):Player(b,c){}

       OperationsExpert& OperationsExpert::build() {
             if (! (myBoard.researchStations.count(myCity) == 1) ){
               cityCards.erase(myCity);
               myBoard.researchStations.insert(myCity);
          }
         return *this;
       }


     std::string OperationsExpert::role(){
          return "OperationsExpert";
     }
};

