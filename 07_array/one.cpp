#include <iostream>

using namespace std;

int main(){
    int chaiTemperature[5] = {85, 90, 88, 91, 87};

    cout << "Chai temperature: ";
    for(int i = 0 ; i < 5 ; i++ ){
        cout << chaiTemperature[i] << " degree C \n";
    }
    

    return 0;
}