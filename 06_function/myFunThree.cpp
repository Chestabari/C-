#include <iostream>

using namespace std;

int globalChaiStock = 100;
void pourChai(int &cups){ // Pass by reference
    int test = 9;
    cups += 5;
    cout << "Poured cups: " << cups << endl;
}

int main(){
    int cups = 2;
    pourChai(cups); // Passing by reference
    cout << "Total cups are " << cups << endl;
    return 0;
}