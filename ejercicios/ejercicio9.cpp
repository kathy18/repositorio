#include <iostream>
using namespace std;

void insertionsort(int a[],int t){
	int i,valor,temp;
	for(i=1;i<t;i++){
		valor=i;
		while(valor>0 && a[valor]< a[valor-1]){
			temp=a[valor];
			a[valor]=a[valor-1];
			a[valor-1]=temp;
			valor--;
		}
	}

	int j;
	for(j=0;j<t;j++){
		cout<<a[j]<<" ";
	}
}


int main(){
	int a[10]={1,2,4,3,50,8,7,14,23,9};
	insertionsort(a,10);

}
