#include <iostream>
#include <cstdio>
#include <vector>
#include "bpt.hpp"
using namespace std;
using B_PLUS_TREE::BPlusTree;
int main(){
    //freopen("ans.txt", "w", stdout);
    //freopen("data.txt", "r", stdin);
    //freopen("tree.txt", "w", stdout);
    BPlusTree<str<65>, int, std::max((long unsigned int)5, 8000 / (sizeof(str<65>) + 8) )> tree("treedata");
    int n, k;
    vector<int> ans;
    string op, s;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        //cout << "for" << i << " ";
        //cout << "root : "<<tree.get_root_index() << " ";
        cin >> op;
        if(op == "insert"){
            cin >> s;
            scanf("%d", &k);
            tree.Insert(s, k);
            //cout << endl;
        }
        if(op == "find"){
            cin >> s;
            tree.Find(s, ans);
            if(ans.size()){
                for(int j = 0; j < ans.size(); ++j)
                    printf("%d ", ans[j]);
                ans.clear();
            }
            else{
                printf("null");
            }
            printf("\n");
        }
        if(op == "delete"){
            cin >> s;
            scanf("%d", &k);
            tree.Delete(s, k);
            //cout << endl;
        }
    }
}