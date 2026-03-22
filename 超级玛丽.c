#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*利用程序写多个printf*/
#define line 22  // 最多读取22行
#define MAX_length 1000  // 每行最大长度

int main() {
	char s[line + 1][MAX_length];
	int i;
	
	//读取输入
	for (i = 1; i <= line; i++) {
		if (fgets(s[i], MAX_length, stdin) == NULL) {
			break;  // 若输入提前结束，停止读取
		}
		// 去除fgets读取的换行符
		s[i][strcspn(s[i], "\n")] = '\0';
	}
	
	//清空控制台,方便复制
	system("cls");
	
	//输出转换后的printf语句
	for (i = 1; i <= line; i++) {
		if (s[i][0] == '\0') break;  // 跳过空行
		printf("printf(\"%s\\n\");\n", s[i]);
	}
	
	//持续显示输出
	for (;;);
	
	return 0;
}

