
#include <iostream>

using namespace std;
int alprog(int n){
  int k=0;
  while(n!=0){
    n=n/10;
    k++;
  }
  return k;
}
int main()
{
    int a[100], n, i, k, s=0;
    cout << "n=";
    cin >> n;
    cout<< "k=";
    cin >> k;
    for(i=1; i<=n; i++){
    cout << "a[" << i << "]=";
    cin >> a[i];
    }
    for(i=1; i<=n; i++){
        if(alprog(a[i])>k)
            s=s+1;
    }
    cout << s;
    return 0;
}
