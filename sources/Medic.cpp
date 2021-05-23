#include <iostream>
#include <string>
#include <map>

#include"Medic.hpp"

namespace pandemic {

 Medic::Medic(Board& b, City c):Player(b ,c){ }

 Medic& Medic::treat(const City& c){

          if (myCity != c){
           throw invalid_argument{"ERROR - deffrent city"};
          }

          if (myBoard.SicknessLevels.count(c) == 0 || myBoard.SicknessLevels.at(c) == 0){
                    throw invalid_argument{"ERROR - SicknessLevels is 0"};
          }

        myBoard.SicknessLevels[c] = 0;

     return *this;
 }


    Medic& Medic::fly_direct(const City& city){
         if (myCity == city) {
               throw invalid_argument{"ERROR - my city is the city"};
          }
           if (cityCards.count(city) == 0) {
               throw invalid_argument{"ERROR - no cards"};
          }
               cityCards.erase(city); 
               myCity = city;

               if(myBoard.Medicines.count(myBoard.conecMAP[city].color) == 1){
               myBoard.SicknessLevels[city] = 0;
              
        }
             return *this;
    }


  Medic& Medic::fly_charter(const City& city){
          if (myCity == city) {
               throw invalid_argument{"ERROR - my city is the city"};
          }
          if ( cityCards.count(myCity) == 0){
                throw invalid_argument{"ERROR - no card"}; 
          }
           cityCards.erase(myCity);
           myCity = city;

               if(myBoard.Medicines.count(myBoard.conecMAP[city].color) == 1){
                myBoard.SicknessLevels[city] = 0;
        }
        return *this;

    }
  
      Medic& Medic::fly_shuttle(const City& city){
       if (myCity == city) {
               throw invalid_argument{"ERROR - my city is the city"};
          }

          if (myBoard.researchStations.count(myCity) == 0 
          ||  myBoard.researchStations.count(city) == 0 ){
               throw invalid_argument{"ERROR - is not a researchStations"}; 
          }
               myCity = city;

               if(myBoard.Medicines.count(myBoard.conecMAP[city].color) == 1){
              myBoard.SicknessLevels[city] = 0;
        }
             return *this;
    }

      Medic& Medic::drive(const City& city){
         if (myCity == city) {
               throw invalid_argument{"ERROR - my city is the city"};
          }

         if (myBoard.conecMAP[myCity].neighbors.count(city) == 0){
                throw invalid_argument{"ERROR - the citys not connected"};
               }
                    myCity = city;
          
               if(myBoard.Medicines.count(myBoard.conecMAP[city].color) == 1){
            myBoard.SicknessLevels[city] = 0;
        }
             return *this;

    }

 std::string Medic::role(){
        return "Medic";
        }


 

}
