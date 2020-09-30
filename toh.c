include <stdio.h>
void towerOfHanoi(int,char,char,char);
main()
{
    int n;
    printf("Enter no of disks\n");
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');
}
