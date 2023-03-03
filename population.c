#include <cs50.h>
#include <stdio.h>

int get_ys (int start, int end)
{
    int curr = start;
    int born, d;
    int years = 0;
    do
    {
        born= curr/3;
        d= curr/4;
        curr = curr + born - d;
        years++;
    }
    while (curr<end);
    return years;
}

int main(void)
{
    // TODO: Prompt for start size
    int start = get_int("start size: \n");
    while (start<9)
    {
       start= get_int("enter value, which cannot be less than 9: \n");
    }

    // TODO: Prompt for end size
   int end = get_int("end size: \n");
    while (end<start)
    {
        end = get_int("end size cannot be lower than start size, please enter values again: \n");
    }
    // TODO: Calculate number of years until we reach threshold
    if (end == start)
    printf ("Years=0\n");
    else
    printf ("Years=%i\n", get_ys(start,end));
    // TODO: Print number of years

}
