#include <stdio.h>
#include <algorithm>
using namespace std;

typedef struct job {
    int b, j;
} Job;


bool cmp(const Job &a, const Job &b)
{
    return a.j > b.j;
}

int main()
{
    Job jobs[1001];
    int n, i, ans, t, cnt = 1;
    
    while(scanf("%d", &n) && n) {
        for(i = 0; i < n; i++)
            scanf("%d %d", &jobs[i].b, &jobs[i].j);
        
        sort(jobs, jobs + n, &cmp);
        
        ans = t = 0;
        for(i = 0; i < n; i++) {
            t += jobs[i].b;
            ans = ((t + jobs[i].j) > ans) ? (t + jobs[i].j) : ans;
        }
        
        printf("Case %d: %d\n", cnt++, ans);
    }
    
    return 0;
} 
