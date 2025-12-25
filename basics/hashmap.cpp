#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> mp;
    mp[5]=10;
    cout<<mp[5]<<" ";
    return 0;
}