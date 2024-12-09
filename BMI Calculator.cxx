#include <stdio.h>
/* I'm Md. Mahmudul Hasan Mabud.
8 and 9th December 2024, at 12:28 am. i finished my simple practice project BMI calculator  */

int main() {
    
    //input part
    
    int feet,inc,weight,hight;
    float meter,sqr,bmi;
    printf("write your hight s feet :");
    scanf("%d",&feet);
    printf("write your hight s inc :");
    scanf("%d",&inc);
    printf("write your weight :");
    scanf("%d",&weight);
    
    //calculating part
    
    hight = feet * 12 + inc;
    meter = hight * 0.0254;
    sqr = meter * meter;
    bmi = weight / sqr;
    
    printf("Your BMI is %.1f\n",bmi);
    
    // message part
    
    if(18.5<=bmi) {
        if(24.9>=bmi) {
            printf("normal");
        }
        else if (29.9>= bmi) {
            printf("over weight");
        }
        else {
        printf("obesity");
        }
    }
    else {
        printf("under weight");
    }
    
    return 0;
}
