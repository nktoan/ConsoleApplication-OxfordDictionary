//1712822 - Nguyen Khanh Toan - 17CNTN
#ifndef MY_HASH_TABLE
#define MY_HASH_TABLE

#include<iostream>
#include<stdint.h>
#include<algorithm>
#include<functional>

using namespace std;

const int P = 100019;

struct llnode {
	string key;
	string meaning;
	struct llnode *next;
};

struct singlyLL {
	llnode *head;
	int countNode;

	singlyLL() {
		countNode = 0;
		head = NULL;
	}

	llnode* addList(const string &key, const string &meaning) { //add to head of linked list
		llnode* node = new llnode;
		node->key = key;
		node->meaning = meaning;
		node->next = head;
		head = node;
		countNode++;
		return head;
	}
	bool removeList(const string &key) {
		llnode* temp = head;
		llnode* prev = head;

		if (temp != NULL && temp->key == key) {
			head = temp->next;
			delete temp;
			countNode--;
			return true;
		}
		while (temp != NULL && temp->key != key)
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL) return false;
		prev->next = temp->next;
		delete temp;
		countNode--;
		return true;
	}
};

class HashTable {
public:
	singlyLL htable[P];
private:
	uint32_t FNV32(const string &s) { //Ham bam FNV32
		static const uint32_t FNV_PRIME_32 = 16777619;
		static const uint32_t FNV_OFFSET_32 = 2166136261;

		uint32_t hash = FNV_OFFSET_32, i;
		for (int i = 0; i < s.length(); i++) {
			hash = hash ^ (s[i]);  // hash = hash XOR s[i]
			hash *= FNV_PRIME_32; // hash = hash * (fixed prime)
		}
		return (hash % P);
	}
	uint32_t poly(const string &s, uint32_t base) { //Ham bam da thuc base = 311
		uint32_t ret = static_cast<uint32_t>(s[0]);
		for (size_t i = 1; i<s.length(); ++i) {
			ret += base*ret + static_cast<uint32_t>(s[i]);
		}
		return (ret % P);
	}
	size_t hashSTL(const string &s) {
		hash<string> hstr;
		return (hstr(s) % P);
	}
public:
	void insert(const string &key, const string &meaning) {
		uint32_t hkey = FNV32(key);

		//uint32_t hkey = poly(key,311);

		//size_t hkey = hashSTL(key);

		htable[hkey].head = htable[hkey].addList(key, meaning);
	}
	bool lookUp(const string &key, string &output) {
		uint32_t hkey = FNV32(key);

		//uint32_t hkey = poly(key, 311);

		//size_t hkey = hashSTL(key);

		llnode* lhead = htable[hkey].head;
		while (lhead != NULL) {
			if (lhead->key == key) {
				output = lhead->meaning;
				return true;
			}
			lhead = lhead->next;
		}
		return false;
	}
	bool searchChange(const string &key, const string &change) {
		uint32_t hkey = FNV32(key);

		//uint32_t hkey = poly(key, 311);

		//size_t hkey = hashSTL(key);

		llnode* lhead = htable[hkey].head;
		while (lhead != NULL) {
			if (lhead->key == key) {
				lhead->meaning = change;
				return true;
			}
			lhead = lhead->next;
		}
		return false;
	}
	bool remove(const string &key) {
		uint32_t hkey = FNV32(key);

		//uint32_t hkey = poly(key, 311);

		//size_t hkey = hashSTL(key);

		return htable[hkey].removeList(key);
	}
	//Kiem tra so luong tu dung do
	int countCollision(int &mx) {
		int cnt = 0;
		for (int i = 0; i < P; i++) {
			if (htable[i].countNode > 2) {
				cnt += (htable[i].countNode - 1);
				mx = max(mx, htable[i].countNode);
			}
		}
		return cnt;
	}

};
#endif // !MY_HASH_TABLE
