/**==================================
 | Author: YunHao
 | OJ: 
 | Kind: 
 | Date: 
 | Describe:
 |          
 |          
 =================================**/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;
typedef long long ll;

int main()
{
    ll a, b;
    while(~scanf("%lld%lld", &a, &b)){
        if(a==0&&b==0) break;
        printf("%lld\n", a+b);
    }
    return 0;
}
