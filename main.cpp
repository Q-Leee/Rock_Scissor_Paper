#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>   //for srand() and rand()
#include <ctime>   //for time()

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
		srand(time(NULL));   //shufffle
		int ran = rand() % 3;   //to get the one random index from arr[]

		for (;;)
		{
			cout << name << " >> ";
			cin >> player;
			transform(player.begin(), player.end(), player.begin(), tolower);   //<algorithm> header, to make it lower case from upper case input
			if (player != "rock" && player != "scissor" && player != "paper")   //if user type wrong
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
