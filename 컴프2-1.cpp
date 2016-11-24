#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;
ifstream read;
int main() {
	
	while(1) {	//게임의 처음 시작 화면. 
	
		cout << "			카드 공격 게임" << endl << endl;
		cout << "			1. PLAY" << endl << "			2. HELP" << endl << "			3. EXIT";

		cout << endl << "			숫자를 입력하세요 : ";
	
		int Play;
		cin >> Play;
	 
		int Start[3] = {1,2,3};
	
		switch(Start[3]) {
		
			case 1 : //게임인원 정하기. 
			
				system("cls");
			
				cout << "시작 인원을 입력 해 주세요 : ";
			
				int Member;
				cin >> Member;
				
				system("cls");
				
				break;
			
			case 2 : 	//게임의 방법을 불러오기. 
				system("cls");
			
				read.open("HTP.txt");
			
				cout << " 처음 화면으로 돌아가려면 아무 키나 눌러 주세요 : ";
			
				char Back; 
				cin >> Back;
			
				system("cls");
			
				break;
			
			case 3 :  //게임을 종료하고자 할 때. 
			
				system("cls");
				cout << "게임을 종료합니다.";
				
				system("cls");
				break;
			
			default :  //1~3사이의 숫자를 입력하지 않았을 때. 
				
				system("cls");
				cout << "1 ~ 3 사이의 숫자를 입력 해 주세요.";
				
				char WrongNum;
				cin >> WrongNum;
				
				system("cls");
				break;
			
		} 
		}
}

