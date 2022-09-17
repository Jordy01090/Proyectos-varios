#include <stdio.h>
int main (){
	int n, f, i;
	printf ("ingrese el numero");
	scanf ("%i",&n);
	f=1;
	for (i=1;i<=n;i++){
		f = f * i;
	}
	printf ("%i", &f);
	return 0;
}
