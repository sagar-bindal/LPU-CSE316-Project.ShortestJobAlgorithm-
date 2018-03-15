#include<stdio.h>
#include<unistd.h>
struct process
{
    int pid;
    float AT;
    float BT;
    float WT;
    float priority;
};
int main()
{
    printf("\n ************************* SHORTEST JOB SCHEDULING ALLGORITHM PROJECT ***********************************");
    printf("\n\n\n enter the number of processes you want to schedule :  ");
    int number;
    scanf("%d",&number);
    struct process proc[number];
    
    printf("\n enter the burst time of the processes \n");
 
    for(int i=0;i<number;i++)
    {
        printf("\n enter the burst time for the %d process  :  ",i);
        scanf("%f",&proc[i].BT);
    }
}