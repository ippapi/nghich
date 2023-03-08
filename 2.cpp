
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100


int is_a_prime(int n){
    if(n == 2 || n == 3) return n;
    
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
        
    return n;
}

void NhapmangSNT(int *a, int &n){
    cin >> n;
    
    int t = 0, i;
    
    while(t < n){
        
        if(t == 0) 
            i = 2;
        else
            i = a[t - 1] + 1;

        for(; ; i++)
            if(is_a_prime(i)){
                a[t] = i;
                break;
            }
    
            
        t++;
    }
}

void Xuatmang(int a[], int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int SoPhanTuChuaY(int a[], int n, int y){
    int count = 0;
    
    for(int i = 0; i < n; i++){
        while(a[i] > 0){
            if(a[i] % 10 == y){
                a[i] /= 10;
                count ++;
                break;
            }else{
                a[i] /= 10;
            }
        }
    }
    
    return count;
}


int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout<<"Mang a gom " <<n<<" so nguyen to tang dan, bao gom: \n";
	Xuatmang(a,n);
	cout<<"\nSo phan tu chua chu so "<<y<<": "<<SoPhanTuChuaY(a, n, y);

	return 0;
}
