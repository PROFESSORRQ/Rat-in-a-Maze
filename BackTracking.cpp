#include <bits/stdc++.h>
#include <algorithm>
#include <hashtable.h>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
#define Nmax INT_MAX;
#define Nmin INT_MIN;
bool isSafe(int** arr,int x,int y, int n,int** solarr){
    if(arr[x][y]==1){
        return true;
    }
    return false;
}
bool backtracking(int** arr,int x,int y,int n,int** solarr){
if(x==n-1&&y==n-1){
solarr[x][y]=1;
return true;
}
if(isSafe(arr,x,y,n,solarr)){
    solarr[x][y]=1;
    if(backtracking(arr,x+1,y,n,solarr))
    return true;
    if(backtracking(arr,x,y+1,n,solarr))
    return true;
    solarr[x][y]=0;
    return false;
}
return false;
}
int main(){
    int n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int** solarr=new int*[n];
     for(int i=0;i<n;i++){
        solarr[i]=new int[n];
    }
    backtracking(arr,0,0,n,solarr);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cout<<solarr[i][j]<<" ";
    cout<<endl;
    return 0;
}

