#include <iostream>

using namespace std;

int main(){
    int chaiSales[3][7] = {
        {50, 79, 86, 93, 47, 83, 77}, // Shop 1 sales for 7 days
        {77, 87, 94, 90, 72, 54, 76}, // Shop 2 sales for 7 days
        {78, 64, 51, 82, 68, 91, 55}  // Shop 3 sales for 7 days
    };

    for(int i = 0; i < 3; i++){
        cout << "I am at shop: " << i+1 << "\n";
        for(int j =0; j < 7; j++){
            cout << chaiSales[i][j] << " cups" << "\n";
        }
    }

    return 0;
}