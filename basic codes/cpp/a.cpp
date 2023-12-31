# define ll long long int
long prison(int n, int m, vector<int> h, vector<int> v) {
   vector<bool> direction_x(n + 1);
   vector<bool> direction_y(m + 1);
    for(ll i : h){
         direction_x[i] = true;
    }
    for(ll i : v) {
        direction_y[i] = true;
    }
    
    ll max_xi = 0, max_yi = 0;
    
    for (ll i = 1, j = 0; i <= n; i++) {
        if (!direction_x[i]) {
            j = 0;
        }
        else {
            max_xi = max(max_xi, ++j);
        }
    }
    for (ll i = 1, j = 0; i <= m; i++) {
        if (!direction_y[i]) {
            j = 0;
        }
        else {
            max_yi = max(max_yi, ++j);
        }
    }
    return (max_xi + 1) * (max_yi + 1);
 }