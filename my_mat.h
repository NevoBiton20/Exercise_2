
#define TRUE 1
#define FALSE 0

/*assignValue is a function that with given 100 values stored in a matrix, assign them in the main matrix used for different actions*/
void assignValue(int mat[10][10]);

/*isRoute is a function that with given two indexes: i and j, returns 1 (TRUE) if there is a route between the vertices in our matrix and 0 (FALSE) otherwise*/
int isRoute(int i,int j,int mat[10][10]);

/*shortestPath is a function that with given two indexes: i and j, returns the weight costed iterating the Shortest Path between the vertices in our matrix.
if there is no route between those vertices, the function returns -1*/
int shortestPath(int i, int j, int mat[10][10]);