#include <stdio.h>
#include <unistd.h>

int get_smalest_distance_to_border(int dimension, int row, int col)
{
    int smallest;

    smallest = row - 0;

    if (smallest > dimension - row)
    {
        smallest = dimension -row;
    }else if (smallest > col - 0)
    {
        smallest = col - 0 ;
    }else if (smallest > dimension - col)
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


    row = 0;
    col = 0;

    printf("Gebe EINE Zahl ein.\n");
    scanf("%d", &num_input);
    dimension_sqare = 2 * num_input - 1;

    while (row < num_input)
    {
        col = 0;
        while(col < num_input)
        {
            //printf("%d ", get_smalest_distance_to_border(num_input, row, col));
            write(1, 'c', 1);
            if(col == dimension_sqare - 1)
            {
                printf("\n");
            }
            col++;
        }
        row++;
    }
    return 0;
}
