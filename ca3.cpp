#include <stdio.h>
#include<windows.h>
int main() 
{
      int at[5], bt[5], temp[5];
      int i, smallest,least, count = 0, time, lim;
      double wt = 0, tt = 0, end;
      float averagewt, averagett;
      printf("\nEnter the Total Number of Processes:\t");
      scanf("%d", &lim); 
      printf("\nEnter Details of %d Processes\n", lim);
      for(i = 0; i < lim; i++)
      {
            printf("\nEnter Arrival Time:\t");
            scanf("%d", &at[i]);
            printf("Enter Burst Time:\t");
            scanf("%d", &bt[i]); 
            temp[i] = bt[i];
      }
      bt[4] =99; 
	  Sleep(3000);
      for(time = 0; count != lim; time++)
      {
            smallest = 4;
            for(i = 0; i < lim; i++)
            {
                  if(at[i] <= time)
				       if(bt[i] < bt[smallest] && bt[i] > 0)
                  {
                        smallest = i;
                        
                  }
            }
            bt[smallest]--;
            if(bt[smallest] == 0)
            {
                  count++;
                  end = time + 1;
                  wt = wt + end - at[smallest] - temp[smallest];
                  tt =tt + end - at[smallest];
            }
      }
      averagewt = wt / lim; 
      averagett = tt / lim;
      printf("\n\nAverage Waiting Time:\t%lf\n", averagett);
      printf("Average Turnaround Time:\t%lf\n",averagett);
      return 0;
}
