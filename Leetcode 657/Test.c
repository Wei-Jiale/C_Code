//机器人是否能返回原点
//字符 move[i] 表示其第 i 次移动
//机器人在完成所有动作后返回原点 则返回 true 否则 返回 false
#include<stdio.h>
#include<stdbool.h>

bool judgeCircle(char * move)
{
	int x = 0;//横坐标
	int y = 0;//纵坐标
	int i = 0;

	while (move[i] != 0){
		switch (move[i]){
		//左移
		case 'L':
			x--;
			break;
		//右移
		case 'R':
			x++;
			break;
		//上移
		case 'U':
			y++;
			break;
		//下移
		case 'D':
			y--;
			break;
		}
		i++;
	}
	return (x == 0 && y == 0);
}