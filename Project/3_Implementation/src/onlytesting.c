#include "../header/onlytesting.h"

int map(int x, int in_min_range, int in_max_range, int out_min_range, int out_max_range){ 
	float scale,A,B,C,D,offset,p,q,div; int ans;
	p = x;
	A = in_min_range;
	B = in_max_range;
	C = out_min_range;
	D = out_max_range;
	scale = B-A ;
	offset = D-A;
	div = scale/offset;
	div = floor(div);
	q = floor(p/div);
ans = q;
return ans;

}