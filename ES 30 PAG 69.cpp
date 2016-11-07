#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Dammi un numero n (0<= n < 1000):"<<endl;
    cin>>n;
    int i=1;
    if(n==0)
    {
        cout<<"la prima cifra da destra e' 0"<<endl;
    }
    else{
    while( i<= 3 && n!=0){
       cout <<"la "<<i<<" esima cifra da destra e'"<<n%10<<endl;
       n=n/10;
       i++;
    }
    }
return 0;
}
