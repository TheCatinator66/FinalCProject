//Axel Peterson 2/28/23

#include <iostream>
#
using namespace std;
char play;
int hall;

void death() {
	cout << "You have died!" << '\n';
	cout << "would you like to play again (y/n)?" << '\n';
	cin >> play;
}

void choice1()
{
	cout << "As you decend, torches on the wall burst to life, revealing a path branching to the left and to the right both illuminated, but too long to see what lies at the end." << endl;
	cout << "Would you like to take the Left path (1) or the Right path (2)?" << '\n';
	cin >> hall;
}
void choice2() {
	cout << "cool!";

}
int main()
{
	int choice;
	cout << "would you like to play (y/n)? " << endl;
	cin >> play;
	do {
		while (play == 'y') {
			cout << "Welcome to the Maze of Wonders!" << '\n';
			cout << "Enter to find Tresure and more! but beware it is unstable, and one wrong step could mean your doom!" << '\n';\
			cout << " Your First choice lies in front of you: two stair cases on left one right, both leading down into darkness" << '\n';
			cout << "Left (1) or Right (2)?" << '\n';
			cin >> choice;
			if (choice == 2) {
				choice1();
			}
			else {
				cout << "As you decend into the darkness, you feel the stairs shaking. Before you can do anything the stairs disapear, as you plummet into the spikes bellow." << '\n';
				break;
			}
			if (hall == 1) {
				choice2();
			}
			else {
				cout << "As you walk down the hall the torches slowly flicker out and sends you into darkness" << '\n';
				cout << "you look around to see a glow aproching you, as the hall is filled with flames and you are incinerated" << '\n';
				break;
			}
		}
		death();

	} while (play == 'y');
	return 0;
}


