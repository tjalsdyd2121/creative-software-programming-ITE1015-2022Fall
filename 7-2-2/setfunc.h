#include <set>
using namespace std;

std::set<int> parseSet(const std::string& str);
void printSet(const std::set<int>&);
set<int> getIntersection(const set<int>& set0, const set<int>& set1);
set<int> getUnion(const set<int>& set0, const set<int>& set1);
set<int> getDifference(const set<int>& set0, const set<int>& set1);