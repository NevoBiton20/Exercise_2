#include "my_mat.h"
#include <stdio.h>



void assignValue(int mat[10][10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}

int isRoute(int i,int j,int mat[10][10])//maybe change func type to double
{
    if(mat[i][j]==FALSE)
    {
        return FALSE;
    }
    return TRUE;
}

void firstInit(int mat[10][10])
{
    for(int i=0;i<10;i++)//Puts zeros in the main diagonal
    {
        mat[i][i]=0;
    }

    for(int k=0;k<10;k++) //Puts double max value (instead of infinity) in all vertices that don't have one connecting edge
    {
        for(int j=0;j<10;j++)
        {
            if(mat[k][j]==0 && j!=k)
            {
                mat[k][j] = __INT_MAX__;
            }
        }
    }
}

void shortestPathMatrix(int mat[10][10])
{//shortestPathMatrix change the weight matrix to matrix that for every place [i][j] holds the shortest path between the vertices i and j
    firstInit(mat);
    for(int k=0;k<10;k++)
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(mat[i][k]!=__INT_MAX__ && mat[k][j]!=__INT_MAX__ && mat[i][j] > mat[i][k] + mat[k][j]])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
}
int shortestPath(int i, int j, int mat[10][10])//maybe change func type to double
{//returns the shortest path between the vertices i and j
    shortestPathMatrix(mat);
    return mat[i][j];
}
