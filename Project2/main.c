#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int level = 1;      // 等级
    int favor = 0;      // 好感度

    printf("--- 伴侣系统启动 ---\n");
    printf("当前初始等级: %d, 好感度: %d\n", level, favor);
    printf("请输入今天增加的好感度(输入一个整数并按回车): ");

    int add_favor = 0;
    scanf("%d", &add_favor); // 注意这里的 & 符号

    favor = favor + add_favor;
    printf("\n更新成功！当前好感度提升至: %d\n", favor);

    return 0;
}