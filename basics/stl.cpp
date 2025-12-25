#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0]<<endl;
    cout<<v.at(1)<<endl;
    v.pop_back();        
    for (int x : v) cout << x << " "; 
    cout<<endl;
    v.clear();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}
