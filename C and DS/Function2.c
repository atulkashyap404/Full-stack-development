#include <stdio.h>
// int max_of_four(int a, int b, int c, int d);
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int ans;
    if(a>b)
    {
        ans=a;
        return ans;
    else if(b>c)
    {
        ans = b;
        return ans;
    }
    else if(c>d)
    {
        ans = c;
        return ans;
    }
    }
    else
    {
        ans = d;
        return ans;
    }
    return ans;
    
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}