#include <iostream> 
using namespace std; 
int main(){ 
    string currency; 
    string currency2; 
    double amount; 
    double amount2; 
    cout << "What currency would you like to convert? \n"; 
    cout << "The currencies are: Rupees, Dollars, pound, and Euros. \n"; 
    cin >> currency; 
    cout << "What currency would you like to convert to? \n"; 
    cin >> currency2; 
    cout << "How much money would you like to convert? \n"; 
    cin >> amount; 
    if (currency == "dollars"){ 
        if (currency2 == "rupees"){ 
            amount2 = amount * 75.44; 
            cout << amount << "$ is equal to " << amount2 << "₹\n"; 
        }else if (currency2 == "pound"){ 
            amount2 = amount * 99.78; 
            cout << amount << "$ is equal to " << amount2 << "Mex$\n"; 
        }else if (currency2 == "euros"){ 
            amount2 = amount * 84.81; 
            cout << amount << "$ is equal to " << amount2 << "€\n"; 
        } 
    }else if (currency == "rupees"){ 
         
        if (currency2 == "dollars"){ 
            amount2 = amount * .013; 
            cout << amount << "₹ is equal to " << amount2 << "$\n"; 
        }else if (currency2 == "pound"){ 
            amount2 = amount * .010; 
            cout << amount << "₹ is equal to " << amount2 << "Mex$\n"; 
        }else if (currency2 == "euros"){ 
            amount2 = amount * .012; 
            cout << amount << "₹ is equal to " << amount2 << "€\n"; 
        } 
    }else if (currency == "pound"){ 
            if (currency2 == "dollars"){ 
                amount2 = amount * 1.32; 
                cout << amount << " £ is equal to " << amount2 << "$\n"; 
            }else if (currency2 == "rupees"){ 
                amount2 = amount * 99.84; 
                cout << amount << " £ is equal to " << amount2 << "₹\n"; 
            }else if (currency2 == "euros"){ 
                amount2 = amount * 1.18; 
                cout << amount << "£ is equal to " << amount2 << "€\n"; 
            } 
    }else if (currency == "euros"){ 
        if (currency2 == "dollars"){ 
            amount2 = amount * 1.12; 
            cout << amount << "€ is equal to " << amount2 << "$\n"; 
        }else if (currency2 == "pesos"){ 
            amount2 = amount * 0.85; 
            cout << amount << "€ is equal to " << amount2 << "Mex$\n"; 
        }else if (currency2 == "rupees"){ 
            amount2 = amount * 84.75; 
            cout << amount << "€ is equal to " << amount2 << "₹\n"; 
        } 
    }else{ 
        cout << "Invalid entry. (check spelling!)\n"; 
    } 
}
