#include <iostream>
#include <string>

using namespace std;

int main()
{
	//credentials
	const string USERNAME = "BenjaminZhu";
	const string PASSWORD = "litfam";

	string username, password;
	// Entering a username
	cout << "Enter username: ";
	cin >> username;
	// Username length requirement
		if (username.length() < 4)
		{
			cout << "Username must be at least 4 characters long." << endl;
		}
		// Password length reqirement
		else
		{
			cout << "Enter password: " << endl;
			cin >> password;
		}
		if (password.length() < 6)

		{
			cout << "Password must be at least 6 characters long." << endl;

		}
		// Checking the credentials
		else 

		{
			if (username == USERNAME && password == PASSWORD)
			{
				cout << "User credentials are correct!" << endl;
			}

			else
			{
				cout << "Invalid username or password" << endl;
			}
		}
		return 0;
}

