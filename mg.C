#include <stdio.h>
#include <unistd.h>

int main() {
    int customCount;
    char choice;
    int count = 0;

    do {
        // 提示用户输入次数
        printf("请输入要执行的次数: ");
        scanf("%d", &customCount);

        for (int i = 0; i < customCount; i++) {
            if (count % 2 == 0) {
                printf("\x1B[31m"); // 设置文本颜色为红色
            } else {
                printf("\x1B[32m"); // 设置文本颜色为绿色
            }
            printf("我是老马我叫马子文我是大傻逼 - 第%d次运行\n\a", count + 1);
            usleep(5000); // 延迟秒（以微秒为单位）
            printf("\x1B[0m"); // 恢复默认文本颜色
            count++;
        }

        printf("是否再次执行？(y/n): ");
        scanf(" %c", &choice);
        printf("\n"); // 换行以显示下一次运行

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

