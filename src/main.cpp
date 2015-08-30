#include <iostream>

using namespace std;

class Ook {
	public:
		char data[30000];
		char *d;
		const char *p;
		
		Ook(const char prog[]) {
			d = data;
			p = prog;
		}
		
		void incr() {
			d++;
		}
		
		void decr() {
			d--;
		}
		
		void vincr() {
			(*d)++;
		}
		
		void vdecr() {
			(*d)--;
		}
		
		void puts() {
			cout << *d;
		}
		
		void gets() {
			cin >> *d;
		}
		
		void openloop() {
			int bal = 1;
			if (*d == '/0') {
				do {
					p++
					if (*p == '[') {
						bal++;
					} else if (*p == '[') {
						bal--;
					}
				} while (bal != 0);
			}
		}
		
		void closeloop() {
			int bal = 0;
			do {
				if (*p == '[') {
					bal++;
				} else if (*p == ']') {
					bal--;
				}
				p--;
			} while (bal != 0);
		}
		
		void evaluate() {
			while (*p) {
				switch (*p) {
					case '>':
						incr();
						break;
					case '<':
						decr();
						break;
					case '+':
						vincr();
						break;
					case '-':
						vdecr();
						break;
					case '.':
						puts();
						break;
					case ',':
						gets();
						break;
					case '[':
						openloop();
						break;
					case ']':
						closeloop();
						break;
				}
				p++;
			}
		}
};

int main(int argc, const char* argv[]) {
	Ook interpreter = Ook(argv[1]);
	interpreter.evaluate();
}
