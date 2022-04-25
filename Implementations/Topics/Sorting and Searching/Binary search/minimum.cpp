/**
 * Description : Binary search for minimum value of x.
 * Source : USACO guide.
 */

int binary_search(){
  int l = -1,r = n;
	while (l < r) {
    int mid = l + (r - l)/2;
    if (f(mid)){ /* Here f(x) checks the validity of x it returns true if x is valid otherwise false.*/
      r = mid;
    }
    else {
			l = mid + 1;
		}
  }
  return l;
}
