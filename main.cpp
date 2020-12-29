#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, y;
    float dist;
    cin>>n;
    vector< pair<float, pair<int, int> > > A(n);
    vector< pair<float, pair<int, int> > >:: iterator it=A.begin();
    for (int i=0; i<n; i++){
        cin>>x>>y;
        dist = sqrt(x*x+ y*y);
        (*it).first=dist;
        (*it).second=make_pair(x, y);
        it++; }
    sort (A.begin(), A.end());
    cout<<endl;
    for(it = A.begin(); it<A.end(); it++) cout<<(*it).second.first<<" "<<(*it).second.second<<endl;
}
