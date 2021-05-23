#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <map>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include "string"
#include <string>
#include <map>
#include <set>
#include "strc.hpp"
using namespace std;

namespace pandemic {

     
 class Board{

 public:
        set<pandemic::City> researchStations;
        set<pandemic::Color> Medicines;
        map<pandemic::City, int> SicknessLevels;
        map<pandemic::City,pandemic::strc> conecMAP;
        
    
        Board(){
        conecMAP = {
		{City::Algiers,(strc){"Algiers",Color::Black,{City::Madrid, City::Paris, City::Istanbul, City::Cairo}}},
        {City::Atlanta,(strc){"Atlanta",Color::Blue,{City::Chicago, City::Miami, City::Washington}}},
        {City::Baghdad,(strc){"Baghdad",Color::Black,{City::Tehran, City::Istanbul, City::Cairo, City::Riyadh, City::Karachi}}},
        {City::Bangkok,(strc){"Bangkok",Color::Red,{City::Kolkata, City::Chennai, City::Jakarta, City::HoChiMinhCity, City::HongKong}}},
        {City::Beijing,(strc){"Beijing",Color::Red,{City::Shanghai, City::Seoul}}},
        {City::Bogota,(strc){"Bogota",Color::Yellow,{City::MexicoCity, City::Lima, City::Miami, City::SaoPaulo, City::BuenosAires}}},
        {City::BuenosAires,(strc){"BuenosAires",Color::Yellow,{City::Bogota, City::SaoPaulo}}},
        {City::Cairo,(strc){"Cairo",Color::Black,{City::Algiers, City::Istanbul, City::Baghdad, City::Khartoum, City::Riyadh}}},
        {City::Chennai,(strc){"Chennai",Color::Black,{City::Mumbai, City::Delhi, City::Kolkata, City::Bangkok, City::Jakarta}}},
        {City::Chicago,(strc){"Chicago",Color::Blue,{City::SanFrancisco, City::LosAngeles, City::MexicoCity, City::Atlanta, City::Montreal}}},
        {City::Delhi,(strc){"Delhi",Color::Black,{City::Tehran, City::Karachi, City::Mumbai, City::Chennai, City::Kolkata}}},
        {City::Essen,(strc){"Essen",Color::Blue,{City::London, City::Paris, City::Milan, City::StPetersburg}}},
        {City::HoChiMinhCity,(strc){"HoChiMinhCity",Color::Red,{City::Jakarta, City::Bangkok, City::HongKong, City::Manila}}},
        {City::HongKong,(strc){"HongKong",Color::Red,{City::Bangkok, City::Kolkata, City::HoChiMinhCity, City::Shanghai, City::Manila, City::Taipei}}},
        {City::Istanbul,(strc){"Istanbul",Color::Black,{City::Milan, City::Algiers, City::StPetersburg, City::Cairo, City::Baghdad, City::Moscow}}},
        {City::Jakarta,(strc){"Jakarta",Color::Red,{City::Chennai, City::Bangkok, City::HoChiMinhCity, City::Sydney}}},
        {City::Johannesburg,(strc){"Johannesburg",Color::Yellow,{City::Kinshasa, City::Khartoum}}},
        {City::Karachi,(strc){"Karachi",Color::Black,{City::Tehran, City::Baghdad, City::Riyadh, City::Mumbai, City::Delhi}}},
        {City::Khartoum,(strc){"Khartoum",Color::Yellow,{City::Cairo, City::Lagos, City::Kinshasa, City::Johannesburg}}},
        {City::Kinshasa,(strc){"Kinshasa",Color::Yellow,{City::Lagos, City::Khartoum, City::Johannesburg}}},
        {City::Kolkata,(strc){"Kolkata",Color::Black,{City::Delhi, City::Chennai, City::Bangkok, City::HongKong}}},
        {City::Lagos,(strc){"Lagos",Color::Yellow,{City::SaoPaulo, City::Khartoum, City::Kinshasa}}},
        {City::Lima,(strc){"Lima",Color::Yellow,{City::MexicoCity, City::Bogota, City::Santiago}}},
        {City::London,(strc){"London",Color::Blue,{City::NewYork, City::Madrid, City::Essen, City::Paris}}},
        {City::LosAngeles,(strc){"LosAngeles",Color::Yellow,{City::SanFrancisco, City::Chicago, City::MexicoCity, City::Sydney}}},
        {City::Madrid,(strc){"Madrid",Color::Blue,{City::London, City::NewYork, City::Paris, City::SaoPaulo, City::Algiers}}},
        {City::Manila,(strc){"Manila",Color::Red,{City::HongKong, City::Taipei, City::SanFrancisco, City::HoChiMinhCity, City::Sydney}}},
        {City::MexicoCity,(strc){"MexicoCity",Color::Yellow,{City::LosAngeles, City::Chicago, City::Miami, City::Lima, City::Bogota}}},
        {City::Miami,(strc){"Miami",Color::Yellow,{City::Atlanta, City::MexicoCity, City::Washington, City::Bogota}}},
        {City::Milan,(strc){"Milan",Color::Blue,{City::Essen, City::Paris, City::Istanbul}}},
        {City::Montreal,(strc){"Montreal",Color::Blue,{City::Chicago, City::Washington, City::NewYork}}},
        {City::Moscow,(strc){"Moscow",Color::Black,{City::StPetersburg, City::Istanbul, City::Tehran}}},
        {City::Mumbai,(strc){"Mumbai",Color::Black,{City::Karachi, City::Delhi, City::Chennai}}},
        {City::NewYork,(strc){"NewYork",Color::Blue,{City::Montreal, City::Washington, City::London, City::Madrid}}},
        {City::Osaka,(strc){"Osaka",Color::Red,{City::Taipei, City::Tokyo}}},
        {City::Paris,(strc){"Paris",Color::Blue,{City::Algiers, City::Essen, City::Madrid, City::Milan, City::London}}},
        {City::Riyadh,(strc){"Riyadh",Color::Black,{City::Baghdad, City::Cairo, City::Karachi}}},
        {City::SanFrancisco,(strc){"SanFrancisco",Color::Blue,{City::LosAngeles, City::Chicago, City::Tokyo, City::Manila}}},
        {City::Santiago,(strc){"Santiago",Color::Yellow,{City::Lima}}},
        {City::SaoPaulo,(strc){"SaoPaulo",Color::Yellow,{City::Bogota, City::BuenosAires, City::Lagos, City::Madrid}}},
        {City::Seoul,(strc){"Seoul",Color::Red,{City::Beijing, City::Shanghai, City::Tokyo}}},
        {City::Shanghai,(strc){"Shanghai",Color::Red,{City::Beijing, City::HongKong, City::Taipei, City::Seoul, City::Tokyo}}},
        {City::StPetersburg,(strc){"StPetersburg",Color::Blue,{City::Essen, City::Istanbul, City::Moscow}}},
        {City::Sydney,(strc){"Sydney",Color::Red,{City::Jakarta, City::Manila, City::LosAngeles}}},
        {City::Taipei,(strc){"Taipei",Color::Red,{City::Shanghai, City::HongKong, City::Osaka, City::Manila}}},
        {City::Tehran,(strc){"Tehran",Color::Black,{City::Baghdad, City::Moscow, City::Karachi, City::Delhi}}},
        {City::Tokyo,(strc){"Tokyo",Color::Red,{City::Seoul, City::Shanghai, City::Osaka, City::SanFrancisco}}},
		{City::Washington,(strc){"Washington",Color::Blue,{City::Atlanta, City::NewYork, City::Montreal, City::Miami}}}};
        }

    int&  operator [] (City c);
    friend std::ostream &operator << (std::ostream&, const Board&);
    bool  is_clean();
    void  remove_cures();
    void  remove_stations();

    };
}