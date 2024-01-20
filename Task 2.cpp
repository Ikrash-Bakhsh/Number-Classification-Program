#include <iostream>
using namespace std;

void positive(int a);
void negative(int a);
void zero(int a);

int main() {
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    positive(a);
    zero(a);
    negative(a);
    return 0;
}

void positive(int a){
    if (a>0)
    {
        cout<<"Positive!";
    }
    
}
void negative(int a){
    if (a<0)
    {
        cout<<"Negative!";
    }
    
}
void zero(int a){
    if (a==0)
    {
        cout<<"Zero!";
    }
    
}
