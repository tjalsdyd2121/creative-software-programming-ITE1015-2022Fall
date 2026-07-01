#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include "setfunc.h"


int main() {
	string oper[3] = { "+" ,"*","-" }, input;
	while(1) {
		int flag = -1;

		getline(cin, input);


		set<int> left, right;
		stringstream stream;
		stream.str(input);
		string c;

		while (stream >> c && c != oper[flag]) {
			if (c != "{" && c != "}")
				left.insert(atoi(c.c_str()));
		}

		while (stream >> c) {
			if (c != "{" && c != "}")
				right.insert(atoi(c.c_str()));
		}

		set<int> q;
		if (index == 0) {
			q = getUnion(left, right);
		}
		else if (index == 1) {
			q = getIntersection(left, right);
		}
		else {
			q = getDifference(left, right);
		}
		printSet(q);
	}
	return 0;
	
}