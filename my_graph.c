#include <stdio.h>
#include "my_mat.h"

int mat[10][10];

int main()
{
    int hasAssignedValues=0; //making sure the user assigns values to the matrix once to use funcs B and C
    char func; //func (Can be A,B,C,D,EOF)
    do{
        
        scnaf("%c",&func);

        switch (func)
        {
        case 'A'://assign values
            assignValue(mat);
            hasAssignedValues=1;
            break;

        case 'B'://is route
            if(hasAssignedValues==1)
            {
                int i=0;
                int j=0;
                scanf("%d",&i);
                scanf("%d",&j);
                isRoute(i,j,mat);
            }
            break;

        case 'C'://shortest path
                int i=0;
                int j=0;
                scanf("%d",&i);
                scanf("%d",&j);
                shortestPath(i,j,mat);
            break;
        }
    }
    while(func !='D');

    return 0;
}