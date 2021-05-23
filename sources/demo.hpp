
/* include main classes */
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
/* include special skills players */
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace pandemic;
#include <iostream>
#include <stdexcept>
#include <map>
#include <set>
#include <sstream>
using namespace std;

int main() {
	Board board;  
	board[City::Kinshasa] = 3;      
	board[City::Kinshasa] = 2;     
	board[City::MexicoCity] = 3;    
	board[City::HoChiMinhCity] = 1; 
	board[City::Chicago] = 1;    

    OperationsExpert player {board, City::Atlanta}; 
    player.take_card(City::Johannesburg)
	 .take_card(City::Khartoum)
	 .take_card(City::SaoPaulo)
	 .take_card(City::BuenosAires)
	 .take_card(City::HoChiMinhCity);

     player.build();
     
     }