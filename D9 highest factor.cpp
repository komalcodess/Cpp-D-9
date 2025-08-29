#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int f=1; //store highest factor
    for( int i=1; i<n; i++){
        if(n%i==0) f=i;
    }

    cout << f << endl;
    return 0;
}
