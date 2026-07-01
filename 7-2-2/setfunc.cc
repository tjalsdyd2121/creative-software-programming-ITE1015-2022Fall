#include "setfunc.h"
#include <iostream>



void printSet(const std::set<int>& q){
	std::cout << "{" << ' ';
	
	for (set<int>::iterator it = q.begin(); it != q.end(); it++) {
		std::cout << *it << ' ';
	}
	
	std::cout << "}" << "\n";
}


set<int> getIntersection(const set<int>& s1, const set<int>& s2) {
	set<int> s;
	
	for (set<int>::iterator it = s1.begin(); it!=s1.end(); it++){
		if (s2.find(*it) != s2.end()) {
			s.insert(*it);
		}
	}
	
	return s;
}




set<int> getUnion(const set<int>& s1, const set<int>& s2) {
	set<int> s;
	
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		if (s.find(*it) == s.end()) {
			s.insert(*it);
		}
	}
	
	for (set<int>::iterator it = s2.begin(); it != s2.end(); it++) {
		if (s.find(*it) == s.end()) {
			s.insert(*it);
		}
	}
	
	return s;
}

set<int> getDifference(const set<int>& s1, const set<int>& s2) {
	set<int> s3 = s1;
	
	set<int> intersection = getIntersection(s1, s2);
	
	for (set<int>::iterator it = intersection.begin(); it != intersection.end(); it++) {
		if (s3.find(*it) != s3.end()) {
			s3.erase(*it);
		}
	}
	
	return s3;
}