#include <iostream>
#include <string>
#include <map>

#include "Player.hpp"
#include"GeneSplicer.hpp"


namespace pandemic {
GeneSplicer::GeneSplicer(Board& b, City c):Player(b ,c){}

   GeneSplicer& GeneSplicer::discover_cure(const Color& c){
      if (myBoard.Medicines.count(c) == 1 ){
                return *this;
          } 
        //   if (myBoard.SicknessLevels[myCity] == 0 || myBoard.SicknessLevels.count(myCity) == 0 ){
        //        throw invalid_argument{"ERROR - there isno sickness"};
        //   }
       
          if (myBoard.researchStations.count(myCity) == 0 ){
                throw invalid_argument{"ERROR - there is no research stations"};
          }

          
         //cout all the cards in spec color
          
          if (cityCards.size() < 5 ){
                throw invalid_argument{"ERROR - there is no cards"};
          }

          else{
              set<City> temp;
            int t=5;
            myBoard.Medicines.insert(c);
          for (auto& it : cityCards) {
                         t --;
                         temp.insert(it);
                        //cityCards.erase(it);

                    if (t==0){
                        break;
                    }
            }
            for (auto& it : temp) {
     cityCards.erase(it);
     }
        }
     return *this;
     }

    std::string GeneSplicer::role(){
        return "GeneSplicer";
    }



    }
