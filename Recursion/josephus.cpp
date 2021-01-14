#include <bits/stdc++.h>
using namespace std;

int josephusAlternate(int n, int k) // Space Complex: Theta(1)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position
       k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1;
}

int josephus(vector<int> &v, int k, int start) { // Space complex: Theta(N)
    if(v.size()==1)
        return v[0];
    int kill = (start+k-1)%v.size();
    v.erase(v.begin()+kill);
    start = kill%v.size();
    return josephus(v, k, start);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    vector<int> v;
	    for(int i=1; i<=n; i++)
	        v.push_back(i);
	    cout<<josephus(v, k, 0)<<endl;
	}
	return 0;
}