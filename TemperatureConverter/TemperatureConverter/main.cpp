//
//  main.cpp
//  TemperatureConverter
//
//  Created by Michael Lancaster on 4/11/14.
//  Copyright (c) 2014 michael Lancaster. All rights reserved.
//

// Required
#include <iostream>
// Required to use string variables easily
#include <string>

// require to use standard stuff from C++
using namespace std;

class TemperatureConverter {

    private:
        // variables
        string temperature;
        double value;
        double result;
    
        void showResult(void) {
            cout << endl;
            cout << "The temperature is " << result << " " << temperature << endl;
        
            cout << endl;
        }
    
        void CelsiusToFahrenheit(double c) {
            cout << "Converting Celsius to Fahrenheit..." << endl;
        
            result = (((c * 9.0) / 5.0) + 32);
            showResult();
        
            cout << endl;
        }
    
        void FahrenheitToCelsius(double f) {
            cout << "Converting Fahrenheit to Celsius..." << endl;
        
            result = ((f - 32) * 5.0) / 9.0;
            showResult();
        
            cout << endl;
        }
    
    public:
    
        void init(void) {
            cout << "What would you like to know? Celsius or Fahrenheit" << endl;
            cin >> temperature;
            cout << endl;
            
            if ( temperature == "fahrenheit" || temperature == "Fahrenheit" ) {
                cout << "What is the temperature in Celsius?" << endl;
            } else if ( temperature == "celsius" || temperature == "Celsius" ) {
                cout << "What is the temperature in Fahrenheit?" << endl;
            }
            
            cin >> value;
            cout << endl;
            
            if ( temperature == "fahrenheit" || temperature == "Fahrenheit" ) {
                FahrenheitToCelsius(value);
            } else if ( temperature == "celsius" || temperature == "Celsius" ) {
                CelsiusToFahrenheit(value);
            }
        }
    
};

int main() {
    
    TemperatureConverter objTemperatureConverter;
    objTemperatureConverter.init();
    
    system("pause");
    return 0;
}