#include<iostream>

using namespace std;

/*
������ �ڷ���
bool	: 1����Ʈ ������ - ���� ������ ǥ��(0: ����, 1: ��)
char	: 1����Ʈ ������ - ���� �ϳ��� ǥ�� ex) a, b, c
short	: 2����Ʈ ������ - (����, 0, ���)
int		: 4����Ʈ ������
float	: 4����Ʈ �Ǽ���
double	: 8����Ʈ �Ǽ���
*/

/*
������
���� ������ =
�� ������ == (���п����� 10)
���п����� A = 10�� �ǹ̴� A�� 10�� ����
���α׷��ֿ����� A = 10�� A�� 10�� �����Ѵ�

��� ������ + - * / %
*/
void main()
{
	//�밡���� ǥ��� : ������ �տ� �ڷ����� ǥ���� �ִ� ���

	// ���� ����
	bool isPlaying, bPlay;
	char chLetter;
	short shArmor;
	int nAttack;
	float fSpeed;
	double dPower;

	isPlaying = true;
	bPlay = false;

	chLetter = 'a';
	shArmor = 10;
	nAttack = 20;
	fSpeed = 3.0f;
	dPower = 4.0;


	cout << chLetter << endl;
	cout << nAttack << endl;
	cout << fSpeed << endl;

	cout << "�Ŀ��� �Է��ϼ���" << endl;
	cin >> dPower;

	cout << "�Է��Ͻ� �Ŀ��� " << dPower << "�Դϴ�." << endl;

	system("pause");
}