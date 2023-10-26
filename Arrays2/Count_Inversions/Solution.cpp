#include <bits/stdc++.h> 

long long getInversions(long long *arr, int n){
    int last=n,count=0;

    for(int i=last;i>=0;i--,last--){
        for(int j=0;j<last-1;j++){
            if(arr[j]>arr[j+1]){
                count++;
                swap(arr[j],arr[j+1]);
            }
        }
    }

    return count;

}
