void pyramid(int n) {
	int j = n-1;
	for (int i = 1; i <= n; i++) {
		printf("%*s", j--, "");
		for (int k = i; k > 0; k--) {
			printf("%d ", i);
		}
		printf("\n");
	}
}

//https://pintia.cn/problem-sets/12/problems/300
