#include <cstdlib>
#include <string>
#include "dictionaryList.h"
#include "windows.h"
#include <shellapi.h>
#include "linkedList.h"
#include "unorderedLinkedList.h"

/*
	Anthony Castillo 7/20/2019
*/

int main()
{
	library sites;

	for (int i = 0; i < sites.length(); i++)
	{
		ShellExecuteA(NULL, "open", sites.printList(i).c_str(), NULL, NULL, SW_SHOWNORMAL);
		cout << "Opening: " << sites.printList(i) << endl;
		if (i >= sites.length()-1)
			cout << i+1 << " open commands were executed." << endl;
	};
	system("pause");
	return 0;
};// end main
