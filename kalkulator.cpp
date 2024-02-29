#include <iostream>
using namespace std;
int a, b, wynik;
char znak;
int main()
{
while(cin>>znak>>a>>b){
    switch(znak){
        case '+':
          wynik=a+b;
          break;

        case '-':
        wynik=a-b;
        break;

        case '*':
        wynik=a*b;
        break;

        case '/':
        wynik=a/b;
        break;

        case '%':
        wynik=a%b;
        break;
    }
    cout<<wynik<<endl;
}
    return 0;
}
