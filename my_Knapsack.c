#include <stdio.h>

#define ITEMS 5
#define Mweigth 20
#define TRUE 1
#define FALSE 0

int result[ITEMS];

int max(int num,int num2)
{
    return num>num2 ? num : num2;
}




int knapSack(int weigths[], int values[], int selected_bool[])
{
    int table[ITEMS +1][Mweigth+1];

    for(int j=0;j<=ITEMS;j++)
    {
        for(int w=0;w<=Mweigth;w++)
        {
            if(j==0 || w==0)
            {
                table[j][w]=0;
            }
            else
            {
                if(weigths[j-1]<=w)
                {
                    table[j][w] = max(table[j-1][w], table[j-1][w-weigths[j-1]] + values[j-1]);
                }
                else{
                    table[j][w] = table[j-1][w];
                }
            }
        }
    }
    int j=ITEMS, w = Mweigth;
    while(j > 0 && w > 0)
    {
        if(table[j][w] != table[j-1][w])
        {
            selected_bool[j-1]=1;
            w-= weigths[j-1];
        }
        j--;
    }
    int maxValue=0;
    for(int i=0;i<ITEMS;i++)
    {
        if(selected_bool[i]==TRUE)
        {
            maxValue += values[i];
        }
    }
    return maxValue;
}


int main()
{
    int values[ITEMS];
    int weights[ITEMS];

    char item =0;

    for(int i=0; i<ITEMS ;i++)
    {
        scanf("%c",&item);

        switch (item)
        {
            case 'a':
                scanf("%d",&values[0]);
                scanf("%d",&weights[0]);
                break;
            case 'b':
                scanf("%d",&values[1]);
                scanf("%d",&weights[1]);
                
                break;
            case 'c':
                scanf("%d",&values[2]);
                scanf("%d",&weights[2]);
                break;
            case 'd':
                scanf("%d",&values[3]);
                scanf("%d",&weights[3]);
                break;
            case 'e':
                scanf("%d",&values[4]);
                scanf("%d",&weights[4]);
                break;
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d is weigth: %d and value: %d\n",i, weights[i],values[i]);
    }
    int selected[ITEMS];
    int maxProfit = knapSack(weights,values,selected);
    printf("Maximum profit: %d\n",maxProfit);
    printf("Items that give the maximum profit:");
    for(int i=0;i<ITEMS;i++)
    {
        if(selected[i]==TRUE)
        {
            printf(" %c",(i+97));
        }
    }
    return 0;
}
