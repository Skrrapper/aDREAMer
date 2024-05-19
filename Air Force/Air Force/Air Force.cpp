//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <Windows.h>
//
//    int main()
//{
//    int i, j;
//    int x = 5;
//    int y = 10;
//    char input;
//    int isFire = 0;
//
//    int ny = 5;
//    int isKilled = 0;
//
//    while (1)
//    {
//        system("cls");
//
//        if (!isKilled)
//        {
//            for (j = 0; j < ny; j++)
//                printf(" ");
//            printf(" +\n");
//        }
//
//        
//        if (isFire == 0)
//        {
//            for (i = 0; i < x; i++)
//                printf("\n");
//        }
//        else
//        {
//            for (i = 0; i < x; i++)
//            {
//                for (j = 0; j < y; j++)
//                    printf(" ");
//                    printf("|\n");
//            }
//            if (y + 2 == ny)
//                isKilled = 1;
//            isFire = 0;
//        }
//
//      
//        for (j = 0; j < y; j++)
//            printf(" ");
//
//        printf("  *\n");
//
//        for (j = 0; j < y; j++)
//            printf(" ");
//        
//        printf("*****\n");
//
//        for (j = 0; j < y; j++)
//           printf(" ");
//
//        printf(" * * \n");
//
//        if (_kbhit())
//        {
//            input = _getch();
//            if (input == 'a')
//                y--;
//            if (input == 'd')
//                y++;
//            if (input == 'w')
//                x--;
//            if (input == 's')
//                x++;
//            if (input == ' ')
//                isFire = 1;
//        }
//    }
//
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

int main()
{
    int i, j;
    int x = 5;
    int y = 10;
    char input;
    int isFire = 0;
    int ny = 5;
    int isKilled = 0;

    while (1)
    {
        system("cls");

        // 打印障碍物
        if (!isKilled)
        {
            for (j = 0; j < ny; j++)
                printf(" ");
            printf(" +\n");
        }

        // 打印空行
        for (i = 0; i < x; i++)
        {
            if (isFire && i == x - 1)
            {
                for (j = 0; j < y; j++)
                    printf(" ");
                printf("|\n");
            }
            else
            {
                printf("\n");
            }
        }

        // 打印飞机
        for (j = 0; j < y; j++)
            printf(" ");
        printf("  *\n");

        for (j = 0; j < y; j++)
            printf(" ");
        printf("*****\n");

        for (j = 0; j < y; j++)
            printf(" ");
        printf(" * * \n");

        // 检查激光是否击中障碍物
        if (isFire)
        {
            if (x == 0 && y + 2 == ny)
            {
                isKilled = 1;
            }
            isFire = 0;  // 重置激光状态
        }

        // 处理键盘输入
        if (_kbhit())
        {
            input = _getch();
            if (input == 'a' && y > 0)
                y--;
            if (input == 'd')
                y++;
            if (input == 'w' && x > 0)
                x--;
            if (input == 's')
                x++;
            if (input == ' ')
                isFire = 1;
        }

        Sleep(100);  // 添加适当的延时
    }

    return 0;
}
