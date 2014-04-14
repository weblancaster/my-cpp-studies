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

// variables
string temperature;
double value;
double result;

int showResult() {
    cout << endl;
    cout << "The temperature is " << result << " " << temperature << endl;
    
    cout << endl;
    return 0;
}

int CelsiusToFahrenheit(double c) {
    cout << "Converting Celsius to Fahrenheit..." << endl;
    
    result = (c * 9) / (5 + 32);
    showResult();
    
    cout << endl;
    return 0;
}

int FahrenheitToCelsius(double f) {
    cout << "Converting Fahrenheit to Celsius..." << endl;
    
    result = (f - 32) * (5 / 9);
    showResult();
    
    cout << endl;
    return 0;
}

int main() {
    
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
    
    return 0;
}