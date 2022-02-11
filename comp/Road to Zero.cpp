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
    long long x,y,a,b;
    cin >> x >> y >> a >> b;
    
    long long c = max(x,y);
        long long d = min(x,y);

        cout << (c-d)*a + d*min(2*a,b)<<endl;

    }
    
}
