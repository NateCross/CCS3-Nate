#include<stdio.h>
#define size 5

//Nate Cruz 2021

/*
Provide the code for the removebias() function.
To achieve the removal of bias, the largest and smallest values from the array is removed from the calculation of the average of the judges' scores.
There are 5 judges scoring; after removing bias, only the average of the 3 remaining judges will be used. Note that the removebias() function will return the said average.
*/

float removebias(float s[]) {
    float highestScore = s[0], lowestScore = s[0], sum = s[0]; //Initializing these floats by giving it s[0] first to be manipulated. If it were 0, it wouldn't work.
    for (int counter = 1; counter < size; counter++) {
        sum += s[counter];
        if (s[counter] > highestScore)
            highestScore = s[counter];
        if (s[counter] < lowestScore)
            lowestScore = s[counter];
    }

    /*
    printf("Sum: %.2f \n", sum);
    printf("Highest score: %.2f \n", highestScore);
    printf("Lowest score: %.2f \n", lowestScore);
    */

    return (sum - highestScore - lowestScore) / (size - 2);
    /*
    Calculation of average. This is done by subtracting highest and lowest from the sum.
    I went with this solution because I feared having to make another loop to specifically remove the highest and lowest scores.
    It is then divided by the size of the remaining numbers. Since we subtracted 2 numbers, we subtract 2 from the size as well.
    */
}

main()
{
    int i;
    float scores[size],average;
    for (i = 0;i < size;i++)
    {
        printf("Enter score from judge%d: ",i + 1);
        scanf("%f",&scores[i]);
    }
    average = removebias(scores);
    for (i = 0;i < size;i++)
        printf("\nJudge%d: %.2f",i + 1,scores[i]);
    printf("\nAverage score after removing bias: %.2f",average);
}
