#include <iostream>
#include <vector>

using namespace std;
//그리디알고리즘
int main(){
    int x;
    cin >> x;
    vector<int> v;
    if(x<0)
        return 0;
    for(int i=0;i<x;i++){
        int num;
        cin >> num;
        if(num<=0||num>500)
            return 0;
        v.push_back(num);
    }

    for(int i=0;i<v.size();i++){
        int quarter= v[i]/25;
        int dime=(v[i]-quarter*25)/10;
        int nickel=(v[i]-quarter*25-dime*10)/5;
        int penny=(v[i]-quarter*25-dime*10-nickel*5)/1;

        cout<< quarter <<' ' << dime<< ' ' <<nickel <<' ' << penny<<endl;
    }
    return 0;
}
