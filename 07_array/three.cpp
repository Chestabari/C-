#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size){
    int total = 0;
    for(int i = 0 ; i < size ; i++){
        total += chai[i];
    }
    return total;
}

int main(){
    int chaiServed[7] = {60, 40, 30, 50, 20, 10, 70};

    int total = totalChaiServed(chaiServed, 7);

    cout <<"Total chai served in a week: " <<  total << endl;

    return 0;
}