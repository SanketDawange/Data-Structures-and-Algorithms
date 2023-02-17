#include<iostream>
using namespace std;

int isSafe(int act, int bal, int t) {
	if(act>t || bal==0){
		return 0;
	}
	return 1;
}

void display(int arr[], int check[], int n) {
	for(int i=0; i<n; i++) {
		if(check[i]!=-1) {
			cout << arr[i] << " ";
		}
	} cout << endl;
}

void solve(int arr[], int check[], int i, int act, int bal, int t,int n){
	//base case
	if(act==t) {
		display(arr,check,n);
	}
	else{
			if(isSafe(act,bal,t)==1) {
				check[i]=1;
				solve(arr,check, i+1,act+arr[i], bal-arr[i], t,n);
				check[i]=-1; 
				solve(arr,check,i+1,act,bal-arr[i],t,n);
           }
	}
}

int main() {
	int n,t;
	cin >> n >> t;
	int arr[n];
	int act = 0;
	int bal = 0;
	int check[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
		bal += arr[i]; 
		check[i]=-1;
	}
	solve(arr,check,0,act,bal,t,n);
}
