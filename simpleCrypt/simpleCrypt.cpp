#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	   int p,u,t,i,n,o,b,a,m,c;
	   int cryptValues[] = {0,1,2,3,4,5,6,7,8,9};
	   sort(cryptValues,cryptValues+10);
	   bool keyFound = false;
	   int cycleCounter = 0;
	   

	   while(keyFound != true)
	   {   
			 next_permutation(cryptValues,cryptValues+10);
			 p = cryptValues[0];
			 u = cryptValues[1];
			 t = cryptValues[2];
			 i = cryptValues[3];
			 n = cryptValues[4];
			 o = cryptValues[5];
			 b = cryptValues[6];
			 a = cryptValues[7];
			 m = cryptValues[8];
			 c = cryptValues[9];

			 if(((p*1000)+(a*100)+(c*10)+t)-((c*1000)+(c*100)+(c*10)+p)==((o*1000)+(b*100)+(u*10)+p)&& ((p*10000)+(u*1000)+(t*100)+(i*10)+n)-((o*10000)+(b*1000)+(a*100)+(m*10)+a)==((c*10000)+(m*1000)+(p*100)+(t*10)+c))
			 {
				    for(int counterI=0;counterI<10;counterI++)
						  cout << cryptValues[counterI];
				    cout << "                                YAY!";
			 }
			 else
			 {
				    cycleCounter++;
				    if(cycleCounter==3628800)
				    {
						keyFound = true;
						cout << "Nope";
				    }
			 }
		}
return 0;
}
