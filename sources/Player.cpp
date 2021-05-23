#include "Player.hpp"



namespace pandemic {
 
        Player::Player(Board &b, City c): myBoard(b), myCity(c){

        }

        Player::~Player(){

        }
        
    
     Player& Player::drive(const City& c){
     
          if (myBoard.conecMAP[myCity].neighbors.count(c) == 0 ){
                throw invalid_argument{"ERROR - the citys not connected"};
               }
               else{
                    myCity = c;
          }
          return *this;
     }

     Player& Player::fly_direct(const City& c){
          if (myCity == c) {
               throw invalid_argument{"ERROR - my city is the city"};
          }
           if (cityCards.count(c) == 0) {
               throw invalid_argument{"ERROR - no cards"};
          }
               cityCards.erase(c);
               myCity = c;
     return *this;
     }

     Player& Player::fly_shuttle(const City& c){


          if (myCity == c) {
               throw invalid_argument{"ERROR - my city is the city"};
          }

          if (myBoard.researchStations.count(myCity) == 0 
          || myBoard.researchStations.count(c) == 0 ){
               
              throw invalid_argument{"ERROR - is not a researchStations"}; 
          }
               myCity = c;
               return *this;
     }

     Player& Player::fly_charter(const City& c){
          if (myCity == c) {
               throw invalid_argument{"ERROR - my city is the city"};
          }
          if ( cityCards.count(myCity) == 0 ){
                throw invalid_argument{"ERROR - no card"}; 
          }
           cityCards.erase(myCity);
           myCity = c;
           return *this;
     }

     Player& Player::remove_charter(const City& c){
     return *this;
     }
     Player& Player::remove_shuttle(const City& c){
     return *this;
     }

     Player& Player::build(){
          if (myBoard.researchStations.count(myCity) == 1){
               return *this;
          }
          
           if (cityCards.count(myCity) == 1){
               cityCards.erase(myCity);
               myBoard.researchStations.insert(myCity);
          }

          else if (cityCards.count(myCity) == 0){
               throw invalid_argument{"ERROR - no cards"};
          }


     return *this;
     }

     Player& Player::discover_cure(const Color& c){
           if (myBoard.Medicines.count(c) == 1){
                         return *this;
          }

          if (myBoard.researchStations.count(myCity) == 0 ){
                throw invalid_argument{"ERROR - there is a research stations"};
          }
          //  if (myBoard.SicknessLevels.count(myCity) == 0 ||
          //  myBoard.SicknessLevels[myCity] == 0 
          //  ){
          //      throw invalid_argument{"ERROR - there is no sickness"};

          //  }
     
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
               set<City> temp;
               t=5;
          for (auto& it : cityCards) {
               if (myBoard.conecMAP[it].color == c){
                          t -- ;
                          temp.insert(it);
                        //  myBoard.conecMAP.erase(it);
                    }
                    if (t==0){
                          myBoard.Medicines.insert(c); 
                         break;
                    }
               }
               for (auto& it : temp) {
     cityCards.erase(it);
     }
          }
     return *this;
     }

     Player& Player::treat(const City& c){
          Color col = myBoard.conecMAP[c].color;
          if (myCity != c){
           throw invalid_argument{"ERROR - deffrent city"};
          }
          if (myBoard.SicknessLevels[c] == 0 || myBoard.SicknessLevels.count(c) == 0 ){
                    throw invalid_argument{"ERROR - SicknessLevels is 0"};
          }

          if (myBoard.Medicines.count(col) == 1){
               myBoard.SicknessLevels[c] = 0;
          }

        else{
               myBoard.SicknessLevels[c] -- ;
          }

     return *this;
     }
      

     string Player::role(const City& c){
     return "";
     }
     string Player::role(){
     return "";
     }

     Player& Player::take_card(const City& c){
     this->cityCards.insert(c);
     return *this;
     }

     Player& Player::remove_cards(const City& c){
          this->cityCards.clear();
          return *this;
     }

};