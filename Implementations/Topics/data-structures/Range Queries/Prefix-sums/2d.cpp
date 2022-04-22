/* 
 * Description : Calculating sum of rectangles in constant time.
 * Source : USACO guide.
 */

ll prefix(){
	  // Calculates prefix sum array.
    for(int i=1;i<=N;i++){
		  for(int j=1;j<=M;j++){
			  pref[i][j] = vec[i][j] + pref[i-1][j]
						  + pref[i][j-1] - pref[i-1][j-1];
		  }
	  }
    // gives the sum of rectangles.
	  return pref[X2][Y2] - pref[X1-1][Y2] 
			    - pref[X2][Y1-1] + pref[X1-1][Y1-1];
}
