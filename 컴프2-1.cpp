#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;
ifstream read;
int main() {
	
	while(1) {	//������ ó�� ���� ȭ��. 
	
		cout << "			ī�� ���� ����" << endl << endl;
		cout << "			1. PLAY" << endl << "			2. HELP" << endl << "			3. EXIT";

		cout << endl << "			���ڸ� �Է��ϼ��� : ";
	
		int Play;
		cin >> Play;
	 
		int Start[3] = {1,2,3};
	
		switch(Start[3]) {
		
			case 1 : //�����ο� ���ϱ�. 
			
				system("cls");
			
				cout << "���� �ο��� �Է� �� �ּ��� : ";
			
				int Member;
				cin >> Member;
				
				system("cls");
				
				break;
			
			case 2 : 	//������ ����� �ҷ�����. 
				system("cls");
			
				read.open("HTP.txt");
			
				cout << " ó�� ȭ������ ���ư����� �ƹ� Ű�� ���� �ּ��� : ";
			
				char Back; 
				cin >> Back;
			
				system("cls");
			
				break;
			
			case 3 :  //������ �����ϰ��� �� ��. 
			
				system("cls");
				cout << "������ �����մϴ�.";
				
				system("cls");
				break;
			
			default :  //1~3������ ���ڸ� �Է����� �ʾ��� ��. 
				
				system("cls");
				cout << "1 ~ 3 ������ ���ڸ� �Է� �� �ּ���.";
				
				char WrongNum;
				cin >> WrongNum;
				
				system("cls");
				break;
			
		} 
		}
}

