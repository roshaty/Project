#include <stdio.h>

int calculatepercentage(int m, int h, int e, int s, int mt, int ss, int cs);

int main()
{
    int m ;
    int h ;
    int e ;
    int s ; 
    int mt ;
    int ss ;
    int cs;
    printf("enter marks: ");
    scanf("%d", &m);
    printf("enter marks: ");
    scanf("%d", &h);
    printf("enter marks: ");
    scanf("%d", &e);
    printf("enter marks: ");
    scanf("%d", &s);
    printf("enter marks: ");
    scanf("%d", &mt);
    printf("enter marks: ");
    scanf("%d", &ss);
    printf("enter marks: ");
    scanf("%d", &cs);
    printf("Percentage % : %d", calculatepercentage(m, h, e, s, mt, ss, cs));
    return 0;
}

int calculatepercentage(int m, int h, int e, int s, int mt, int ss, int cs)
{
    return ((m + h + e + s + mt +  ss + cs) / 7);
}
