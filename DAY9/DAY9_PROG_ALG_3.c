/*steps:
1. The values of various switch status and fault status of various switch are given
the array is also with size 3
2. using the  bitwise operation we can store the elements in the array index
also print the binary value of all the array 
3.Print the Array.
*/

#include <stdio.h>
int main() 
{
    int G_Msg_switchstatus_Byte[3], i;           //array declaration with 3 value index starts from 0 to 2
    //declaration of the varaiables  and declaration like swich cases or condition and conditon  
    int Fault_type1_switch = 0;                 
    int switch_buckle = 1;
    int switch_unbuckle = 2;
    int Fault_type2_switch = 3;
    int switch_0_status = Fault_type2_switch;   
    int switch_1_status = Fault_type1_switch;
    int switch_2_status = switch_unbuckle;
    int switch_3_status = switch_buckle;
    int switch_4_status = Fault_type2_switch;
    int switch_5_status = switch_unbuckle;
    int switch_6_status = switch_buckle;
    int switch_7_status = Fault_type1_switch;
    //using the bitwise operation performing the operation which has given in question
    G_Msg_switchstatus_Byte[0] = (0 | (switch_1_status << 0) | (switch_0_status << 2 ));  
    G_Msg_switchstatus_Byte[1] = (0 |(switch_2_status << 6) | (switch_3_status << 4) | (switch_4_status << 2) | (switch_5_status)); 
    G_Msg_switchstatus_Byte[2] = (0| (switch_6_status << 6) | (switch_7_status <<4));
    //after the perform the operation set particular bits with the switch status printing the values of each array index in decimal and binary form using the below logic
    printf("The elements of the array  G_Msg_switchstatus_Byte are :\n");
    for(i =0; i< 3; i++)
    {
        printf("The decimal value of index G_Msg_switchstatus_Byte[%d] is %d\n", i, G_Msg_switchstatus_Byte[i]);
        printf("The decimal value of index G_Msg_switchstatus_Byte[%d] is ", i);
        for(int j=7; j >=0; j--)
        {
            printf("%d ",(G_Msg_switchstatus_Byte[i] >> j) & 1 );
        }
        printf("\n");
    }
    return 0;
}
