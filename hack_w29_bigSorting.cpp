#include <bits/stdc++.h>

using namespace std;

string::size_type sz; 

bool compare(string a, string b){
    long double p = 0;
    for(int i=0; i<a.size(); i++){
        p = (p * 10) + (a[i] - '0');
    }
    long double q = 0;
    for(int i=0; i<b.size(); i++){
        q = (q * 10) + (b[i] - '0');
    }
    return p < q;
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    sort(unsorted.begin(), unsorted.end(), compare);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cout << unsorted[unsorted_i] << endl;
    }
    return 0;
}

