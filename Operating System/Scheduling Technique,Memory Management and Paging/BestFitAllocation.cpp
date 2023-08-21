#include <bits/stdc++.h>
using namespace std;
int main(){
	int pn,bn;
	cin>>pn>>bn;
	int p[pn],b[bn];
	int index[bn];
    bool ans=false;

	int ai[bn];
	int ab[bn];

	//cout<<"Enter the processes:"<<endl;
	for(int i=0;i<pn;i++){
		cin>>p[i];
	}

	//cout<<"Enter the blocks size:"<<endl;
	for(int i=0;i<bn;i++){
		index[i]=i;
		cin>>b[i];
	}
    
	for(int i=0;i<pn;i++){
		for(int j=i+1;j<bn;j++){
             if(b[i]>b[j]){
             	int temp=b[j];
             	b[j]=b[i];
             	b[i]=temp;


             	temp=index[j];
             	index[j]=index[i];
             	index[i]=temp;

             }
		}
	}

	cout<<"P-No"<<"\t\t"<<"P-Size"<<"\t\t"<<"B-No"<<"\t\t"<<"B-Size"<<endl;

	for(int i=0;i<pn;i++){
		for(int j=0;j<bn;j++){
			if(b[j]>=p[i]){
            cout<<i+1<<"\t\t\t"<<p[i]<<"\t\t\t"<<index[j]+1<<"\t\t\t"<<b[j]<<endl;
            b[j]=b[j]-p[i];
            ans=true;
            break;
			}
		}
		if(ans==false) {
			cout<<i+1<<"\t\t\t"<<p[i]<<"\t\t\t"<<"NA"<<"\t\t\t"<<"NA"<<endl;
	}

}
}