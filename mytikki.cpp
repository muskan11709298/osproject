#include <stdio.h>
#include<windows.h>
int main() 
{
      int arrival_time[10], burst_time[10], temp[10];
      int i, smallest, count = 0, t, n;
      double wait_time = 0, turnaround_time = 0,completion_time;
      float average_waiting_time, average_turnaround_time,average_completion_time;
      printf("\nEnter the Total Number of Processes:\t");
      scanf("%d", &n); 
      printf("\nEnter Details of %d Processes\n", n);
      for(i = 0; i < n; i++)
      {
            printf("\nEnter Arrival Time:\t");
            scanf("%d", &arrival_time[i]);
            printf("Enter Burst Time:\t");
            scanf("%d", &burst_time[i]); 
            temp[i] = burst_time[i];
      }
      burst_time[3] = 100000; 
	  Sleep(3000);
      for(t=0; count != n; t++)
      {
            smallest = 3;
            for(i = 0; i <n; i++)
            {
                  if(arrival_time[i] <= t )
				  if( burst_time[i] < burst_time[smallest] && burst_time[i] > 0)
                  {
                        smallest = i;
                        
                  }
            }
            burst_time[smallest]--;
            if(burst_time[smallest] == 0)
            {
                  count++;
                  completion_time= t + 1;
                  wait_time = wait_time + completion_time - arrival_time[smallest] - temp[smallest];
                  turnaround_time = turnaround_time + completion_time- arrival_time[smallest];
            }
      }
    
      average_waiting_time = wait_time / n; 
      average_turnaround_time = turnaround_time /n;
      printf("average completion time %f",average_completion_time);
      printf("\n\nAverage Waiting Time:\t%lf\n", average_waiting_time);
      printf("Average Turnaround Time:\t%lf\n", average_turnaround_time);
      return 0;
}
