#include <iostream>
#include"Board.hpp"

namespace pandemic {
        
    int& Board::operator [] ( City c){
        return SicknessLevels[c];
    }


   ostream& operator << (ostream &os, const Board &u){
       std::cout <<  " citys: ";
        for (auto& it : u.conecMAP) {
            std::cout << "the city: " << cityToString(it.first) ;
            std::cout << "conected citys: " << cityToString(it.first) ;

              for (auto& it1 : it.second.neighbors) {
                  std::cout << "the city: " << cityToString(it1) ;
        }
        }

        std::cout << "number of sick citys:  " << u.SicknessLevels.size() <<"\n" ;
        std::cout << "number of research Stations:  " << u.researchStations.size() <<"\n";
        
       return os;

   }
    bool Board::is_clean(){
        for (auto& it : SicknessLevels) {
            if (it.second != 0){
                return false;
            }
        }
        return true;
    }
    void Board::remove_cures(){
        Board::Medicines.clear();
    }


    void Board::remove_stations(){
        Board::researchStations.clear();
    }



};
