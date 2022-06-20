#include <bits/stdc++.h>
using namespace std;
/*
 * This a comparer for test;
 */
int main(){
    int cnt = 0;
    system("g++ main.cpp -o tree");
    system("g++ maptest.cpp -o map");
    while(true){
        ++cnt;
        system("g++ datamaker.cpp -o datamaker");
        system("./datamaker");
        system("./tree");
        system("./map");
        system("rm treedata");
        if (system("diff tree.txt map.txt -b")) //当 fc 返回1时，说明这时数据不一样
            break;
        else{
            cout << "第" << cnt << "次测试, 找不到差异" << endl;
        }
    }
}