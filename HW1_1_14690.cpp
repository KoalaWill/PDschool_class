#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define debug(x) cerr<<#x<<":"<<x<<endl;
#define mark(x,y) cerr<<#x<<" is "<<x<<" at "<<y<<endl;
#define pii pair<int, int> 
// #define pipii pair<int, pair<int, int>> 
// #define priority_queue <pipii, vector<pipii>, greater<pipii>>
#define priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()

// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #define int long long
// #define int unsigned long long

// int TwoDVecSum(vector<vector<int>> &Map){
//      auto sum = std::accumulate(Map.cbegin(), Map.cend(), 0, [](auto lhs, const auto& rhs) {
//      return std::accumulate(rhs.cbegin(), rhs.cend(), lhs);
//      });
//      return sum;
// }
int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    cout << c << " " << b << " " << a << endl;
    cout << std::hex << a << " " << b << " " << c << endl;
    cout << std::dec << a+b+c << endl;
    cout << (float)a * 3.14f << endl;
    cout << setprecision(4) << (float)a / (float)b<< endl;
    return 0;
}
