#include<iostream>
 using namespace std;
 int main (){
int w;
 string a;
  cin >> w;
   for (int  i = 0; i < w; i++)
   {
       
       cin >>a;
if ( a.length()>10)
{
    

cout<<a[0]<<a.length()-2<<a.back()<<endl;
}
 else {
      cout<<a<<endl;

 }
   }
return 0;


}





   
   


 