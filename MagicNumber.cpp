#include <iostream>
#include <vector>
#include <cmath>

template <typename T>
bool isPrime(T x){
    if(x < 2)
        return false;
    else if(x == 2)
        return true;
    else{
        long double y = sqrt(x);
        for(int i = 2 ; i <= (int)y ; i++){
            if((int)x % i == 0)
                return false;
        }
        return true;
    }
}

int main(){
    long double n , m;
    std :: cin >> n;
    while(n--){
        std :: cin >> m;
        long double x = sqrt(m);
        if(x != (int)x)
            std :: cout << "NO.\n";
        else
            std :: cout << (isPrime(x) == false ? "NO.\n" : "YES.\n");
    }
}