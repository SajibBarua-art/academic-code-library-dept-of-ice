#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int up[n],priority[n],bt[n],index[n],tat[n],wt[n];
    //priority input
    for(int i=0;i<n;i++){
      cin>>priority[i];
      up[i]=priority[i];
    }
    //burst time input
	for(int i=0;i<n;i++){
		index[i]=i;
		cin>>bt[i];
	}
	for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(priority[i]>priority[j]){

    			int temp=priority[i];
    			priority[i]=priority[j];
    			priority[j]=temp;


            temp=index[i];
            index[i]=index[j];
            index[j]=temp;
            
            temp=bt[i];
            bt[i]=bt[j];
            bt[j]=temp;

    		}
    	}
    }
    // for(int i=0;i<n;i++){
    // 		cout<<index[i]<<" ";
    // 	}
    // 	cout<<endl;

    // for(int i=0;i<n;i++){
    //      cout<<priority[i]<<" ";
    //   }
    //   cout<<endl;

    //   for(int i=0;i<n;i++){
    //      cout<<bt[i]<<" ";
    //   }
    //   cout<<endl;

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
     cout<<"Fixed Priority Scheduling Algorithm."<<endl;
     cout<<"Priority"<<"\t"<<" Burst Time"<<"\t"<<"Turn Around Time"<<"\t"<<"Waiting Time"<<endl;
     for(int i=0;i<n;i++){
        cout<<priority[i]<<"\t\t\t\t"<<bt[i]<<"\t\t\t\t"<<tat[i]<<"\t\t\t\t"<<wt[i]<<endl;
     }
     cout<<"Average Turn Around Time:"<<stat/n<<endl;
     cout<<"Average Waiting Time:"<<swt/n<<endl;
   }