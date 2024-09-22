//
//  main.cpp
//  variableAndConstant
//
//  Created by Mandan Prasad on 20/09/24.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int score;
    score = 100;
    
    int mandanBalance = 1000;
    
    int teaLeaves = 50;
    float waterTemperature = 85.55464;
    double priceOfTea = 299.9946346345636346;
    char teaGarden = 'A';
    bool isTeaReady = false;
    cout<<"Welcome to the learning mode"<<endl;
    cout<<"You should always keep learning"<<endl;
    cout<<waterTemperature<<endl;
    cout<<priceOfTea<<endl;
    
    // datatype
    
    unsigned smallTeaPack = 100;
    long largeTeaStorage = 100000000000000;
    cout<< smallTeaPack <<endl;
    cout<< largeTeaStorage <<endl;
    
    // casting
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;
    int teaQuantity = 2;
    
    double totalTeaPrice = teaPrice * teaQuantity;
    
    cout<< roundedTeaPrice<<endl;
    cout<< totalTeaPrice <<endl;
    
    
    // string
    
    string favouriteTea = "Red Tea";
    string description = "Knownn as the \"best\" tea";
    cout<<favouriteTea<<endl;
    cout<<description<<endl;
    
    
    //userinput
    
    string userTea;
    int newTeaQuantity;
    
    cout<<"What would you like to order? \n";
    getline(cin, userTea);
    cout<<"How many cups of" <<userTea<< "would you like to have?";
    cin >> newTeaQuantity;
    cout<<userTea<<endl;
    cout<<newTeaQuantity<<endl;
     
    
    return 0;
}
