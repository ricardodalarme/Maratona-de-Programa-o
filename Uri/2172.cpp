// https://www.urionlinejudge.com.br/judge/pt/problems/view/2172

#include <iostream>
 
using namespace std;
 
int main() {
 	int a,b;
	do
	{
		scanf("%d%d", &a,&b);
		if (a != 0 && b != 0)
			printf("%d\n", a*b);
	} while (a != 0 && b != 0);
    return 0;
}