#include <iostream>
using namespace std;

int main (){

double score, total = 0, average;
string name;

for (int i = 1; i <= 5; i++){
    cout<<"Enter Score for Quiz "<< i << " (out of 20): ";
    cin>>score;

    total = total + score;
}

average = total/5;

cout<<"\nTotal Score: "<<total<< " / 100"<<endl;
cout<<"Average Score: "<<average<< " / 20"<<endl;

    return 0;
}