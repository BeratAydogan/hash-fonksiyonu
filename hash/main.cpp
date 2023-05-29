#include <iostream>
using namespace std;

int hash(int value, int N){
	
	return value%N;
}

int main(int argc, char** argv) {
	//18 19 20 29 30 23 40
	int dizi[10]={0};
	int num;
	
	for(int i=0; i<10; i++){
		
		cout<<"Sayi dizisini giriniz";
		cin>>num;
		
		int index=hash(num,10);
		
		for(int h=0;h<10;h++){
			
			int hashIndex=(index+h*h)%10;
			if(dizi[hashIndex]==0){
				
				dizi[hashIndex]=num;
				break;
			}else{
				
				cout<<"Catisma var.";
			}
		}
		
		for(int j=0; j<10; j++){
			
			cout<<dizi[j]<<"-";
		}
		
		
	}


	return 0;
}
