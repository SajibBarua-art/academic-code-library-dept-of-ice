#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,memory,block,nob,EF,IF=0;
	cin>>n>>memory>>block;
	int process[n];
    nob=memory/block;
    EF=memory-nob*block;
    for(int i=0;i<n;i++){
    	cin>>process[i];
    }
    
    cout<<"Fixed Partitioning Memory Allocation"<<endl;
    cout<<"Process"<<"\t\t\t"<<"P-Size"<<"\t\t\t"<<"Allocated"<<"\t\t\t"<<"I-Fragmentation"<<endl;
    for(int i=0;i<n;i++){
    	if(process[i]<=block)
    	{
    		IF+=200-process[i];
    		cout<<i+1<<"\t\t\t\t"<<process[i]<<"\t\t\t\t"<<"Allocated"<<"\t\t\t\t"<<200-process[i]<<endl;
    	}
    
        else cout<<i+1<<"\t\t\t\t"<<process[i]<<"\t\t\t\t"<<"Not Allocated"<<"\t\t\t"<<"..."<<endl;
    }

    cout<<"Total Internal Fragmentation:"<<IF<<endl;
    cout<<"Total External Fragmentation:"<<EF<<endl;

    }