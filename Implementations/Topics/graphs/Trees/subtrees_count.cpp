/** 
  * Description : Count the number of subtrees in a tree.
  * Source : CPH
  */

void dfs(int s, int e) {
    c[s] = 1;
    for (auto u : adj[s]) {
        if (u == e){ 
            continue;
        }
        dfs(u, s);
        c[s] += c[u];
    }
}
