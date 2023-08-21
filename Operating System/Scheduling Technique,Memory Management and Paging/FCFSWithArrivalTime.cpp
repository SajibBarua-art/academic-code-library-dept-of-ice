#include<bits/stdc++.h>
using namespace std;
int main(){
	//cout<<"Enter the number of process:"<<endl;
	int n;cin>>n;
	double stat=0,swt=0;
	int at[n],bt[n],ct[n],tat[n],wt[n];

	for(int i=0;i<n;i++){
		cin>>at[i];
	}
	for(int i=0;i<n;i++){
		cin>>bt[i];
	}
	ct[0]=bt[0];
	for(int i=1;i<n;i++){
         if(at[i]>ct[i-1]){
         	ct[i]=at[i]-ct[i-1]+bt[i]+ct[i-1];
         }
         else ct[i]=bt[i]+ct[i-1];
     }
     for(int i=0;i<n;i++){
     	cout<<ct[i]<<" ";
     }
     cout<<endl;
     for(int i=0;i<n;i++){
     	tat[i]=ct[i]-at[i];
     	stat+=tat[i];
     	wt[i]=tat[i]-bt[i];
     	swt+=wt[i];
     }
     for(int i=0;i<n;i++){
     	cout<<tat[i]<<" ";
     }
     cout<<endl;
     for(int i=0;i<n;i++){
     	cout<<wt[i]<<" ";
     }
     cout<<endl;
     cout<<"Average Turn Around Time:"<<stat/n<<endl;
     cout<<"Average Waiting Time:"<<swt/n<<endl;

     
}