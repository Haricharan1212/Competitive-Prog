#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while (t > 0){
        t--;
        int x,y,n;
        cin >> x >> y >> n;
        int dum = (n/x)*x + y%x;
        if (dum <= n) cout << dum;
        else cout << dum-x;
        cout << endl;
        }
 
}
 
