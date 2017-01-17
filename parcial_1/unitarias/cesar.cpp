// cesar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readDiccionaryFile(char received[100]);

void readEncryptedFile() {
	ifstream file;
	file.open("encriptado.txt");
	if (!file.is_open()) return;

	char word[100];

	file >> word;

	for (int i = 0; i <= 5; i++) {
		word[i] += 32;
	}

	readDiccionaryFile(word);

	//cout << word << '\n';
}

void readDiccionaryFile(char received[100]) {
	ifstream file;
	file.open("diccionario.txt");
	if (!file.is_open()) return;

	char word[100];

	while (file >> word) {
		for (int n = 0; n < 26; n++) {
			for (int i = 0; i <= 5; i++) {
				if (received[i] >= 'a' && received[i] <= 'z') {
					if (received[i] + n > 'z') {
						received[i] = 'a' - 'z' + received[i] + n - 1;
					}
					else if (received[i] + n < 'a') {
						received[i] = 'z' - 'a' + received[i] + n + 1;
					}
					else {
						received[i] += n;
					}
					//cout << received << endl;
				}
			}
			//cout << word << endl;
			//cout << received << endl;
			if (strcmp(received, word) == 0) {
				cout << "la palabra es: " << received << " = " << word << endl;
			}
		}
	}
}

int main() {
	readEncryptedFile();
	return 0;
}