//1712822 - Nguyen Khanh Toan - 17CNTN
#ifndef  MY_DICTIONARY
#define MY_DICTIONARY
#define _CRT_SECURE_NO_WARNINGS
#include"HashTable.h"
#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
#include<vector>
#include<chrono>
#include<ctime>

using namespace std;

class Dictionary {
public:
	HashTable* data;
	int NoOfwords;
public:
	Dictionary() {
		data = new HashTable;
		NoOfwords = 0;
	}
	~Dictionary() {
		delete data;
	}
public:
	bool loadDictionary(const string &fileName);
	bool lookUpWord(const string &word, string &mean);
	bool addNewWord(const string &newWord, const string &mean);
	bool changeMeaningofWord(const string &word, string &newMean);
	bool deleteWord(const string &word);
	bool saveDictionary(const string &fileName);
	//void implement();
};
#endif // ! MY_DICTIONARY
