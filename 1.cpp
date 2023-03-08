#include <iostream>
#include <math.h>

using namespace std;

int is_a_prime(int n){
    if(n == 2 || n == 3) return n;
    
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
        
    return n;
}

int main(){
    cout << is_a_prime(6);

    return 0;
}
