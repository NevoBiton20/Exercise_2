#include <stdio.h>
#include "my_mat.h"

int mat[10][10];

int main()
{
    int hasAssignedValues=0; //making sure the user assigns values to the matrix once to use funcs B and C
    char func='A'; //func (Can be A,B,C,D,EOF)
    do{
        
        scanf("%s",&func);

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
                if(isRoute(i,j,mat)==TRUE)
                {
                    printf("%s\n","True");
                }
                else
                {
                    printf("%s\n","False");
                    
                }
            }
            break;

        case 'C'://shortest path
                int i=0;
                int j=0;
                scanf("%d\n",&i);
                scanf("%d\n",&j);
                if(isRoute(i,j,mat)==FALSE)
                {
                    printf("%d\n",-1);
                }
                else{
                   printf("%d\n",shortestPath(i,j,mat));
                }
            break;
        }
    }
    while(func !='D');

    return 0;
}
