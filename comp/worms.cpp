#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector <int> vec;
    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;
        for (int j = 0; j < a; j++) {vec.push_back(i);}
    }
    int m;
    cin >> m;
    vector <int> vec2;

    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        cout << vec[a-1] << endl;
    }

}
