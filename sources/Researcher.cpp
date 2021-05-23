#include <iostream>
#include <string>
#include <map>
#include <set>

#include "Researcher.hpp"

namespace pandemic {
 Researcher::Researcher(Board& b, City c): Player(b,c){}

 Researcher& Researcher::discover_cure(const Color& c){

if (myBoard.Medicines.count(c) == 1){
                              return *this;
                         }
// if (myBoard.SicknessLevels[myCity] == 0  || myBoard.SicknessLevels.count(myCity) == 0 ){
//                throw invalid_argument{"ERROR - there isno sickness"};
//           }

        

    set<City> temp;  
         //cout all the cards in spec color
          int t = 0;
          for (auto& it : cityCards) {
               if (myBoard.conecMAP[it].color == c){
                    t++;
               }
          }

          if (t < 5 ){
                throw invalid_argument{"ERROR - there is no cards"};
          }
          else{
               t=5;
               myBoard.Medicines.insert(c);
          for (auto& it : cityCards) {
               if (myBoard.conecMAP[it].color == c){
                    t--;
                    temp.insert(it);
                    //cityCards.erase(it);
                    if (t==0){
                         break;
                    }
               }
          }

          for (auto& it : temp) {
     cityCards.erase(it);
     }

}

         
     return *this;
     }

  std::string Researcher::role(){
      return "Researcher";
  }

}
