#include<iostream>
using namespace std;

int getindex(int *a, int l, int r){
	int stad = a[l];
	while(l < r){
		
		while(l < r && stad > a[l]){
			l++;
		}
		
		while(l < r && stad < a[r]){
			r--;
		}
		int temp = a[l];
		a[l] = a[r];
		a[r] = temp;	
	}
	a[l] = stad;
	return l;
}

void qsort(int *a, int l, int r){
	if(l < r){
             int index = getindex(a,l,r);
	     qsort(a,l,index-1);
	     qsort(a,index+1,r);	
	}
}

int main(){
	int a[10];
	for(int i = 0; i < 10; i++)
		cin>>a[i];
	qsort(a,0,9);
	for(int i = 0; i < 10; i++)
		cout<<a[i]<<endl;
	return 0;
}
