#include<iostream>
using namespace std;
int m,n;
void waveprint(int arr[][m],int n,int m){
	 for (int i=0;i<m;i++){
		  if(m%2==0){
			  for(int j=0;j<n;j++){
				   cout<<arr[j][i]<<",";
			  }
		  }else 
		  for (int k=n;k>=0;k--){
			   cout<<arr[k][i]<<",";

		  }	 

		  }
		  cout<<"END";
}
int main() {
	 cin>>n>>m;
	int arr[n][m];
	for(int i = 0 ; i <n;i++ ){
		 for(int p=0;p<m;p++){
			 cin>>arr[i][p];
		 }
	}
waveprint(n,m,arr);
	return 0;
}