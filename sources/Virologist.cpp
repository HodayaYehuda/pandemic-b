#include <iostream>
#include <string>
#include <map>
#include "Virologist.hpp"



namespace pandemic {
Virologist::Virologist(Board& b, City c):Player(b ,c){}

   Virologist& Virologist::treat(const City& c){

          Color col = myBoard.conecMAP[c].color;

           if (myBoard.SicknessLevels[c] == 0  || myBoard.SicknessLevels.count(c) == 0 ){
                   throw invalid_argument{"ERROR - SicknessLevels is 0"};
          }

          if (c != myCity && cityCards.count(c) == 0){
                   throw invalid_argument{"ERROR - no card"};
          }

           if (myBoard.Medicines.count(col) == 1){
               myBoard.SicknessLevels[c] = 0;
          }

            if (myBoard.Medicines.count(col) == 0){ 
               myBoard.SicknessLevels[c] --;
          }
           if (myCity != c){
               this->cityCards.erase(c);
           }

     return *this;
     }

    std::string Virologist::role() {
        return "Virologist";
    }

};
