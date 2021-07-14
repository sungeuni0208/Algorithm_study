#include <iostream>
#include <vector>
#include <string>

using namespace std;
//문자열 지영공주..
int main(){
    int size;
    cin >> size;
    vector<string> v;

    //1-그대로, 2-좌우반전, 3-상하반전

    for(int i=0;i<size;i++){
        string str;
        cin >> str;
        v.push_back(str);
    }
    int e;
    cin >> e;
    if(e==1){
        for(int i=0;i<v.size();i++)
            cout<< v[i]<<endl;
    }else if(e==2){
        for(int i=0;i<v.size();i++){
            for(int j=v.size()-1;j>=0;j--)
                cout<< v[i].at(j);
            cout<<endl;
        }
    }else if(e==3){
        for(int i=v.size()-1;i>=0;i--)
            cout<< v[i]<<endl;
    }

    
    return 0;
}
