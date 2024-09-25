#include<bits/stdc++.h>
using namespace std;




int fun(int a[],int n,int k){
    int i=0;
    int j=0;
    int sum=0;
    int res=0;
    while(j<n){
        sum+=a[j];
       

        while(i<=j &&sum>k){
            sum-=a[i];
            i++;
        }
         if(sum<=k){
            res=max(res,j-i+1);
        }



        j++;
    }
}




int main(){
    system("cls");
    
    int n ;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int res=fun(a,n,k);
    cout<<res<<endl;
    }




    