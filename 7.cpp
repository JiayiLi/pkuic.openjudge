// 7：判断闰年

// 注意： 总时间限制: 1000ms 内存限制: 65536kB

// 描述
// 判断某年是否是闰年。

// 输入
// 输入只有一行，包含一个整数a(0 < a < 3000)

// 输出
// 一行，如果公元a年是闰年输出Y，否则输出N

// 样例输入
// 2006

// 样例输出
// N

// 提示
// 两个判断即可，如果a能整除4并且能整除100，是.或者能整除400，是，否则不是.


#include <iostream>
using namespace std;

int main (){
	int n ;
	cin >> n ;
	if((n%4==0&&n%100!=0)||n%400==0){
		cout << "Y" << endl;
	}
	else {
		cout << "N" <<endl;
	}

	return 0;
}


