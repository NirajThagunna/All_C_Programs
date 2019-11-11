/*program for to print the multiplication table*/
#define COLMAX 10
#define ROWMAX 1000
int main()
{
    int row,column,y;
    row=1;
    printf("MULTIPLICATION TABLE \n");
    printf("------------------------------------------------------------------- \n");
    do /*..............Outer loop begins........*/
    {
        column = 1;
        do /*..........Inner loop begins.........*/
        {
            y=row*column;
            printf("%4d",y);
            column=column+1;
        }
        while(column<=COLMAX);  /*.......Inner loop ends......*/
        printf("\n");
        row=row+1;
    }
    while(row<=ROWMAX); /*.............Outer loop ends..........*/
    printf("--------------------------------------------------------------------- \n");
}
