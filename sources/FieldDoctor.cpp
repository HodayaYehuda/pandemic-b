#include <iostream>
#include <string>
#include <map>
#include"FieldDoctor.hpp"

namespace pandemic {

FieldDoctor::FieldDoctor(Board& b, City c):Player(b ,c){}

FieldDoctor& FieldDoctor::treat(const City& c) {

          Color col = myBoard.conecMAP[c].color;

          if (myBoard.SicknessLevels[c] == 0){
                 throw invalid_argument{"ERROR - SicknessLevels is 0"};
          }

          if (c != myCity && 
          myBoard.conecMAP.at(myCity).neighbors.count(c) == 0 ){
           throw invalid_argument{"ERROR - far away city"};
          }

          if ( myBoard.Medicines.count(col) == 1){
               myBoard.SicknessLevels[c] = 0;
          }

          if ( myBoard.Medicines.count(col) == 0){
              myBoard.SicknessLevels[c] --;
          }

         

     return *this;
     }
    
    std::string FieldDoctor::role() {
        return "FieldDoctor";
    }

}
