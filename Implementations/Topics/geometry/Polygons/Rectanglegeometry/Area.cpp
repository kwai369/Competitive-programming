/* 
 * Description : Finding area of rectangle.
 * Source : USACO guide.
 */

long long area(int bl_x, int bl_y, int tr_x, int tr_y) {
	  long long length = tr_y - bl_y;
	  long long width = tr_x - bl_x;
	  return length * width;
}
