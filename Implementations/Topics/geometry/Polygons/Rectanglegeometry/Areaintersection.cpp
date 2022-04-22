/* 
 * Description : Finding area of intersection.
 * Source : USACO guide.
 */

int inter_area(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

	return (
		(min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x)) 
		* (min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y))
	);
}
