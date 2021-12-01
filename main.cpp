#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int x,r,sum=0;
    int pom;
    int cif;
    cout<<"Unesi jedan broj : ";
    cin>>x;
    pom=x;
    while (pom>0)
    {
        sum=sum+1;
        pom=pom/10;
    }
    pom=x;
    while (pom>0)
    {
        cif=pom%10;
        r=r+pow(cif,sum);
        pom=pom/10;
    }
    if (r==x)
    {
        cout<<"Broj je armstrongov.\n";
    } else
    {
       cout<<"Broj nije armstrongov.\n";
    }
    system("pause");
    return EXIT_SUCCESS;
}