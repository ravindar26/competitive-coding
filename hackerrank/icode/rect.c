#include<stdio.h>

 
struct Point
{
    int x, y;
};
 
Point l1,r1,l2,r1;
bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
    if (l1.x > r2.x || l2.x > r1.x)
        return false;
    if (l1.y < r2.y || l2.y < r1.y)
        return false;
    return true;
}
 
int main()
{
	//Point l1,r1,l2,t2;
	scanf("%d%d%d%d",&l1.x,&l1.y,&r1.x,&r1.y);
        scanf("%d%d%d%d",&l2.x,&l2.y,&r2.x,&r2.y);
	if (doOverlap(l1, r1, l2, r2))
		 printf("overlap");
	else
		printf("no overlap");
    return 0;
}
