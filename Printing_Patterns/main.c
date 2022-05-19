#include <stdio.h>
#include <unistd.h>

int get_smalest_distance_to_border(int dimension, int row, int col)
{
    int smallest;

    smallest = row - 0;

    if (smallest > dimension - row)
    {
        smallest = dimension -row;
    }

    if (smallest > col - 0)
    {
        smallest = col - 0 ;
    }

    if (smallest > dimension - col)
    {
        smallest = dimension - col;
    }
    return smallest;
}

int main(void)
{

    int num_input;
    int dimension_sqare;
    int row;
    int col;
    int distance;


    row = 0;
    col = 0;

    printf("Gebe EINE Zahl ein.\n");
    scanf("%d", &num_input);
    dimension_sqare = 2 * num_input - 1;

    printf("\nMATRIX:\n");
    while (row < dimension_sqare)
    {
        col = 0;
        while(col < dimension_sqare)
        {
            distance = num_input - get_smalest_distance_to_border(dimension_sqare - 1, row, col);
            printf("%d ", distance);
            if(col == (dimension_sqare - 1))
            {
                printf("\n");
            }
            col++;
        }
        row++;
    }
    return 0;
}
