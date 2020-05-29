//1712822- Nguyen Khanh Toan - 17CNTN

#include"Dictionary.h"

bool Dictionary::loadDictionary(const string &fileName) {
	ifstream fileIn(fileName);
	if (fileIn.fail()) {
		//cout << "Failed to open this file" << "\n";
		return false;
	}
	string wbf;
	string mbf;
	//cout << "waiting for loading dictionary...." << "\n";
	while (!fileIn.eof())
	{
		char temp[5000];
		fileIn.getline(temp, 5000);
		string line = temp;
		string sep = "  ";
		size_t mark__ = line.find(sep, 0);
		//if (data->getNofNodes()) cout << data->getNofNodes() << "\n";
		if (mark__ == string::npos || line.length()<1) continue;
		string wd = line.substr(0, mark__);
		//cout << wd << "\n";
		if (wd == "Usage") {
			string sep2 = "  n. 1";
			size_t mark2 = line.find(sep2, mark__);
			if (mark2 == string::npos) {
				data->searchChange(wbf, mbf + line);
				//cout << "HERE" << wbf << "HERE" << "\n";
				//cout << mbf + line << "\n";
				continue;
			}
			else {
				data->insert(wd, line);
				wbf = wd;
				mbf = line;
				this->NoOfwords++;
			}
		}
		else {
			data->insert(wd, line);
			wbf = wd;
			mbf = line;
			this->NoOfwords++;
		}
		//if (this->NoOfwords == 100) break;
	}
	//cout << "Successfully Loading Dictionary." << "\n";
	fileIn.close();
	return true;
}
bool Dictionary::lookUpWord(const string &word, string &mean) {
	if (data->lookUp(word, mean)) {
		//cout << "\n" << mean << "\n";
		return true;
	}
	//cout << "Sorry we did not found this word." << "\n";
	return false;
}
bool Dictionary::addNewWord(const string &newWord, const string &mean) {
	data->insert(newWord, mean);
	//cout << "\n" << "Successfully add this word." << "\n";
	return true;
}
bool Dictionary::changeMeaningofWord(const string &word, string &newMean) {
	if (data->searchChange(word, newMean)) {
		//cout << "\n" << "Successfully change this word meaning." << "\n";
		return true;
	}
	//cout << "\n" << "Sorry we did not found this word." << "\n";
	return false;
}

bool Dictionary::deleteWord(const string &word) {
	if (data->remove(word)) {
		//cout << "\n" << "Successfully remove this word." << "\n";
		return true;
	}
	//cout << "\n" << "Sorry we did not found this word." << "\n";
	return false;
}

bool Dictionary::saveDictionary(const string &fileName) {
	ofstream fileOut(fileName);
	for (int i = 0; i < P; i++) {
		llnode* temp = data->htable[i].head;
		while (temp != NULL) {
			fileOut << temp->meaning << "\n";
			temp = temp->next;
		}
	}
	fileOut.close();
	//cout << "Successfully save to file " << fileName << "\n";
	return true;
}
/*
void Dictionary::implement() {
	int option;
	std::chrono::time_point<std::chrono::system_clock> start, end;
	std::chrono::duration<double> elapsed_seconds;
	do {
		cout << "\n" << "1. Look Up For A Word : " << "\n";
		cout << "2. Add New Word : " << "\n";
		cout << "3. Change Meaning Of A Word : " << "\n";
		cout << "4. Delete A Word : " << "\n";
		cout << "5. Save Dictionary to Text File : " << "\n";
		cout << "6. Exit. " << "\n" << "\n";
		cout << "Your choice : ";
		cin >> option;
		cout << "\n";
		if (option == 1) {
			char word[50];
			string mean;
			cout << "Enter the word you want to search for : " << "\n";
			cout << "The available word are Good, Dual carriageway, ....(upcase at the first character, there is a blank if the word includes more than 2 single word...)" << "\n";
			cout << "Word : ";
			scanf_s("\n");
			gets_s(word, 50);
			start = std::chrono::system_clock::now();
			this->lookUpWord(word, mean);
			end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			cout << "\n" << "Time taken to search for this word is : " << elapsed_seconds.count() << "s \n";
		}
		else if (option == 2) {
			char word[50];
			char mean[50];
			cout << "Enter the word you want to add : ";
			scanf_s("\n");
			gets_s(word, 50);
			cout << "Enter the meaning of that word : ";
			gets_s(mean, 50);
			start = std::chrono::system_clock::now();
			this->addNewWord(word, mean);
			end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			cout << "\n" << "Time taken to add this word is : " << elapsed_seconds.count() << "s \n";
		}
		else if (option == 3) {
			char word[50];
			char mean[50];
			cout << "Enter the word you want to change the meanings : ";
			scanf_s("\n");
			gets_s(word, 50);
			cout << "Enter the new meanings of this word : ";
			gets_s(mean, 50);
			string mean2 = mean;
			start = std::chrono::system_clock::now();
			this->changeMeaningofWord(word, mean2);
			end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			cout << "\n" << "Time taken to change the meaning of this word is : " << elapsed_seconds.count() << "s \n";
		}
		else if (option == 4) {
			char word[50];
			cout << "Enter the word you want to delete from dictionary : ";
			scanf_s("\n");
			gets_s(word, 50);
			start = std::chrono::system_clock::now();
			this->deleteWord(word);
			end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			cout << "\n" << "Time taken to delete this word is : " << elapsed_seconds.count() << "s \n";
		}
		else if (option == 5) {
			char filename[50];
			cout << "Enter you output file (for example: 'output.txt') : ";
			scanf_s("\n");
			gets_s(filename, 50);
			start = std::chrono::system_clock::now();
			this->saveDictionary(filename);
			end = std::chrono::system_clock::now();
			elapsed_seconds = end - start;
			cout << "\n" << "Time taken to save this dictionary is : " << elapsed_seconds.count() << "s \n";
		}

	} while (option != 6);
}
*/
