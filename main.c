#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    int dice_rolls[100];
    int roll_value = 0;
    int sum = 0;
    int throws = 0;
    int score_list[6] = {0};
    // Your code goes here

    for (int i = 0; i < 100; i++)
    {
        roll_value = (rand() % 6) + 1;
        dice_rolls[i] = roll_value;
        score_list[roll_value-1] += 1;
        sum += roll_value;
        throws += 1;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",score_list[i]);
    }
    printf("%d\n", sum);
    printf("%.1f\n", (float)sum / throws);
    

    return 0;
}
