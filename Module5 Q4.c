Program to enter two point and then calculate the distance between them using structure.
Code:
#include<stdio.h>
#include<math.h>
struct Point
{
    int x;
    int y;
}p1,p2;
int main()
{
    float distance;
    printf("\nEnter the coordinates of point 1:\n");
    scanf("%d %d",&p1.x,&p1.y);
    printf("\nEnter the coordinates of point 2:\n ");
    scanf("%d %d",&p2.x,&p2.y);
    distance=0;
    distance=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    printf("\nDistance between the points:%.4f\n",distance);
    return 0;
}
