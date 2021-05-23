#include <iostream>
#include <string>
#include <map>
#include"Scientist.hpp"
#include"Board.hpp"

namespace pandemic {
    int num = 0;
     Scientist::Scientist(Board& b, City c, int n):  Player(b, c), num(n){}


   Scientist& Scientist::discover_cure(const Color& c){

     if (myBoard.Medicines.count(c) == 1 ){
                    return *this;
               }
//    if (myBoard.SicknessLevels[myCity] == 0  || myBoard.SicknessLevels.count(myCity) == 0 ){
//           throw invalid_argument{"ERROR - there isno sickness"};
//      }

     if (myBoard.researchStations.count(myCity) == 0 ){
               throw invalid_argument{"ERROR - there is no research stations"};
     }

          
         //cout all the cards in spec color
          int t = 0;
          for (auto& it : cityCards) {
               if (myBoard.conecMAP[it].color == c){
                    t++;
               }
          }

          if (t < num ){
                throw invalid_argument{"ERROR - there is no cards"};
          }
          else{
               set<City> temp;
               t=num;
               myBoard.Medicines.insert(c);
          for (auto& it : cityCards) {
               if (myBoard.conecMAP[it].color == c){
                    t--;
                    temp.insert(it);
                  //  cityCards.erase(it);
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

        std::string Scientist::role(){
        return "Scientist";
        }

}
