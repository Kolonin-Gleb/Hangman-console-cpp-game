#include "Functions.h"

string enterAction()
{
	string action = "";

	while (true)
	{
		cout << "������� 1, ����� ����������� � ���������." << endl;
		cout << "������� 2, ����� ������� ��������� ����." << endl;
		cin >> action;
		if (action == "1" || action == "2")
		{
			return action;
		}
		else
		{
			cout << "��������� �������� �����������!" << endl;
		}
	}
}

void showGameRules()
{
	cout << "\t\t ������� ����:" << endl;
	cout << "��������� ���������� ��� ����� �� ��������� ���� ���������." << endl;
	cout << "����� ������������, ��� ��� ������� \"-\" " << endl;
	cout << "���� ������ �������, ��� ��� �� ����� ����� �����," << endl;
	cout << "������� ��� �� ������������� ������� � �����." << endl << endl;

	cout << "���� ��������� ���� ����� ���� � �����, ��" << endl;
	cout << "��� \"-\", ����������� ����� ��� �����" << endl;
	cout << "��������� ���� ����� ���������� �� ���� �����."<< endl;
	cout << "� ��� ���� 8 �������." << endl;
	cout << "���� ������� ����������, ���� ��������� ���� ����� ����������� � �����." << endl;
	cout << "���� ������� ����������, �� �� ���������." << endl;
	cout << "���� �� �������� ��� ����� �����, �� �� ��������." << endl << endl;
	cout << "����� � �������� ����!" << endl;
	cout << endl << endl;
}

string enterCategory()
{
	string action = "";

	while (true)
	{
		cout << "������� 1, ����� ������� ��������� ���." << endl;
		cout << "������� 2, ����� ������� ��������� �����." << endl;
		cout << "������� 3, ����� ������� ��������� ���������." << endl;
		cin >> action;
		if (action == "1" || action == "2" || action == "3")
		{
			return action;
		}
		else
		{
			cout << "��������� ��������� �����������!" << endl;
		}
	}
}

short chooseRandomCategory()
{
	short randomCategory = rand() % (3 - 1) + 1; // �� 1 �� 2
	return randomCategory;
}

