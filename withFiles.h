#pragma once
using namespace std;
class OpenRead
{
public:
	OpenRead() {};
	~OpenRead() {};
	virtual void Display(const char * path);
};


class OpenReadASCII:public OpenRead
{
public:
	OpenReadASCII() {};
	~OpenReadASCII() {};
	virtual void Display(const char * path) override;
};

class MyClass :public OpenRead
{
public:
	MyClass() {};
	~MyClass() {};
	virtual void Display(const char * path) override {
		FILE *f;
		fopen_s(&f, path, "a+");
		if (&f == nullptr) {
			perror("Error opening file");
		}
		else {
			char *t = new char[300];
			int cnt = 0;
			while (fgets(t, 300, f)) {
				for (int i = 0; i < strlen(t)+1; i++)
				{
					char buffer[33];
					_itoa_s(t[i], buffer, 2);
					printf("binary: %s\n", buffer);
				}
				
			}
			delete[]t;
		}

		cout << endl;
		fclose(f);
	}
};



inline void OpenRead::Display(const char * path)
{
	FILE *f;
	fopen_s(&f, path, "a+");
	if (&f == nullptr) {
		perror("Error opening file");
	}
	else {
		char t[300];
		while (fgets(t, 300, f))
			printf("%s", t);
	}
	cout << endl;
	fclose(f);
	//*(t + i) = *(s + 1);
	//string = NULL;
	//unsingnet int  capacity	= 0;
	//unsingnet int  n			= 0;
	//int s;
	//fgetc(stdin)
	//realloc(buffer, capacity * sizeof(char))
}

inline void OpenReadASCII::Display(const char * path)
{
	FILE *f;
	fopen_s(&f, path, "a+");
	if (&f == nullptr) {
		perror("Error opening file");
	}
	else {
		char *t = new char[300];
		int cnt = 0;
		while (fgets(t, 300, f)) {
			//printf("%s", ((int)t));
			cout << (int)t;
			cnt++;
			if(cnt==strlen(t)-250)
				t = (char*)realloc(t, (strlen(t)+1) * sizeof(int));
		}
		delete[]t;

	}
	cout << endl;
	fclose(f);
}
