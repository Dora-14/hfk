#include <iostream>

using namespace std;

int main()
{
    int n, a[100], b[100], i, S1=0, S2=0;
    cout << "n=";
    cin >> n;
    for(i=1; i<=n; i++){
   cout <<"a[" << i << "]=";
    cin >> a[i];
    if(a[i]%2==0)
        S1=S1+a[i];
    }
    for(i=1; i<=n; i++){
    cout <<"b[" << i << "]=";
    cin >> b[i];
    if(b[i]%2!=0 && S1>b[i])
        S2=S2+b[i];
    }
    cout << S2 << endl;

    return 0;
}
