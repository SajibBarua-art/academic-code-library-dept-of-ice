#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int bt[n],index[n],tat[n],wt[n];
	for(int i=0;i<n;i++){
		index[i]=i;
		cin>>bt[i];
	}
	for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(bt[i]>bt[j]){
    			int temp=bt[i];
    			bt[i]=bt[j];
    			bt[j]=temp;


               temp=index[i];
               index[i]=index[j];
               index[j]=temp;
    		}
    	}
    }
    // for(int i=0;i<n;i++){
    // 		cout<<bt[i]<<" ";
    // 	}
    	// cout<<endl;
    	double stat=bt[0],swt=0;
    	tat[0]=bt[0];
    	for(int i=1;i<n;i++){
           tat[i]=bt[i]+tat[i-1];
           stat+=tat[i];
    	}
    	for(int i=0;i<n;i++){
           wt[i]=tat[i]-bt[i];
           swt+=wt[i];
    	}
     cout<<"Shortest Job First CPU Scheduling Algorithm."<<endl;
     cout<<"Process ID"<<"\t"<<" Burst Time"<<"\t"<<"Turn Around Time"<<"\t"<<"Waiting Time"<<endl;
     for(int i=0;i<n;i++){
        cout<<"P"<<index[i]<<"\t\t\t\t"<<bt[i]<<"\t\t\t\t"<<tat[i]<<"\t\t\t\t"<<wt[i]<<endl;
     }
     cout<<"Average Turn Around Time:"<<stat/n<<endl;
     cout<<"Average Waiting Time:"<<swt/n<<endl;
   }