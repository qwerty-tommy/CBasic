int MyStrlen(char* str);
void MyStrReverse(char* str);
void MyStrCat(char* rsc, char* dst);
void MyNoSpace(char* str);
char* MyStrcpy(char* ap, char* bp);
void MyStrncpy(char* ap, char* bp, int n);
int MyStrcmp(char* a, char* b);
int MyStricmp(char* a, char* b);
int MySearch(char* str, char* target);
int MyCountWord(char* str, char* target);
void MyConvertWord(char* str, char* target, char* change);
void SwapIntPtr(int* a, int* b);

int MyStrlen(char* str) {
	char* p = str;
	int cnt=0;

	while (*p++ != '\0') cnt++;

	return cnt;
}

void MyStrReverse(char* str) {
	int start = 0;
	int end = strlen(str) - 1;
	char temp;

	while (start < end) {
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
}

void MyStrCat(char* rsc, char* dst) {
	
}

void MyNoSpace(char* str) {
	char* p1 = str;
	char* p2 = str;
	
	while (*p1 != '\0') {
		if (*p1 == 32) *p1 = *p2++;
		p1++;
	}
}

char* MyStrcpy(char* ap, char* bp) {
	int size = MyStrlen(bp);

	for (int i = 0; i < size+1; i++) *(ap+i) = *(bp+i);

	return ap;
}

void MyStrncpy(char* ap, char* bp, int n) {
	for (int i = 0; i < n; i++) *(ap+i) = *(bp+i);
	*(ap + n) = '\0';
}

int MyStrcmp(char* a, char* b) {
	int size = (MyStrlen(a) > MyStrlen(b)) ? MyStrlen(b) : MyStrlen(a);
	
	for (int i = 0; i < size; i++)
	{
		if (*a > *b) return 1;
		else if (*a < *b) return -1;
	}

	if (MyStrlen(a) == MyStrlen(b)) {
		return 0;
	}

	return (MyStrlen(a) > MyStrlen(b)) ? 1 : -1;
}

int MyStricmp(char* a, char* b) {
	int dif = (MyStrlen(a) - MyStrlen(b));
	int size = (dif > 0) ? MyStrlen(b) : MyStrlen(a);
	int tmpa;
	int tmpb;

	for (int i = 0; i < size; i++)
	{
		tmpa = (*(a + i) >= 65 && *(a + i) <= 90) ? *(a + i) + 32 : *(a + i);
		tmpb = (*(b + i) >= 65 && *(b + i) <= 90) ? *(b + i) + 32 : *(b + i);

		if (tmpa > tmpb) return 1;
		else if(tmpa < tmpb) return -1;
	}

	if (dif == 0) {
		return 0;
	}

	return (dif > 0) ? 1 : -1;
}

int MyStrincmp(char* a, char* b, int size) {
	char tmpa;
	char tmpb;

	for (int i = 0; i < size; i++)
	{
		tmpa = (*(a + i) >= 65 && *(a + i) <= 90) ? *(a + i) + 32 : *(a + i);
		tmpb = (*(b + i) >= 65 && *(b + i) <= 90) ? *(b + i) + 32 : *(b + i);


		if (tmpa > tmpb) return 1;
		else if (tmpa < tmpb) return -1;
	}

	return 0;
}

int MySearch(char* str, char* target) {
	char slicer[100];
	int idx = 0;

	while (1) {
		if (*str == ' ' || *str == '\0')
		{
			slicer[idx] = NULL;
			idx = 0;
			if (strcmp(slicer, target) == 0) return 1;
			else if (*str == '\0') return 0;
			str++;
		}
		slicer[idx++] = *str++;
	}
	return 1;
}

int MyCountWord(char* str, char* target) {
	char slicer[100];
	int idx = 0;
	int cnt = 0;

	while (1) {
		if (*str == ' ' || *str == '\0')
		{
			slicer[idx] = NULL;
			idx = 0;
			if (strcmp(slicer, target) == 0) cnt++;
			else if (*str == '\0') return cnt;
			str++;
		}
		slicer[idx++] = *str++;
	}
	return 1;
}

void MyConvertWord(char* str, char* target, char* change) {
	char slicer[100];
	int idx = 0;

	while (1) {
		if (*str == ' ' || *str == '\0')
		{
			slicer[idx] = NULL;
			idx = 0;
			if (strcmp(slicer, target) == 0) {
				for (int i = 0; i < MyStrlen(change); i++)
				{
					*(str - MyStrlen(change) + i) = *(change + i);
				}
			}
			else if (*str == '\0') return 0;
			str++;
		}
		slicer[idx++] = *str++;
	}
	return 1;
}

void SwapIntPtr(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}