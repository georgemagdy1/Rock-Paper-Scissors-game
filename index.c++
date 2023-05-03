#include<iostream>9
using namespace std;
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<ctime>

// Random number
char computer_2()
{
	srand(time(0));
int num = rand() % 3 + 1;

if (num == 1) return 'r';
if (num == 2) return 'p';
if (num == 3) return 's';
}

  char Name_game(){
	char c;
	cout << "please chose only on for this 3, rock (r) , paper (p) , scissoris (s) " << endl;
	cout << "please enter the c = " << endl;
	cin >> c;
	return c;
}
  void show(char option) {
	  if (option == 'r') cout << "rock" << endl;
	  if (option == 'p') cout <<  "paper" << endl;
	  if (option == 's') cout << "scissoris" << endl;
  }
 

  void chose_winner(char user,char computer)
  {
	  if (user == 'r' && computer =='p')
	  {
		  cout << "the computer win!" << endl;
	  }
	  else if (user=='p' && computer=='s')
	  {
		  cout << "computer is win!" << endl;
	  }
	  else if (user=='s' && computer=='r')
	  {
		  cout << "computer is win!" << endl;
	  }
	  else if (user=='p'&& computer=='r')
	  {
		  cout << "you  win!" << endl;
	  }
	  else if (user=='r'&& computer=='s')
	  {
		  cout << "you  win!" << endl;
	  }
	  else if (user == 's' && computer == 'p')
	  {
		  cout << "you  win!" << endl;
	  }
	  else {
		  cout << "play game agiane " << endl;
	  }
  }

  int main() {
	  char user;
	  char computer;
	  user = Name_game();
	  cout << "chose is = " << endl;
	  show(user);

	  cout << "computer is = "<< endl;
	  computer = computer_2();
	  show(computer);
	  chose_winner(user, computer);
	  return 0;
  }
