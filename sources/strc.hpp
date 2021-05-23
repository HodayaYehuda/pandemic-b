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
using namespace std;

namespace pandemic {

        class strc {
        public:        
        string city;
        Color color;
        set<City> neighbors;

        // strc(string city, pandemic::Color c , set<pandemic::City> n)
        // :city(city),color(c),neighbors(n){}
        
        };
}