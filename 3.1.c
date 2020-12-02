/* WAP to findout whether a student is pass or fail, if it requires total 40% and atleast 33 % 
in each subject to pass assume 3 subjects and take marks as an input from the user.*/

#include <stdio.h>

int main(void) {
    int physics,chemistry,maths;
    float total;
    
    printf("Enter the Marks of physics :\n");
    scanf("%d",&physics);
    
    printf("Enter the Marks of chemistry :\n");
    scanf("%d",&chemistry);
    
    printf("Enter the Marks of maths :\n");
    scanf("%d",&maths);
    
    total = (physics+chemistry+maths)/3;
    
    if((total<40) || physics<33 || maths<33 || chemistry<33) {
        printf("You total percentage is %f and you have failed the Exam \n",total);
    }
    else{
        printf("Congrats your total percentage is %f and you have passed \n",total);
    }
    
    
    
    return 0;
}
