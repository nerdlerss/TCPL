#include <stdio.h>
int binserch(int x,int v[],int p);
int main(){
    return 0;
}

int binserch(int x,int v[],int p){
    int high,low,mid;
    low = 0;
    high = p -1;
    while (low >= high){
        mid = (high + low)/2;
        if (x > v[mid]){
            low = mid+1;
        }else if(x < v[mid]){
            high = mid +1;
        }else{
            return mid;
        }
    }
    return -1;
}