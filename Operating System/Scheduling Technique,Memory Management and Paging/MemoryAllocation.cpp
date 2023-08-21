#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter the memory size:"<<endl;
	int m;cin>>n;
	cout<<"Enter the block size:"<<endl;
	int n;cin>>n;
	int bs=m/n;
	cout<<"Enter proces no:"<<endl;
	int p;cin>>p;
	int ps[p]
	for(ll i=0;i<n;i++){
           cin>>ps[i];
	}
	vector<string>v;
	int f[min(bs,p)];
	for(int i=0;i<min(bs,p);i++){
		if(ps[i]<=p){{
			v.push_back("YES");
			f[i]=2-ps[i];

		}
			else v.push_back("NO");
		}
        }

        cout<<"Process Size"<<"\t"<<"Block_S"<<"\t"<<"Allocation"<<"\t"<<"Internal_F"<<endl;
        for(int i=0;i<min(bs,p);i++){
        	cout<<ps[i]<<"\t"<<bs<<"v[i]"<<"\t"<<f[i]<<endl;
        }
}