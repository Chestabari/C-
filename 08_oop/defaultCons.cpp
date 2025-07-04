#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public: 
        string teaName;
        int servings;
        vector<string> ingredients;

        // default constructor 

        Chai(){
            teaName = "Unknow Tea";
            servings = 1;
            ingredients = {"Water", "Tea Leaves"};
            cout << "Constructor Called" << endl;
        }

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
    Chai defaultChai;

    defaultChai.displayChaiDetails();
    return 0;
}