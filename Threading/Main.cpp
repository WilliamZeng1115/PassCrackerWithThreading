#include <iostream>
#include <string>
#include <mutex>
#include <vector>

using namespace std;

static const int MAX_WORDS = 10;
static const int MIN_WORDS = 0;
static const char typeOfCase[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
static const int sizeOfCase = sizeof(typeOfCase) / sizeof(typeOfCase[0]);

string answer = "sfmdd";
bool found = false;

mutex mu;
condition_variable full;
condition_variable none;
string foundWord = "";
vector<string> words;
int test = 0;
int count1 = 0, count2 = 0, count3 = 0;

void producerGenerate(string text) {
	unique_lock<std::mutex> lock(mu);
	while (words.size() == MAX_WORDS)
		full.wait(lock);
	words.push_back(text);
	none.notify_one();
}

void* producer1() {
	int length = 1;
	char temp[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m' };
	int tempSize = sizeof(temp) / sizeof(temp[0]);

	char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8;
	int y = 0;
	int x = 0;
	int n = 0;
	int m = 0;
	int k = 0;
	int j = 0;
	int i = 0;
	int q = 0;

	string generatedText = "";

	goto LOOP1;
	// first text
	for (y = 0; y < sizeOfCase; y++) {
		temp1 = typeOfCase[y];

		// second text
		for (x = 0; x < sizeOfCase; x++) {
			temp2 = typeOfCase[x];

			// third text
			for (n = 0; n < sizeOfCase; n++) {
				temp3 = typeOfCase[n];

				// forth text
				for (m = 0; m < sizeOfCase; m++) {
					temp4 = typeOfCase[m];

					// fifth text
					for (k = 0; k < sizeOfCase; k++) {
						temp5 = typeOfCase[k];

						// 6th text 
						for (j = 0; j < sizeOfCase; j++) {
							temp6 = typeOfCase[j];

							// 7th text
							for (i = 0; i < sizeOfCase; i++) {
								temp7 = typeOfCase[i];

							LOOP1:
								for (q = 0; q < tempSize; q++) {
									temp8 = temp[q];

									if (!found) {
										switch (length) {
										case 1:
											generatedText = temp8;
											break;
										case 2:
											generatedText = string() + temp8 + temp7;
											break;
										case 3:
											generatedText = string() + temp8 + temp7 + temp6;
											break;
										case 4:
											generatedText = string() + temp8 + temp7 + temp6 + temp5;
											break;
										case 5:
											generatedText = string() + temp8 + temp7 + temp6 + temp5 + temp4;
											break;
										case 6:
											generatedText = string() + temp8 + temp7 + temp6 + temp5 + temp4 + temp3;
											break;
										case 7:
											generatedText = string() + temp8 + temp7 + temp6 + temp5 + temp4 + temp3 + temp2;
											break;
										case 8:
											generatedText = string() + temp8 + temp7 + temp6 + temp5 + temp4 + temp3 + temp2 + temp1;
											break;
										default:
											goto END;
											break;
										}
									}
									else goto END;

									producerGenerate(generatedText);
									
								}

								if (length == 1)
									length++;
							}
							if (length == 2)
								length++;
						}
						if (length == 3)
							length++;
					}
					if (length == 4)
						length++;
				}
				if (length == 5)
					length++;
			}
			if (length == 6)
				length++;
		}
		if (length == 7)
			length++;
	}

END:
	return NULL;
}

void* producer2() {
	int length = 1;
	char temp[] = { 'n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int tempSize = sizeof(temp) / sizeof(temp[0]);

	char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8;
	int y = 0;
	int x = 0;
	int n = 0;
	int m = 0;
	int k = 0;
	int j = 0;
	int i = 0;
	int q = 0;

	string generatedText = "";

	goto LOOP1;
	// first text
	for (y = 0; y < sizeOfCase; y++) {
		temp1 = typeOfCase[y];

		// second text
		for (x = 0; x < sizeOfCase; x++) {
			temp2 = typeOfCase[x];

			// third text
			for (n = 0; n < sizeOfCase; n++) {
				temp3 = typeOfCase[n];

				// forth text
				for (m = 0; m < sizeOfCase; m++) {
					temp4 = typeOfCase[m];

					// fifth text
					for (k = 0; k < sizeOfCase; k++) {
						temp5 = typeOfCase[k];

						// 6th text 
						for (j = 0; j < sizeOfCase; j++) {
							temp6 = typeOfCase[j];

							// 7th text
							for (i = 0; i < sizeOfCase; i++) {
								temp7 = typeOfCase[i];

							LOOP1:
								for (q = 0; q < tempSize; q++) {
									temp8 = temp[q];

									if (!found) {
										switch (length) {
										case 1:
											generatedText = temp8;
											break;
										case 2:
											generatedText = string() + temp8 + temp7;
											break;
										case 3:
											generatedText = string() + temp8 + temp7 + temp6;
											break;
										case 4:
											generatedText = string() + temp8 + temp7 + temp6 + temp5;
											break;
										case 5:
											generatedText = string() + temp8 + temp7 + temp6 + temp5 + temp4;
											break;
										case 6:
											generatedText = string() + temp8 + temp7 + temp6 + temp5 + temp4 + temp3;
											break;
										case 7:
											generatedText = string() + temp8 + temp7 + temp6 + temp5 + temp4 + temp3 + temp2;
											break;
										case 8:
											generatedText = string() + temp8 + temp7 + temp6 + temp5 + temp4 + temp3 + temp2 + temp1;
											break;
										default:
											goto END;
											break;
										}
									}
									else goto END;

									producerGenerate(generatedText);

								}

								if (length == 1)
									length++;
							}
							if (length == 2)
								length++;
						}
						if (length == 3)
							length++;
					}
					if (length == 4)
						length++;
				}
				if (length == 5)
					length++;
			}
			if (length == 6)
				length++;
		}
		if (length == 7)
			length++;
	}
END:
	return NULL;

}

void consumer() {

	unique_lock<std::mutex> lock(mu);
	while (words.size() == 0)
		none.wait(lock);
	string temp = words.back();
	//cout << temp << endl;
	words.pop_back();
	if (temp == answer) {
		found = true;
		foundWord = answer;
	}
	full.notify_one();

}


void* consumers() {
	while (!found) {
		consumer();
	}
	return NULL;
}


int main() {
	thread t1(producer1);
	thread t2(producer2);
	thread t3(consumers);

	t1.join();
	t2.join();
	t3.join();

	cout << "The input string is " << answer << endl;

	if (found) 
		cout << "The found string is " << foundWord << endl;
	else cout << "Could not find. . ." << endl;

	cout << "Press any key to continue. . ." << endl;
	int i;
	cin >> i;
	return 0;
}