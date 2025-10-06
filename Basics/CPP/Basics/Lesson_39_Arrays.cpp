#include <iostream>
using namespace std;

int main(){
    float Grade[3], avg;
    cout << "Plase enter Grade1? " << endl;
    cin >> Grade[0];
    cout << "Plase enter Grade2? " << endl;
    cin >> Grade[1];
    cout << "Plase enter Grade3? " << endl;
    cin >> Grade[2];
    cout << "********************" << endl;
    avg = (Grade[0] + Grade[1] + Grade[2]) / 3;
    cout << "The Average of grades is " << avg;
    return 0;
}