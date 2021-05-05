#include <iostream>

using namespace std;

int main()
{
    int h=0,i=1;
    do{
            i=1;
    while( i <= 10 ){

    cout << "Hello world!" <<i<<endl;
            i++;
    }
    cout<<"desea seguir en su programa?"<<endl;
    cin>>h;
    }while(h==0);

    return 0;
}
