#include <stdio.h>
int binsearch(int x, int v[],int p);
int mian(){

    return 0;
}

int binsearch(int x,int v[],int p){
    int high,low,mid;
    low = 0;
    high = p - 1;
    mid = (low + high )/2;
    while (v[mid] != x & low <= high ){
        if (v[mid] > x){
            low = mid +1;
        }else{
             mid = (low + high )/2;
        }
    }
    if(v[mid] == x){
        return mid;
    }else{
        return -1;
    }
}