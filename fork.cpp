#include<bits/stdc++.h>
using namespace std;
int main()
{
    printf( "[dad] pid %d\n", getpid() );

    for ( int i = 0; i < 3; i++ )
        if ( fork() == 0 )
        {
            // if else with constreaints on i
        }

    for ( int i = 0; i < 3; i++ )
        wait( NULL );
}
