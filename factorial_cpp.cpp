#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0,fact=1,num=0;
	cin>>t;
	while(t--){
	    cin>>num;
	    if(num==0||num==1){
	      cout<<1<<endl;
	    }
	    else if(num>1){
	         for(int i=1;i<=num;i++){
	               fact *= i;
	           }
	          cout<<fact<<endl;
	          fact = 1;
	    }
	}
	return 0;
}
