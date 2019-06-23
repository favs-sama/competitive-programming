# include <bits/stdc++.h>

int main()
{
    int i = 1;
    int best = 1;
    int n;
    std::cin >> n;
    while (i <= n)
    {
        int f = (i << 2) | (i << 1);
        if (n % i == 0)
            best = std::max(i, best);
        i = f;
    }
    std::cout << best << std::endl;
}