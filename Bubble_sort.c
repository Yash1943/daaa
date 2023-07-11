#include<stdio.h>
#include<time.h>
void bubble_sort (int k[], int n);
int main ()
{
  int arr[20], size, start_time, Last_time, i;
  double timetaken;
  printf ("Ente the value of array");
  scanf ("%d", &size);
  for (i = 0; i < size; i++)
    {
      printf ("\n Enter %d Element:", i + 1);
      scanf ("%d", &arr[i]);
    }
  start_time = clock ();
  bubble_sort (arr, size);
  Last_time = clock ();
  timetaken = (double) ((Last_time - start_time) / (CLOCKS_PER_SEC));
  printf ("The time taken for sort the array %lf", timetaken);
  printf ("Sorted array");
  for (i = 0; i < size; i++)
    {
      printf ("\n %d", arr[i]);
      return 0;
    }
}

void
bubble_sort(int k[], int n)
{
  int Last, exchg, pass, i, temp;
  Last = n - 1;
  for (pass = 1; pass < n - 1; pass++)
    {
      exchg = 0;
      for (i = 0; i < Last - 1; i++)
	{
	  if (k[i + 1] < k[i])
	    {
	      temp = k[i + 1];
	      k[i + 1] = k[i];
	      k[i] = temp;
	      exchg++;
	    }
	}
      if (exchg == 0)
	break;
      else
	Last--;
    }
}
}
}
