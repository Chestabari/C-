#include <iostream>

using namespace std;

int hellooChai(){
    return 0;
}

int main(){
    
    // lamda 
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };
    
    preparedChai(4);

    return 0;
}