void StringCount(char s[]) {
	int count[4] = { 0,0,0,0 };
	for (int i = 0; s[i] != '\0'; i++) {
		if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) count[0]++;
		else if (s[i] == ' ' || s[i] == '\n') count[1]++;
		else if ('0' <= s[i] && s[i] <= '9') count[2]++;
		else count[3]++;
	}
	printf("letter = %d, ", count[0]);
	printf("blank = %d, ", count[1]);
	printf("digit = %d, ", count[2]);
	printf("other = %d", count[3]);
}
//https://pintia.cn/problem-sets/12/problems/308
