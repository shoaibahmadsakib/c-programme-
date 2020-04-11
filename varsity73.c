#include <stdio.h>



int main()
{
    int length, width, area;
    printf("Enter the length : ");
    scanf("%d", &length);

    printf("Enter the width : ");
    scanf("%d", &width);

    area = rarea(length, width);

    printf("The area of the rectangle : %d", area);


}

int rarea(int length, int width)
{
    return length * width;
}
