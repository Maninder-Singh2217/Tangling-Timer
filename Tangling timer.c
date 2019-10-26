

#include <iostream>
#include <math.h>

int sumgp(int n) { //sumgp(1)=3,2=9
	int a = 3, r = 2;
	int sum=0;
	for(int i = 0; i < n; i++)
	{
		sum = sum + a;
		a = a * r;
	}
	return sum;	
}

int elemN(int n) { //elemN(1)=3,2=6
	int a = 3, r = 2;
	int tn = a * (int)(pow(r, n - 1));
	 return tn;
}
int main()
{
	int t, time,tn,diff;
	int sum = sumgp(1);
	scanf("%d", &t);
	int n = 1;
	//n++; printf("%d\n", sum); ====3
	while (t > sum) {
		n++;//printf("%d\n", n);
		sum = sumgp(n);
	}
	

	if (n == 1 )tn = 3;
		else
		tn = elemN(n);
	time = tn - 2;// tn = elemN(n) , time = tn - 2; time = the time at which the max cycle starts in that cycle
	diff = abs(t - time);
	printf("%d", tn-diff);
	

}

