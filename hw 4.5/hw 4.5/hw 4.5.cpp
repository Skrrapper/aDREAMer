#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct stu
//{
//	int age;
//	char name[10];
//	int nun;
//};
//
//void Fun(struct  stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9,"liu",8899},
//							  {8,"zhang",8900},
//							  {7,"wang",8901} };
//	
//	
//	Fun(students + 1);
//	return 0;
//}

//ģ��ʵ��atoi����

#include <stdlib.h>
int myAtoi(char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // ����ո�
    while (str[i] == ' ') {
        i++;
    }

    // ����������
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    else if (str[i] == '+') {
        i++;
    }

    // ת������
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

int main() {
    char str[] = "123456";
    int num = myAtoi(str);
    printf("Converted number: %d\n", num);

    return 0;
}
