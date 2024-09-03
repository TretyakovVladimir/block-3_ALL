int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}
int sqr(int a, int b) {
	return a * b;
}

int d(int a, int b) {
	return a / b;
}

int degree(int a, int b) {
	int temp = 1;
	for (int i = 0; i < b; i++) {
		temp = temp * a;
	}
	return temp;
}