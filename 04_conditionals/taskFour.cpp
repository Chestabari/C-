#include <iostream>

using namespace std;

int main(){
   int choice;
   double price;

   cout << "Select your tea" << endl ;
   cout << "1. Green Tea" << endl ;
   cout << "2. Lemon Tea" << endl ;
   cout << "3. Oolong Tea" << endl ;
   cout << "Enter your choice in number: " << endl ;

   cin >> choice;

   switch(choice){
        case 1:
            price = 2.0;
            cout << "You selected Green Tea. Price: " << price << endl;
            break;
        case 2:
            price = 3.0;
            cout << "You selected Lemon Tea. Price: " << price << endl;
            break;
        case 3:
            price = 4.0;
            cout << "You selected Oolong Tea. Price: " << price << endl;
            break;
        default: 
            cout << "Invaild choice" << endl;
            break;
   }


    return 0;
};