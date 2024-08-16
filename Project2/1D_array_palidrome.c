//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable:4996)
//
//void inputString(char* cp);
//int checkPalindrome(char* cp);
//
//int main()
//{
//	char str[80];
//	int res;
//
//	inputString(str);
//	while (strcmp(str, "end") != 0) {
//		res = checkPalindrome(str);
//		if (res == 1) {
//			printf("%s는 : 회문입니다.\n", str);
//		}
//		else {
//			printf("%s는 : 회문이아닙니다.\n", str);
//		}
//		inputString(str);
//	}
//
//	
//	return 0;
//}
//
//void inputString(char* cp) {
//	printf("# 단어 입력: ");
//	scanf("%s", cp);
//
//	return;
//}
//
//int checkPalindrome(char* cp) {
//
//	int len = strlen(cp);
//	int check = 1;
//	for (int i = 0; i < len/2; i++) {
//		if (cp[i] != cp[len - i - 1]) 
//			check = 0;
//			break;
//		
//	}
//	return check;
//
//}
//
