#include <tuple>
std::tuple <int, int> calcGcd (int gn1, int gn2) {
	int retGres;
	static int gCallcnt = 0;
        gCallcnt++;	
	return gCallcnt, retGres = gn1 % gn2 == 0 ? gn2 : calcGcd (gn2, (gn1 % gn2));
}
