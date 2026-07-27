#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Rectangle{
	ll x1, y1, x2, y2;
};

ll intersect(Rectangle a, Rectangle b){
	ll x = max(0LL, min(a.x2, b.x2) - max(a.x1, b.x1));
	ll y = max(0LL, min(a.y2, b.y2) - max(a.y1, b.y1));
	return x*y;
}

ll intersect(Rectangle a, Rectangle b, Rectangle c){
	ll x = max(0LL, min(min(a.x2, b.x2), c.x2) - max(max(a.x1, b.x1), c.x1));
	ll y = max(0LL, min(min(a.y2, b.y2), c.y2) - max(max(a.y1, b.y1), c.y1));
	return x*y;
}

int main() {
	Rectangle w, b1, b2;
	cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
	cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
	cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;
	ll ar = (w.x2 - w.x1) * (w.y2 - w.y1);
	ar -= intersect(w, b1);
	ar -= intersect(w, b2);
	ar += intersect(w, b1, b2);
	ar > 0 ? cout << "YES" : cout << "NO";
	return 0;
}
