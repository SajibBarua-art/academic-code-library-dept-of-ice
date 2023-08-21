#include<bits/stdc++.h>
using namespace std;
int main(){
	//cout<<"Enter the number of process:"<<endl;
	int n;cin>>n;
	double stat=0,swt=0;
	int bt[n],tat[n],wt[n];

	for(int i=0;i<n;i++){
		cin>>bt[i];
	}
	tat[0]=bt[0];
    stat+=tat[0];
	for(int i=1;i<n;i++){
         tat[i]=tat[i-1]+bt[i];
         stat+=tat[i];
     }
    
     for(int i=0;i<n;i++){
     	wt[i]=tat[i]-bt[i];
     	swt+=wt[i];
     }
     // for(int i=0;i<n;i++){
     // 	cout<<tat[i]<<" ";
     // }
     // cout<<endl;
     // for(int i=0;i<n;i++){
     // 	cout<<wt[i]<<" ";
     // }
     // cout<<endl;
     cout<<"First Come First Serve CPU Scheduling Algorithm."<<endl;
     cout<<"Process ID"<<"\t"<<" Burst Time"<<"\t"<<"Turn Around Time"<<"\t"<<"Waiting Time"<<endl;
     for(int i=0;i<n;i++){
        cout<<"P"<<i<<"\t\t\t\t"<<bt[i]<<"\t\t\t\t"<<tat[i]<<"\t\t\t\t"<<wt[i]<<endl;
     }
     cout<<"Average Turn Around Time:"<<stat/n<<endl;
     cout<<"Average Waiting Time:"<<swt/n<<endl;


     
}