#include"pch.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include<stdio.h>
#include<fstream>
using namespace std;
void main()
{
	ifstream ifile("./jilu.txt");
	string diyi;
	int high;
	ifile >> high >> diyi;
	int win = 0, guan(1), bu(16);/*这里设置关数和步数初始值*/
	short int score = 0;


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN);/* 改变字体颜色成为黄色（红+绿） */
	int hao1(0), hao2(1), hao3(5), hao4(1), hao5(1), hao6(1), hao7(1), hao8(1), hao9(1), hao10(1), hao11(1), hao12(1), hao13(1), hao14(1), hao15(0), hao16(1);

	cout << "\n" << "\n" << endl;
	cout << "                            ▓                                                            ▓             ▓       " << endl;
	cout << "                          ▓  ▓                                                          ▓             ▓       " << endl;
	cout << "                        ▓  ▓  ▓                                                    ▓▓▓▓▓     ▓▓▓▓▓ " << endl;
	cout << "                      ▓  ▓▓▓  ▓                                                    ▓▓▓         ▓▓▓    " << endl;
	cout << "                   ▓        ▓      ▓                                               ▓  ▓  ▓     ▓  ▓  ▓   " << endl;
	cout << "                ▓          ▓          ▓                                                ▓             ▓     " << endl;
	cout << "                     ▓▓▓▓▓▓▓▓▓                                                           ▓             " << endl;
	cout << "                    ▓      ▓      ▓                                                         ▓                " << endl;
	cout << "                    ▓      ▓      ▓                                                 ▓▓▓▓▓▓▓▓▓▓▓▓  " << endl;
	cout << "                    ▓     ▓       ▓                                                        ▓       ▓ " << endl;
	cout << "                    ▓    ▓ ▓     ▓                                                         ▓    ▓    " << endl;
	cout << "                         ▓    ▓                                                                ▓▓        " << endl;
	cout << "                       ▓        ▓                                                             ▓   ▓ " << endl;
	cout << "                  ▓ ▓             ▓▓                                                 ▓▓▓▓     ▓▓▓▓▓" << "\n" << "\n" << endl;


	cout << "                  ▓                ▓                                                          ▓  " << endl;
	cout << "                   ▓        ▓     ▓     ▓                                                    ▓" << endl;
	cout << "                ▓▓▓▓      ▓    ▓    ▓                                          ▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
	cout << "                    ▓          ▓  ▓  ▓                                            ▓                    ▓" << endl;
	cout << "                   ▓             ▓▓▓                                              ▓    ▓▓▓▓▓▓    ▓" << endl; ;
	cout << "                    ▓        ▓▓▓▓▓▓▓                                                ▓        ▓    " << endl;
	cout << "                   ▓             ▓▓▓                                                    ▓▓▓▓▓▓  " << endl;
	cout << "                    ▓          ▓  ▓  ▓" << endl;
	cout << "                  ▓          ▓    ▓    ▓                                            ▓▓▓▓▓▓▓▓▓▓     " << endl;
	cout << "                ▓          ▓      ▓      ▓                                          ▓                ▓" << endl;
	cout << "                  ▓▓              ▓                                                  ▓                ▓" << endl;
	cout << "                     ▓▓▓▓▓▓▓▓▓▓▓▓▓▓                                       ▓▓▓▓▓▓▓▓▓▓   " << endl;
	Sleep(1500);
	cout << "请等音乐响起后点一下程序再按一下回车！！！" << endl;
	system(".\\musicfangqilai.mp3");/* 打开我放的背景音乐*/
	cin.get();
	system("cls");
	cout << "我先来说说游戏规则8~~~~" << "\n" << endl;
	Sleep(1500);
	cout << "地图是部分随机的啦" << "\n" << endl;
	Sleep(1500);
	cout << "一开始你会看见一个绿油油的♂,那就是你了（有冒犯还请见谅，只是随便找个符号=.=）" << "\n" << endl;
	Sleep(1500);
	cout << "w a s d 控制上下左右,输入后按回车移动（可以输入一串，然后就疯狂移动hhhh）" << "\n" << "\n";
	Sleep(1500);
	cout << "有两种门，一种是ㄖ，一种是℡（有点小...取的是tele的前缀~）  " << "\n" << endl;
	Sleep(1500);
	cout << "你的步数是有限的，一开始有十五步，在前10关抵达 ㄖ 后进入下一关并加10个步数，以后的关中只增加8步了哦！" << "\n" << endl;
	Sleep(1500);
	cout << "  ℡  是一个一次性的传送门，每一关都大概率有的，用途就字面上的意思啦" << "\n" << "\n";
	Sleep(1500);
	cout << "然后咧,拿到 ♀ 可以加一分" << "\n" << endl;
	Sleep(1500);
	cout << "撞到 ▓ ，或者其他的 ♂ 就都gg了" << "\n" << endl;
	Sleep(1500);
	cout << "对了走起来人就变黄了0.0" << "\n" << endl;
	Sleep(1500);
	cout << "emmmmmmm那就这样吧，到你的操作时间了" << "\n" << "\n" << "再按一下回车就开始了哈~" << "\n" << endl;
	cin.get();
	cout << "          地图正在拼命加载中";
	while (hao2 <= 6)
	{
		cout << ".";
		hao2++;
		Sleep(350);
	}
	cout << "\n";
	Sleep(300);




	do {
		win = 0;
		/* 设置一大堆后面循环要用的变量*/
		srand((unsigned)time(NULL));
		int woi1, woj1, woi2, woj2, meni1, menj1;/*设置两个♀的横纵位置，然后各种随机*/
		woi1 = rand() % 7 + 1;
		woj1 = rand() % 12 + 1;
		woi2 = rand() % 8 + 1;
		woj2 = rand() % 8 + 1;
		menj1 = rand() % 11 + 2;
		meni1 = rand() % 10 + 2;
		unsigned int x, y;
		char fx;
		string k = "  ";
		string k1 = " ";
		string sqr = "▓";/*原意是用来方便判断的，结果并没有怎么用到*/
		x = rand() % 14 + 1;
		y = rand() % 18 + 1;/*这个x和y是我们主角的随机生成地址*/
		int key_ = 0;
		short int key = 0;
		int n = 0;
		cout << "\n";
		Sleep(1500);
		string ditu[21][16] = {
		"▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","♂","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","♂","  ","  ","▓","▓","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","℡","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓","▓","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓","▓","  ","  ","  ","▓",
		"▓","  ","  ","  ","▓","▓","▓","  ","  ","  ","  ","▓","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","▓","▓","▓","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","▓","▓","  ","  ","  ","  ","  ","▓","℡","  ","  ","  ","▓",
		"▓","  ","  ","▓","▓","  ","  ","  ","  ","  ","▓","▓","  ","  ","  ","▓",
		"▓","  ","  ","▓","▓","  ","  ","  ","  ","  ","▓","▓","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","▓",
		"▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓","▓",
		};/*咱用一个数组来制成地图，之后方便操作*/
		for (int i = 0; i < 15; i++)
		{
			int fkx = rand() % 15;
			int fky = rand() % 20;
			ditu[fky][fkx] = ditu[fky][fkx].replace(ditu[fky][fkx].find(""), 2, "▓");
		}

		ditu[woj1][woi1] = ditu[woj1][woi1].replace(ditu[woj1][woi1].find(""), 2, "♀");
		ditu[woj2][woi2] = ditu[woj2][woi2].replace(ditu[woj2][woj1].find(""), 2, "♀");/*在数组中生成两个得分物的坐标*/
		ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "♂");
		while (menj1 == y && meni1 == x)
		{
			menj1 = rand() % 11 + 2;
			meni1 = rand() % 10 + 2;
		}
		ditu[8][8] = ditu[8][8].replace(ditu[8][8].find(""), 2, "♂");
		ditu[menj1][meni1] = ditu[menj1][meni1].replace(ditu[menj1][meni1].find(""), 2, "ㄖ");
		system("cls");
		ditu[8][8] = ditu[8][8].replace(ditu[8][8].find(""), 2, "♂");
		for (int i = 0; i <= 20; i++)
		{
			for (int j = 0; j <= 15; j++)
				if (i == y && j == x)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
					cout << ditu[i][j];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
						FOREGROUND_GREEN);
				}
				else {
					cout << ditu[i][j];
				}
			cout << endl;
		}
		Sleep(600);




		while (x < 21, y < 16, bu>0)/*其实就是用向四个方向上的字符串来判断各种情况*/
		{
			cin >> fx;
			bu--;
			switch (fx)
			{
			case 's':
			{
				y++;
				if (ditu[y][x] == sqr || ditu[y][x] == "♂")
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "╳ ");
					ditu[y - 1][x] = ditu[y - 1][x].replace(ditu[y][x].find(""), 2, "  ");
					key = 1;
					break;
				}
				else if (ditu[y][x] == k)
				{

					ditu[y - 1][x].swap(ditu[y][x]);
					break;
				}
				else if (ditu[y][x] == "ㄖ")
				{
					bu = bu + 10;
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y - 1][x].swap(ditu[y][x]);
					key_ = 1;
					break;
				}
				else if (y == 5 && x == 4)
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y - 1][x] = ditu[y - 1][x].replace(ditu[y - 1][x].find(""), 2, "  ");
					ditu[15][11] = ditu[15][11].replace(ditu[15][11].find(""), 2, "♂");
					x = 11;
					y = 15;
					break;
				}
				else if (y == 15 && x == 11)
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y - 1][x] = ditu[y - 1][x].replace(ditu[y - 1][x].find(""), 2, "  ");
					ditu[5][4] = ditu[5][4].replace(ditu[5][4].find(""), 2, "♂");
					x = 4;
					y = 5;
					break;
				}
				else if (ditu[y][x] == "♀")
				{
					ditu[y - 1][x] = ditu[y - 1][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "♂");
					score += 1;
					break;
				}
			}
			case 'd':
			{
				x++;
				if (ditu[y][x] == sqr || ditu[y][x] == "♂")
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "╳ ");
					ditu[y][x - 1] = ditu[y][x - 1].replace(ditu[y][x].find(""), 2, "  ");
					key = 1;
					break;
				}
				else if (ditu[y][x] == k)
				{

					ditu[y][x - 1].swap(ditu[y][x]);
					break;
				}
				else if (ditu[y][x] == "ㄖ")
				{
					bu = bu + 10;
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x - 1].swap(ditu[y][x]);
					key_ = 1;
					break;
				}
				else if (y == 5 && x == 4)
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x - 1] = ditu[y][x - 1].replace(ditu[y][x - 1].find(""), 2, "  ");
					ditu[15][11] = ditu[15][11].replace(ditu[15][11].find(""), 2, "♂");
					x = 11;
					y = 15;
					break;
				}
				else if (y == 15 && x == 11)
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x - 1] = ditu[y][x - 1].replace(ditu[y - 1][x].find(""), 2, "  ");
					ditu[5][4] = ditu[5][4].replace(ditu[5][4].find(""), 2, "♂");
					x = 4;
					y = 5;
					break;
				}
				else
				{
					ditu[y][x - 1] = ditu[y][x - 1].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "♂");
					score += 1;
					break;
				}
			}
			case 'a':
			{
				x--;
				if (ditu[y][x] == sqr || ditu[y][x] == "♂")
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "╳ ");
					ditu[y][x + 1] = ditu[y][x + 1].replace(ditu[y][x].find(""), 2, "  ");
					key = 1;
					break;
				}
				else if (ditu[y][x] == k)
				{

					ditu[y][x + 1].swap(ditu[y][x]);
					break;
				}
				else if (ditu[y][x] == "ㄖ")
				{
					bu = bu + 10;
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x + 1].swap(ditu[y][x]);
					key_ = 1;
					break;
				}
				else if (y == 5 && x == 4)
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x + 1] = ditu[y][x + 1].replace(ditu[y - 1][x].find(""), 2, "  ");
					ditu[15][11] = ditu[15][11].replace(ditu[15][11].find(""), 2, "♂");
					x = 11;
					y = 15;
					break;
				}
				else if (y == 15 && x == 11)
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x + 1] = ditu[y][x + 1].replace(ditu[y - 1][x].find(""), 2, "  ");
					ditu[5][4] = ditu[5][4].replace(ditu[5][4].find(""), 2, "♂");
					x = 4;
					y = 5;
					break;
				}
				else
				{
					ditu[y][x + 1] = ditu[y][x + 1].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "♂");
					score += 1;
					break;
				}
			}
			case 'w':
			{
				y--;
				if (ditu[y][x] == sqr || ditu[y][x] == "♂")
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "╳ ");
					ditu[y + 1][x] = ditu[y + 1][x].replace(ditu[y][x].find(""), 2, "  ");
					key = 1;
					break;
				}
				else if (ditu[y][x] == k)
				{

					ditu[y + 1][x].swap(ditu[y][x]);
					break;
				}
				else if (ditu[y][x] == "ㄖ")
				{
					if (guan <= 10) {
						bu = bu + 10;
					}
					else
					{
						bu = bu + 8;
					}
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y + 1][x].swap(ditu[y][x]);
					key_ = 1;
					break;
				}
				else if (y == 5 && x == 4)
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y + 1][x] = ditu[y + 1][x].replace(ditu[y - 1][x].find(""), 2, "  ");
					ditu[15][11] = ditu[15][11].replace(ditu[15][11].find(""), 2, "♂");
					x = 11;
					y = 15;
					break;
				}
				else if (y == 15 && x == 11)
				{
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y + 1][x] = ditu[y + 1][x].replace(ditu[y - 1][x].find(""), 2, "  ");
					ditu[5][4] = ditu[5][4].replace(ditu[5][4].find(""), 2, "♂");
					x = 4;
					y = 5;
					break;
				}
				else
				{
					ditu[y + 1][x] = ditu[y + 1][x].replace(ditu[y][x].find(""), 2, "  ");
					ditu[y][x] = ditu[y][x].replace(ditu[y][x].find(""), 2, "♂");
					score += 1;
					break;
				}
			}

			}

			system("cls");
			if (key == 0 && key_ == 0)
			{
				for (int i = 0; i <= 20; i++)
				{
					for (int j = 0; j <= 15; j++)
						cout << ditu[i][j];
					cout << endl;
				}
				cout << "你剩余的移动次数是： " << bu << endl;
				cout << "第" << guan << "关" << endl;
				cout << "你的得分是：" << score << endl;

				cout << "目前取得最高分的是： " << diyi << endl;
				cout << "ta的得分是： " << high << endl;
			}
			if (key == 1)
			{
				for (int i = 0; i <= 20; i++)
				{
					for (int j = 0; j <= 15; j++)
						cout << ditu[i][j];
					cout << endl;
				}
				Sleep(1500);
				break;
			}

			if (key_ == 1)
			{
				for (int i = 0; i <= 20; i++)
				{
					for (int j = 0; j <= 15; j++)
						cout << ditu[i][j];
					cout << endl;
				}
				Sleep(1500);
				break;
			}
		};
		if (key == 1 || bu <= 0)
		{
			system("cls");
			system("color 3F");
			cout << "\n" << "\n";
			cout << "     ▓ ▓ ▓ ▓ ▓                ▓▓                     ▓              ▓            ▓ ▓ ▓ ▓ ▓ ▓      " << endl;
			cout << "   ▓                             ▓  ▓                   ▓▓            ▓▓           ▓                     " << endl;
			cout << "  ▓                             ▓    ▓                 ▓  ▓          ▓  ▓          ▓                     " << endl;
			cout << " ▓                             ▓      ▓               ▓    ▓        ▓    ▓         ▓                     " << endl;
			cout << " ▓       ▓ ▓ ▓ ▓          ▓▓▓▓▓▓             ▓      ▓      ▓      ▓        ▓ ▓ ▓ ▓ ▓ ▓      " << endl;
			cout << " ▓                 ▓        ▓          ▓           ▓        ▓    ▓        ▓       ▓                     " << endl;/*自己又打了个字模，就是有点累...*/
			cout << "  ▓               ▓        ▓            ▓         ▓          ▓  ▓          ▓      ▓                     " << endl;
			cout << "   ▓             ▓        ▓              ▓       ▓            ▓▓            ▓     ▓                     " << endl;
			cout << "    ▓ ▓ ▓ ▓ ▓         ▓                ▓     ▓              ▓              ▓    ▓ ▓ ▓ ▓ ▓ ▓      " << endl;
			cout << "\n" << "\n" << endl;
			cout << "     ▓ ▓ ▓ ▓ ▓        ▓                ▓      ▓ ▓ ▓ ▓ ▓ ▓         ▓ ▓ ▓ ▓ ▓      " << endl;
			cout << "   ▓              ▓       ▓              ▓       ▓                        ▓           ▓     " << endl;
			cout << "  ▓                ▓       ▓            ▓        ▓                        ▓           ▓     " << endl;
			cout << " ▓                  ▓       ▓          ▓         ▓                        ▓           ▓     " << endl;
			cout << "▓                    ▓       ▓        ▓          ▓ ▓ ▓ ▓ ▓ ▓         ▓ ▓ ▓ ▓ ▓      " << endl;
			cout << "▓                    ▓        ▓      ▓           ▓                        ▓           ▓     " << endl;
			cout << " ▓                  ▓          ▓    ▓            ▓                        ▓            ▓    " << endl;
			cout << "  ▓                ▓            ▓  ▓             ▓                        ▓             ▓   " << endl;
			cout << "     ▓ ▓ ▓ ▓ ▓                 ▓               ▓ ▓ ▓ ▓ ▓ ▓         ▓              ▓  " << endl;
			cout << "                                    by       14班冯韵菱+15班张靖鸿" << endl;
			cout << "                                                      Thank " << endl;
			cout << "                                                       you  " << endl;
			cout << "                                                        !  " << endl;
			if (score > high)
			{
				cout << "你的得分是： " << score << endl;
				cout << "恭喜！！！你打破了纪录！请输入你的名字~~" << endl;
				string urname;
				cin >> urname;
				ofstream outfile("./jilu.txt");
				outfile << score << urname;//向文件写数据
				outfile.close();//关闭文件

			}
		}
		if (key_ == 1)
		{
			system("cls");
			cout << "\n" << "\n" << endl;
			cout << "                   ▓              ▓              ▓     ▓▓▓▓▓▓▓       ▓              ▓  " << endl;
			cout << "                    ▓            ▓▓            ▓            ▓             ▓▓            ▓     " << endl;
			cout << "                     ▓          ▓  ▓          ▓             ▓             ▓  ▓          ▓     " << endl;
			cout << "                      ▓        ▓    ▓        ▓              ▓             ▓    ▓        ▓" << endl;
			cout << "                       ▓      ▓      ▓      ▓               ▓             ▓      ▓      ▓   " << endl;
			cout << "                        ▓    ▓        ▓    ▓                ▓             ▓        ▓    ▓" << endl;
			cout << "                         ▓  ▓          ▓  ▓                 ▓             ▓          ▓  ▓ " << endl;
			cout << "                          ▓▓            ▓▓                  ▓             ▓            ▓▓   " << endl;
			cout << "                           ▓              ▓             ▓▓▓▓▓▓▓       ▓              ▓      " << endl;
			cout << "                                    by       14班冯韵菱+15班张靖鸿" << endl;
			cout << "                                                      Thank " << endl;
			cout << "                                                       you  " << endl;
			cout << "                                                        !  " << endl;
			win = 1;
			guan += 1;
		}
	} while (win == 1);
}