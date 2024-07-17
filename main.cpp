#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	cout << "***** Play Rock-Cissor-Paper Game with Computer *****" << endl;
	cout << "Type your name >> ";
	string name;
	cin >> name;

	string player;
	string arr[] = { "rock", "scissor", "paper" };

	while (true)
	{
		srand(time(NULL));
		int ran = rand() % 3;

		for (;;)
		{
			cout << name << " >> ";
			cin >> player;
			transform(player.begin(), player.end(), player.begin(), tolower);
			if (player != "rock" && player != "scissor" && player != "paper")
			{
				cout << "Try again" << endl;
			}
			else
			{
				break;
			}
		}
		string computer = "Computer";
		cout << computer << " : " << arr[ran] << endl;

		if (player == arr[ran])
		{
			cout << "The same" << endl;
		}
		else if (player == "rock")
		{
			if (arr[ran] == "scissor")
			{
				cout << "Player win" << endl;
			}
			else
			{
				cout << "Computer win" << endl;
			}
		}
		else if (player == "scissor")
		{
			if (arr[ran] == "paper")
			{
				cout << "Player win" << endl;
			}
			else
			{
				cout << "Computer win" << endl;
			}
		}
		else if (player == "paper")
		{
			if (arr[ran] == "rock")
			{
				cout << "Player win" << endl;
			}
			else
			{
				cout << "Computer win" << endl;
			}
		}
	}


	return 0;
}