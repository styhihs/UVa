#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int head[20001], knight[20001];
	int n, m, i, j, cost;
	
	while(scanf("%d %d", &n, &m) && n && m) {
		for(i = 0; i < n; i++)
			scanf("%d", &head[i]);
		for(i = 0; i < m; i++)
			scanf("%d", &knight[i]);
			
		sort(head, head + n);
		sort(knight, knight + m);
		
		cost = 0;
		i = 0;	// head to be chopped off
		for(j = 0; j < m && i < n; j++) {
			if(knight[j] >= head[i]) {
				cost += knight[j];
				i++;
            }
		}
		
		if(i == n)
            printf("%d\n", cost);
        else
            printf("Loowater is doomed!\n");
	}
	
	return 0;
}
