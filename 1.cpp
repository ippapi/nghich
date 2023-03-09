
#include <iostream>
using namespace std;

void inputArray(int *&a, int &n){

    cin >> n;

    a = new int[1000000];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

}

void findElements(int *a, int n, int &m){
    cin >> m;
    
    int z, t;

    for(int i = 0; i < m; i++){
        t = 0;

        cin >> z;

        a[n] = z;
        
        while(a[t] != z) t++;
        
        if(t == n) cout << -1 << endl;
        else cout << t << endl;
    }
}


int main()
{
    int n,m;
    int *a=NULL;
    inputArray(a,n);
    findElements(a,n,m);

    return 0;
}
