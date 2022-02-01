#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;

    cin >> vec[0] >> vec[1] >> vec[2];
    sort(vec.begin(),vec.end());


    cout << min(vec[2] - vec[1] - vec[0] + x, vec[2] - vec[1] > vec[1] - vec[0]);
}
