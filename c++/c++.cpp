/*
#include <iostream>
using namespace std;
int main()
{
	char girlType;
	int salary;
	float height;
	cout << "��������ϲ��������:" << endl;
	cout << "A.������!" << endl;
	cout << "B.������!"<<endl;
	cout <<"C.��Ů��!"<< endl;
	cin >> girlType;
	cout << "���������Ĺ���:" << endl;
	cin >> salary;
	cout << "�������������: " << endl;
	cin >> height;
	cout << "��������������" << girlType<<endl;
	cout << "����" <<salary<< endl;
	cout << "���" <<height<< endl;
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
	//system("pause");     Ҳ������cin.get();��ʵ����ͣ
	return 0;

}
*/
/*
//��Բ�����,����ȷ��С�����4λ
#include <iostream>
#define PI 3.1415       //�궨��
using namespace std;
int main(void)
{
	float r=0;
	float len=0;
	float s=0;
	cout << "������Բ�İ뾶:" << endl;
	cin >> r;
	len = 2 * PI*r;
	s = PI*r*r;
	cout.precision(4);
	cout.flags(cout.fixed);
	cout << "Բ���ܳ�:" <<len<< endl;
	cout << "Բ�����:" << s<<endl;
	system("pause");
	return 0;
}
*/
/*
//���賤���εı߳�L1.L2��ó����ε����S;����ȷ��С�����3λ
#include <iostream>
using namespace std;
int main()
{
	float L1 = 0;
	float L2 = 0;
	float S = 0;
	cout << "�����볤���ε������߳�:" <<endl;
	cout << "L1=";
	cin >> L1;
	cout << "L2=";
	cin >> L2;
	S = L1*L2;
	cout.precision(3);                  //������ȷ��С�����λ
	cout.flags(cout.fixed);
	cout << "�����ε����:" << S << endl;
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
	cout << "�������˻�:" << endl;
	cin >> name;
	cout << "����������:"<< endl;
	cin >> pwd;
	cout << "�˻�:"<<name << endl;
	cout << "����:"<<pwd << endl;

	system("pause");
	return  0;

}