#include <stdio.h> 
int main() {
	int a = 0;
	if (a < a--) {
		a = 1;
	}
	printf("%d\n", a);
	return 0;
}
