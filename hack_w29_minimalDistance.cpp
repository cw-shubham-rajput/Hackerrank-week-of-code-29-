#include <bits/stdc++.h>

using namespace std;

int main(){
    long long min, max, n, d;
    cin >> min >> max;
    double pi = 3.141592653589793238, ans, ans1, ans2, min1 = 9999999;
    for(long long i = min; i <=max; i++){
        ans = i * pi;
        ans1 = ans - floor(ans);
        ans2 = ceil(ans) - ans;
        //cout << ans << " " << ans1 << " " << ans2 << endl;
        if(ans1 < ans2){
        	if(ans1 < min1)
        	{
        		min1 = ans1;
            	n = floor(ans);
            	d = i;
            	//cout << min1 << " " << n << " " << d << endl;
			}
        }
        else
        {
        	if(ans2 < min1)
        	{
        		min1 = ans2;
            	n = ceil(ans);
            	d = i;
            	//cout << min1 << " " << n << " " << d << endl;
            }
		}
    }
    cout << n << "/" << d << endl;
    return 0;
}

