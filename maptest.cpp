//
// Created by zbl on 2022/6/10.
//
#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
class T{
public:
    int a, b;
    T():a(0), b(0){}
    T(int aa, int bb){
        a = aa;
        b = bb;
    }
    T &operator=(const T &rhs){
        if(this == &rhs) return *this;
        a = rhs.a;
        b = rhs.b;
        return *this;
    }
    bool operator<(const T &rhs) const {
        return a < rhs.a;
    }
    friend ostream &operator << (ostream &ou, const T &obj){
        cout << obj.a << " " << obj.b;
        return ou;
    }

};
map<string, int>m;
int main(){
    freopen("data.txt", "r", stdin);
    freopen("map.txt", "w", stdout);
    int n;
    string op;
    string Key;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        //cout << "for" << i << " ";
        cin >> op;
        if(op == "insert"){
            cin >> Key;
            int aa;
            cin >> aa;
            m[Key] = aa;
            //cout << endl;
        }
        if(op == "find"){
            cin >> Key;
            cout << m[Key] << endl;
        }
        if(op == "delete"){
            int aa, bb;
            cin >> Key >> aa;
            m.erase(Key);
            //cout << endl;
        }
    }
}