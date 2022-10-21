#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,r=0,b=0,count=0;
    cin>>test;
    char a[8][8]={'.'};
    while(test--){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<8;i++){
            r=0;
            for(int j=0;j<8;j++){
                if(a[i][j]=='R'){
                    r++;
                }
            }
            if(r==8){
                cout<<"R"<<endl;
                count++;
                cout<<"ak"<<endl;
                break;
            }
        }
        cout<<count<<endl;
        if(count==0){
            for(int i=0;i<8;i++){
                b=0;
            for(int j=0;j<8;j++){
                if(a[j][i]=='B'){
                    b++;
                }
            }
            if(b==8){
                cout<<"B"<<endl;
                break;
            }
            }
        }
    }
   return 0;
}