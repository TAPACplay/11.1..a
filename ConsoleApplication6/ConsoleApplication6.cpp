#include<iostream>
#include<string>

using namespace std;

int main()
{
	setlocale(0, "");
	int n;

	cout << "  (����� ��� (������ ����  067, 050, 063, 065, 066, 073) ";
	cin >> n;

	switch (n)
	{
	case 67:
		cout << " " << endl;
		cout << " ���������� ��� " << n << " �������� ��������� �������." << endl;
		break;

	case 50:
		cout << " " << endl;
		cout << " ���������� ��� " << n << " �������� ��������� Vodafone." << endl;
		break;

	case 63:
		cout << " " << endl;
		cout << " ���������� ���" << n << " �������� ��������� Lifecell." << endl;
		break;

	case 65:
		cout << " " << endl;
		cout << " ���������� ��� " << n << " �������� ��������� �������." << endl;
		break;

	case 66:
		cout << " " << endl;
		cout << " ���������� ��� " << n << " �������� ��������� �������." << endl;
		break;

	case 73:
		cout << " " << endl;
		cout << " ���������� ���" << n << " �������� ��������� Lifecell." << endl;
		break;


	default:
		cout << " " << endl;
		cout << " ������ ���� �� ���� ��� � ����� ��� ���� ����� ����!" << endl;
		break;
	}
}