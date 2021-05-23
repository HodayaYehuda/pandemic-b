#pragma once
#include <iostream>

namespace pandemic {

enum City {
Algiers,
Atlanta,
Baghdad,
Bangkok,
Beijing,
Bogota,
BuenosAires,
Cairo,
Chennai,
Chicago,
Delhi,
Essen,
HoChiMinhCity,
HongKong,
Istanbul,
Jakarta,
Johannesburg,
Karachi,
Khartoum,
Kinshasa,
Kolkata,
Lagos,
Lima,
London,
LosAngeles,
Madrid,
Manila,
MexicoCity,
Miami,
Milan,
Montreal,
Moscow,
Mumbai,
NewYork,
Osaka,
Paris,
Riyadh,
SanFrancisco,
Santiago,
SaoPaulo,
Seoul,
Shanghai,
StPetersburg,
Sydney,
Taipei,
Tehran,
Tokyo,
Washington,
};

inline City stringToCity(std::string city){
    if(city == "Algiers") return Algiers;
    else if(city == "Atlanta") return Atlanta;
    else if(city == "Baghdad") return Baghdad;
    else if(city == "Bangkok") return Bangkok;
    else if(city == "Beijing") return Beijing;
    else if(city == "Bogota") return Bogota;
    else if(city == "BuenosAires") return BuenosAires;
    else if(city == "Cairo") return Cairo;
    else if(city == "Chennai") return Chennai;
    else if(city == "Chicago") return Chicago;
    else if(city == "Delhi") return Delhi;
    else if(city == "Essen") return Essen;
    else if(city == "HoChiMinhCity") return HoChiMinhCity;
    else if(city == "HongKong") return HongKong;
    else if(city == "Istanbul") return Istanbul;
    else if(city == "Jakarta") return Jakarta;
    else if(city == "Johannesburg") return Johannesburg;
    else if(city == "Karachi") return Karachi;
    else if(city == "Khartoum") return Khartoum;
    else if(city == "Kinshasa") return Kinshasa;
    else if(city == "Kolkata") return Kolkata;
    else if(city == "Lagos") return Lagos;
    else if(city == "Lima") return Lima;
    else if(city == "London") return London;
    else if(city == "LosAngeles") return LosAngeles;
    else if(city == "Madrid") return Madrid;
    else if(city == "Manila") return Manila;
    else if(city == "MexicoCity") return MexicoCity;
    else if(city == "Miami") return Miami;
    else if(city == "Milan") return Milan;
    else if(city == "Montreal") return Montreal;
    else if(city == "Moscow") return Moscow;
    else if(city == "Mumbai") return Mumbai;
    else if(city == "NewYork") return NewYork;
    else if(city == "Osaka") return Osaka;
    else if(city == "Paris") return Paris;
    else if(city == "Riyadh") return Riyadh;
    else if(city == "SanFrancisco") return SanFrancisco;
    else if(city == "Santiago") return Santiago;
    else if(city == "SaoPaulo") return SaoPaulo;
    else if(city == "Seoul") return Seoul;
    else if(city == "Shanghai") return Shanghai;
    else if(city == "StPetersburg") return StPetersburg;
    else if(city == "Sydney") return Sydney;
    else if(city == "Taipei") return Taipei;
    else if(city == "Tehran") return Tehran;
    else if(city == "Tokyo") return Tokyo;
   return Washington;

}

inline std::string cityToString(const City& city){
    if(city == Algiers) return "Algiers";
    else if(city == Atlanta) return "Atlanta";
    else if(city == Baghdad) return "Baghdad";
    else if(city == Bangkok) return "Bangkok";
    else if(city == Beijing) return "Beijing";
    else if(city == Bogota) return "Bogota";
    else if(city == BuenosAires) return "BuenosAires";
    else if(city == Cairo) return "Cairo";
    else if(city == Chennai) return "Chennai";
    else if(city == Chicago) return "Chicago";
    else if(city == Delhi) return "Delhi";
    else if(city == Essen) return "Essen";
    else if(city == HoChiMinhCity) return "HoChiMinhCity";
    else if(city == HongKong) return "HongKong";
    else if(city == Istanbul) return "Istanbul";
    else if(city == Jakarta) return "Jakarta";
    else if(city == Johannesburg) return "Johannesburg";
    else if(city == Karachi) return "Karachi";
    else if(city == Khartoum) return "Khartoum";
    else if(city == Kinshasa) return "Kinshasa";
    else if(city == Kolkata) return "Kolkata";
    else if(city == Lagos) return "Lagos";
    else if(city == Lima) return "Lima";
    else if(city == London) return "London";
    else if(city == LosAngeles) return "LosAngeles";
    else if(city == Madrid) return "Madrid";
    else if(city == Manila) return "Manila";
    else if(city == MexicoCity) return "MexicoCity";
    else if(city == Miami) return "Miami";
    else if(city == Milan) return "Milan";
    else if(city == Montreal) return "Montreal";
    else if(city == Moscow) return "Moscow";
    else if(city == Mumbai) return "Mumbai";
    else if(city == NewYork) return "NewYork";
    else if(city == Osaka) return "Osaka";
    else if(city == Paris) return "Paris";
    else if(city == Riyadh) return "Riyadh";
    else if(city == SanFrancisco) return "SanFrancisco";
    else if(city == Santiago) return "Santiago";
    else if(city == SaoPaulo) return "SaoPaulo";
    else if(city == Seoul) return "Seoul";
    else if(city == Shanghai) return "Shanghai";
    else if(city == StPetersburg) return "StPetersburg";
    else if(city == Sydney) return "Sydney";
    else if(city == Taipei) return "Taipei";
    else if(city == Tehran) return "Tehran";
    else if(city == Tokyo) return "Tokyo";
   return "Washington";

}

};




