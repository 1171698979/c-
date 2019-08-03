/*
#include <iostream>
using namespace std;
int main()
{
	char girlType;
	int salary;
	float height;
	cout << "请输入您喜欢的类型:" << endl;
	cout << "A.泼辣性!" << endl;
	cout << "B.文艺性!"<<endl;
	cout <<"C.淑女型!"<< endl;
	cin >> girlType;
	cout << "请输入您的工资:" << endl;
	cin >> salary;
	cout << "请输入您的身高: " << endl;
	cin >> height;
	cout << "您的理想类型是" << girlType<<endl;
	cout << "工资" <<salary<< endl;
	cout << "身高" <<height<< endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
		cout << "come up and c++ me some time" << endl;
		cout << "you won't regreat it!" << endl;

	cin.get();              
	//system("pause");     也可以用cin.get();来实现暂停
	return 0;

}
*/
/*
//求圆的面积,并精确到小数点后4位
#include <iostream>
#define PI 3.1415       //宏定义
using namespace std;
int main(void)
{
	float r=0;
	float len=0;
	float s=0;
	cout << "请输入圆的半径:" << endl;
	cin >> r;
	len = 2 * PI*r;
	s = PI*r*r;
	cout.precision(4);
	cout.flags(cout.fixed);
	cout << "圆的周长:" <<len<< endl;
	cout << "圆的面积:" << s<<endl;
	system("pause");
	return 0;
}
*/
/*
//假设长方形的边长L1.L2求该长方形的面积S;并精确到小数点后3位
#include <iostream>
using namespace std;
int main()
{
	float L1 = 0;
	float L2 = 0;
	float S = 0;
	cout << "请输入长方形的两个边长:" <<endl;
	cout << "L1=";
	cin >> L1;
	cout << "L2=";
	cin >> L2;
	S = L1*L2;
	cout.precision(3);                  //用来精确到小数点后几位
	cout.flags(cout.fixed);
	cout << "正方形的面积:" << S << endl;
	system("pause");
	return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string name;
	string pwd;
	cout << "请输入账户:" << endl;
	cin >> name;
	cout << "请输入密码:"<< endl;
	cin >> pwd;
	cout << "账户:"<<name << endl;
	cout << "密码:"<<pwd << endl;

	system("pause");
	return  0;

}