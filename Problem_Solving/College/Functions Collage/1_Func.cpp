#include <iostream>
using namespace std;
void Grades (float mark){
    if (mark >= 91 && mark <= 100)
        cout << "Grade: AA" << endl;
    else if (mark >= 81)
        cout << "Grade: AB" << endl;
    else if (mark >= 71)
        cout << "Grade: BB" << endl;
    else if (mark >= 61)
        cout << "Grade: BC" << endl;
    else if (mark >= 51)
        cout << "Grade: CD" << endl;
    else if (mark >= 41)
        cout << "Grade: DD" << endl;
    else
        cout << "Grade: Fail" << endl;
}
int main(){
    int n;
    cout<<"Enter number of subjects: ";
    cin>>n;
    int marks[n];float sum=0;
    for(int i=0;i<n;i++){
        cin>>marks[i];
        sum+=marks[i];
    }
    float avg=sum/float(n);
    Grades(avg);
    return 0;
}