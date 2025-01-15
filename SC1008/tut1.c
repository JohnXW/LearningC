#include <stdio.h>
#include <math.h>

int len(char string[]){
    int count = 0;
    while(string[count] != '\0') count++;
    return count--;
}

void q1(int a1, int b1, int c1, int a2, int b2, int c2){
    double ans1 = ((b2*c1)-(b1*c2))/((a1*b2)-(a2*b1));
    double ans2 = ((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1));
    printf("x = %0.2f & y = %0.2f\n",ans1, ans2);
}

void q2(char string[], int size){
    int digits=0, chars=0;
    for(int i=0; i<size; i++){
        int curr = string[i];
        if(curr>='0' && curr<='9') digits++;
        else if (curr>='a' && curr<='z') chars++;
    }
    printf("Digits: %d, Letters: %d\n", digits, chars);
}

void q3(int num){
    for(int i=0; i<num; i++){
        int curr = (i%3) + 1;
        for(int j=0; j<=i; j++){
            putchar('0'+curr);
        }
        putchar('\n');
    }
}

int factorial(int i){
    if(i==1) return 1;
    return i * factorial(i-1);
}

void q4(float x){
    float ans = 1;
    for(int i=1; i<=10; i++){
        ans += pow(x, i)/factorial(i);
    }
    printf("%.2f", ans);
}


int main(void){
    printf("Question 1\n");
    q1(1, 1, 1, 5, 7, 9);
    q1(1, 1, 2, 2, 3, 3);
    putchar('\n');

    printf("Question 2\n");
    char q2Input[] = "hello boy 1234 dfa  123";
    q2(q2Input, len(q2Input));
    putchar('\n');

    printf("Question 3\n");
    q3(7);
    putchar('\n');

    printf("Question 4\n");
    q4(-0.9);
    putchar('\n');
    return 0;
}