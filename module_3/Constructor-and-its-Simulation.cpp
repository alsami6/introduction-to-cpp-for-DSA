#include<bits/stdc++.h>
using namespace std;

class student {
    public: 
    int roll;
    int cls;
    double gpa;

    student(int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
    }
};


int main(){
    student sami(26,5,4.42);

    student tanmin(2,5,4.65);


    cout << sami.roll << " " << sami.cls << " " << sami.gpa << endl;
    cout << tanmin.roll << " " << tanmin.cls << " " << tanmin.gpa << endl;

    return 0;
}