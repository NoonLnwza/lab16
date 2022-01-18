#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int w[4]={a,b,c,d};
    int M[4];
    int n=0,o=0,p=0,q=0;

    n= rand()%4;
    M[0]=w[n];
    w[n]=0;
    do{
        o= rand()%4;
    }while(w[o]==0);
    M[1]=w[o];
    w[o]=0;
    do{
        p= rand()%4;
    }while(w[p]==0);
    M[2]=w[p];
    w[p]=0;
    do{
        q= rand()%4;
    }while(w[q]==0);
    M[3]=w[q];

    a=M[0],b=M[1],c=M[2],d=M[3];
}