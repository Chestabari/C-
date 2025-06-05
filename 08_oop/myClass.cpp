#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public: 
        // data memebers (attributes)
        string teaName; // Name of the tea 
        int servings; // Number of servings
        vector<string> ingredients; // list of ingredients for the tea

        // Member finction 

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: " ;
            for(string ingredient : ingredients){
                cout << ingredient << " ";
            } 
            cout << endl;
        }
    };

int main(){
    Chai chaiOne;

    chaiOne.teaName = "Lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "Lemon", "Honey", "Tea"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala tea";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Ginger", "Tea", "Masala"};

    chaiTwo.displayChaiDetails();

    return 0;
}