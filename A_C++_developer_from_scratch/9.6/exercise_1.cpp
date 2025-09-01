#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	string word;
	int count = 0;

	cout << "Input the text and the word: ";	// ввод текста и слова
	getline(cin, text);
	getline(cin, word);

	

	bool found = false; // если ни одного совпадения не найдено в котором слово входит в текст

	for (int startPos = 0; startPos < text.length(); startPos++)
	{
		
		bool match = true; // если хоть на какой то позиции символы не совпадают то false

		for (int i = 0; i < word.length(); i++)
		{
			// если символ слова не совпадает с символом текста
			if ((i + startPos >= text.length()) || (word[i] != text[i + startPos]))
			{
				match = false;
				break;
			}
		}
		if (match)
		{
			found = true;
			count++;
		}
	}

	if (found)
	{
		cout << "Yes = " << count;
	}
	else
	{
		cout << "No";
	}

	cout << endl;

	return 0;
}