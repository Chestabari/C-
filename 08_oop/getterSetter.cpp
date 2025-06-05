#include <iostream>
#include <vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){
            teaName = "Unknown Tea";
            servings = 1;
            ingredients = {"Water", "Tea leaves"};
        }   
        
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }

        // getter 
        string getTeaName(){
            return teaName;
        }

        // setter 
        void setTeaName(string name){
            // logic 
            teaName = name;
        }

        // getter for servings 
        int getServings(){
            return servings;
        }

        // setter for servings 
        void setServings(int serve){
            servings = serve;
        }

        // getter for ingre 
            vector<string> getIngredients(){
                return ingredients;
            }

        // setter for ingre
        void setIngredients(vector<string> ingr){
            ingredients = ingr;
        } 

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: " ;
            for(string ingridient : ingredients){
                cout << ingridient << " ";
            } 
            cout << endl;
        }
};

int main(){
    Chai chai;
    chai.setTeaName("Ginger tea");
    chai.setServings(2);
    chai.setIngredients({"Water", "Milk", "Ginger", "Tea Leaves", "Sugar"});

    cout << "chai Details: " << endl;
    chai.displayChaiDetails();

    return 0;

}