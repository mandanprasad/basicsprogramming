//
//  main.cpp
//  conditions
//
//  Created by Mandan Prasad on 22/09/24.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string teaChoice;
    int numberTeaCups;
    float price = 0.00;
    float gst;
    float discount;
    float totalTeaPrice;
    bool oldCustomer;
    cout<<"Welcome to the cafe"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"\n";
    cout<<"Which tea woud you choose to have"<<endl;
    cout<<"red tea"<<endl;
    cout<<"milk tea"<<endl;
    cout<<"masla tea"<<endl;
    getline(cin, teaChoice);
    cout<<"Number of cups?"<<endl;
    cin >> numberTeaCups;
    
    if( teaChoice == "red tea") {
        price = 10;
    } else if (teaChoice == "milk tea"){
        price = 15;
    } else if (teaChoice == "masla tea"){
        price = 20;
    }
    
    gst = (price/100) * 10;
    totalTeaPrice = gst + price * numberTeaCups;
    
    cout<<"Total price you have to pay is " << totalTeaPrice<<endl;
    cout<<"We are having a discount session for customers older than one year customer \n or if you order more than 12 bags"<<endl;
    cout<<"Are you a older customer yes or no? "<<endl;
    cin>> oldCustomer;
   
    
    if(oldCustomer == true || numberTeaCups>= 20) {
        discount = (price/100) * 20;
        totalTeaPrice = totalTeaPrice -  discount;
        
        cout<<"Your new discounted price is: "<<totalTeaPrice<<endl;
    }
    

    
    
    
    return 0;
}
