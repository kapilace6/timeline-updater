#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int time[2][4] = { 0 }, in;

	for (int j = 0; j < 2; ++j)
	{
		if (!j)
			cout << "\n\t How many Starting Time Divisions : ";
		else
			cout << "\n\t How many Finishing Time Divisions : ";

		cin >> in;
		cin.ignore();

		for (int i = in - 1; i > -1; --i)
		{
			cout << "\tInput " << i << "th Division : ";
			cin >> time[j][i];
			cin.ignore();
		}
	}

	//[0 3 1 0] reversed -> [0 1 3 0]
	fstream fout("ouput.txt", ios::out);
	while (1)
	{
		int i, carry = 0;
		fout << '\'';

		if (time[0][3])
			fout << '0' << time[0][3];

		for (i = 2; i > -1; --i)
		{
			if(!(i == 2 && !time[0][3]))
				fout << ':';
			if (time[0][i] < 10)
				fout << '0';

			fout << time[0][i];
		}
		fout << endl;

		for (i = 0; i < 4; ++i)
			if (time[0][i] != time[1][i])
				break;

		if (i == 4)
			break;

		carry = (time[0][1] + 1) / 60;
		time[0][1] = (time[0][1] + 1) % 60;

		i = (time[0][2] + 3 + carry) / 60;
		time[0][2] = (time[0][2] + 3 + carry) % 60;

		time[0][3] = time[0][3] + i;
	}

	fout.close();
	return 0;
}
