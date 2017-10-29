	#include <bits/stdc++.h>
	using namespace std;
	int main() {
	  int t;
	  long long int r;
	  cin>>t;
	  for (int i=1; i<=t; i++) {
		scanf("%lld",&r);
		double s = float(4*r*r) + 0.25;
		printf("Case %d: %.2lf\n",i,s);
	  }
	}	
/*
https://ajish097.github.io/
This is an interesting problem which can be sovled with the help of some elementary level calculus. The whole idea is to use the concept of maximizing a function.

From thales theorem we know that the ∠CAB

is right angle.

By Pythagoras’s theorem,
BC2=AC2+AB2

After rearranging terms we get,
AB2=BC2−AC2(1)

Given,
s=AB2+AC(2) BC=2r(3)

Substiting (1) in (2) we get,
s=BC2−AC2+AC s=−AC2+AC+BC2(4)

Let AC=x
and as BC2 remains constant, let us replace it with c

.
s=−x2+x+c

Differentiating s
w.r.t to x

dsdx=−2x+1

Equating dsdx
to 0

to get the critical points.
−2x+1=0 x=12

Differentiating once again to check it the critical point is maximum or minimum,
ds2dx2=−2(5)

we know that if double differentiating a function at critical point gives negative value then the given function has local maximum at the critical point.

From (3) we know that BC=2r

and by putting the critical point from (5) in (4)

We finally arrive at the formula,
s=−0.52+0.5+4r2 s=4r2+0.25(6)

With this formula we can now finally convert this into code.*/
