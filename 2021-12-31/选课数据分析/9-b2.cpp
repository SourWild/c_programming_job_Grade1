/* 2151928 信12 唐芊竹 */
#include <fstream>
#include <iomanip>
/* 允许按需加入系统的宏定义、需要的头文件等 */
#include <iostream>
using namespace std;

#define MAX_STU_NUM			256	//约定最大人数为256人（两轮的总和，包括退选、补选）
#define MAX_NAME_LEN			32	//学生姓名的最大长度不超过16个汉字
#define MAX_FILENAME_LEN		256	//文件名的最大长度
#define in_first 3
#define in_second 6
/* stu_info 类存放每个学生的信息，包括学号、姓名、其它需要的私有信息，已有内容不准动，可加入符合限制要求的新内容 */
class stu_info {
private:
	int  stu_no;			//学号
	char stu_name[MAX_NAME_LEN];	//姓名
	char stu_fst;
	int stu_fst_tk;//退课判断
	friend class stu_list;
	/* 允许按需加入private数据成员、成员函数以及其它需要的内容 */

public:
	/* 本类不允许定义任何的公有数据成员、成员函数 */
};

/* stu_list 类整个选课信息，已有内容不准动，可加入符合限制要求的新内容 */
class stu_list {
private:
	stu_info stu[MAX_STU_NUM + 1];
	stu_info stuplus[MAX_STU_NUM + 1];
	/* 允许按需加入private数据成员和成员函数 */

public:
	int read(const char* filename, const int append = 0);	//从文件中读入选课信息并进行处理，第2个参数值为0表示覆盖方式，1表示追加方式
	int print(const char* prompt = NULL);			//打印当前读入的选课名单

	/* 允许按需加入其它public成员函数 */

};
int stu_list::read(const char* filename, const int append)
{
	int  j, judge = 0;
	static int i = 0;

	if (append == 0) {
		ifstream in(filename, ios::in);
		//for (i; i < MAX_STU_NUM && !in.eof(); i++) {
			while (!in.eof()) {
				in >> stu[i].stu_no >> stu[i].stu_name;
				stu[i].stu_fst = 'Y';
				stu[i].stu_fst_tk = 1;
				i++;
			}
			i--;
		in.close();
	}
	if (append == 1) {
		ifstream in(filename, ios::in);
		while (!in.eof()) {
			in >> stu[i].stu_no >> stu[i].stu_name;
			judge = 0;
			for (j = 0; j < i; j++) {
				if (stu[j].stu_no == stu[i].stu_no) {
					judge = 1;     //跟第一轮重合，置1
					break;
				}
			}
			if (judge == 1) {
				stu[j].stu_fst_tk = 0;//（原值为1）置零说明没退课，两次都报名了。
				stu[i].stu_no = 0;
				continue;
			}
			else {
				stu[i].stu_fst = '/'; //第一轮未选，第二轮补选
				stu[i].stu_fst_tk = 2;//补选置2
				i++;
			}
		}
		i--;
		in.close();
		int m, n;
		for (m = 0; stu[m].stu_name[0] != '\0'; m++) {
			for (n = m + 1; stu[n].stu_name[0] != '\0'; n++) {
				if (stu[m].stu_no > stu[n].stu_no) {
					stu[MAX_STU_NUM] = stu[m];
					stu[m] = stu[n];
					stu[n] = stu[MAX_STU_NUM];
				}
			}
		}
	}
	//i--;
	return 1;
}
int stu_list::print(const char* prompt)
{
	cout << prompt << endl;
	cout << "===========================================\n";
	cout << "序号 学号    姓名             第一轮 第二轮\n";
	cout << "===========================================\n";
	for (int i = 0; stu[i].stu_name[0]!='\0'; i++) {
		cout<<setiosflags(ios::left)<<setw(5)<<(i+1)<< stu[i].stu_no << ' '<<setw(17)<< stu[i].stu_name<<setw(7)<<stu[i].stu_fst;
		if (stu[i].stu_fst_tk == 0) {
			cout << 'Y' << endl;
		}
		if (stu[i].stu_fst_tk == 1) {
			cout << "退课\n";
		}
		if (stu[i].stu_fst_tk == 2) {
			cout << "补选\n";
		}
	}
	cout << "===========================================\n";
	return 1;
}
/* --- 此处给出上面两个类的成员函数的体外实现 --- */


/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准动
***************************************************************************/
int main()
{
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "请输入前一轮选课的数据文件 : ";
	cin >> file1;
	cout << "请输入后一轮选课的数据文件 : ";
	cin >> file2;

	stu_list list;

	/* 读入第一个数据文件 */
	if (list.read(file1) < 0)
		return -1;

	/* 读入第二个数据文件，参数2的值为1表示追加方式 */
	if (list.read(file2, 1) < 0)
		return -1;

	list.print("最终选课名单");

	return 0;
}
