//left_recursion.cpp
/*
T->T*F|F
GRAMMAR IS : T->T*F|F
Grammar without left recursion:
        T->FT'
        T'->*FT'|e
*/
#include <bits/stdc++.h>
using namespace std;
void solve()
{
   string production;

    while (cin >> production)
    {
        char non_terminal, beta, alpha, sym;
        int index = 3;

        cout << "GRAMMAR IS : " << production << endl;
        non_terminal = production[0];
        if (non_terminal == production[index])
        {
            sym = production[index + 1];
            alpha = production[index + 2];
            while (production[index] != 0 && production[index] != '|')
            {
                index++;
            }

            if (production[index] != 0)
            {
                beta = production[index + 1];
                printf("Grammar without left recursion:\n");
                printf("\t%c->%c%c\'", non_terminal, beta, non_terminal);
                printf("\n\t%c\'->%c%c%c\'|e\n", non_terminal, sym, alpha, non_terminal);
            }
            else
                printf(" can't be reduced\n");
        }
        else
            printf(" is not left recursive.\n");
        index = 3;
    }

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*

*/
