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
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d){
	int s[4]={};
	for (int i = 0; i < 4; i++)
	{
		while (1)
		{
			int r = rand()%4;
			int n;
			switch (r)
			{
			case 0:
				n=a;
				break;
			case 1:
				n=b;
				break;
			case 2:
				n=c;
				break;
			case 3:
				n=d;
				break;
			default:
				break;
			}
			if (n!=s[0]&&n!=s[1]&&n!=s[2]&&n!=s[3])
			{
				s[i]=n;
				break;
			}
		}
	}
	a=s[0];b=s[1];c=s[2];d=s[3];
}