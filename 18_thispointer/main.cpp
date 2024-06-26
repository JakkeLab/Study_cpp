#include <iostream>
#include "stock.h"

int main() {
	Stock s[4] = {
		Stock("A", 10, 1000),
		Stock("B", 20, 1200),
		Stock("C", 30, 1200),
		Stock("D", 40, 1200),
	};

	Stock *first = &s[0];
	for (int i = 0; i < 4; i++) {
		first = &first->topval(s[i]);
	}

	first->show();
	

    // Stock s1("A", 10, 1000);
	// Stock s2("B", 20, 1200);
	
	// s1.show();
	// s2.show();

	// cout << "A와 B중 share_val이 큰 객체는\n";
	// s1.topval(s2).show();
    
    return 0;
}