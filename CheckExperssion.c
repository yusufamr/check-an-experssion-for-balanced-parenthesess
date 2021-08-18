#include "CheckExperssion.h"
/*
 *[Function name]:Check_experssion
 *[description]: responsible for check if sentence is balance of brackets or not
 */
sint8 Check_experssion(uint8 *Data)
{
    uint8 i=0;
    uint8 temp;

    while(Data[i]!='\0')
        {   // if char is { or ( then we push it
            if(Data[i]=='{'||Data[i]=='(')
                {

                    push(Data[i]);

                }
            // if data is } or ) then we compare it with last element in stack
            else if(Data[i]=='}'||Data[i]==')')
            {
                temp=pop();

                if(!isMatching(temp,Data[i]))
                    return -1;
            }
            // if data is anything other than this do nothing
            i++;
        }
        return 1;
}
/*
 *[Function name]:isMatching
 *[description]: responsible for check if { and } or ( and ) is balanced or not
 */
uint8 isMatching(uint8 char1, uint8 char2)
{
    if (char1 == '(' && char2 == ')')
        return 1;
    else if (char1 == '{' && char2 == '}')
        return 1;
    else
        return 0;
}
