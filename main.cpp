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
}
