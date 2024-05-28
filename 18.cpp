#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    int num[10];

    srand(time(0));

    for (int i = 0; i < 10; i++) {
        num[i] = rand() % 100 + 1; 
    }

    for (int i = 0; i < 10; i++) {
        cout << "Los números aleatorios son: " << num[i] << endl;
    }

    return 0;
}