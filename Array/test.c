#include <stdio.h>
float Percent_Calculator(int math, int phy, int chem, int eng, int hin)
{

    int total = math + phy + chem + eng + hin;
    return (total / 5.0);
}
int main()
{

    int math, phy, chem, eng, hin;

    math = 74, phy = 75, chem = 78, eng = 44, hin = 62;

    float percent = Percent_Calculator(math, phy, chem, eng, hin);

    if (percent >= 60)
    {
        printf("You have A grade !");
    }
    else if (percent >= 50 && percent <= 59)
    {
        printf("You have B grade !");
    }
    else if (percent >= 40 && percent <= 49)
    {
        printf("You have A grade !");
    }
    return 0;
}