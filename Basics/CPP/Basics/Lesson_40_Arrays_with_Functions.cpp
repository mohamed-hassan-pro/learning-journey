#include <iostream>
using namespace std;
void ReadGrades(float Grade[3]){
    cout << "Plase enter Grade1? " << endl;
    cin >> Grade[0];
    cout << "Plase enter Grade2? " << endl;
    cin >> Grade[1];
    cout << "Plase enter Grade3? " << endl;
    cin >> Grade[2];
};
float CalculateAverageGrades(float Grade[3]){
    return (Grade[0] + Grade[1] + Grade[2]) / 3;
};
void PrintAverage(float avg){
    cout << "The Average of grades is " << avg;
};
int main(){
    float Grade[3];
    ReadGrades(Grade);
    PrintAverage(CalculateAverageGrades(Grade));
    return 0;
}