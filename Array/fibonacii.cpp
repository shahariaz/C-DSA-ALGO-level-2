#include<iostream>

int fibo(int n){
    if(n==0) return 0;
     else if(n==1) return 1;
     else{
        int i,last=0,prev=1,current=1;
        
        for(i=0;i<n;i++){
            current = last + prev;
            last = prev;
           prev= current;

            std::cout << current << std::endl;
        }
     }
     return 0;
} 

int main(){

    int n;
    std::cin>>n;
    fibo(n);
    std::cout << "Hello World" << std::endl;
}                 