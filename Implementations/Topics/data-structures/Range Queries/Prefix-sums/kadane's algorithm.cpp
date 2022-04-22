/* 
 * Description : Finding max sub-array sum.
 * Source : USACO guide.
 */

ll subarray(vl vec){
    ll current_sum = vec[0];
    ll ans = vec[0];
    for(int i = 1;i < sz(vec);i++){
        current_sum = max(current_sum+vec[i] , vec[i]);
        ans = max(ans , current_sum);
    }
    return ans;
}
