#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int roll;
    int marks;
};


int main(){
    int n;
    cin >> n;

    student a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    student minmum;
    minmum.marks = INT_MAX;

    for(int i = 0; i < n; i++){
        if(a[i].marks < minmum.marks){
            minmum = a[i];
        }
    }
    cout << minmum.name << " " << minmum.roll << " " << minmum.marks << endl;
    return 0;
}