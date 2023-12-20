#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <mach/mach_time.h>

double subtractTimes(uint64_t endTime, uint64_t stertTime)
{
  uint64_t difference = endTime - stertTime;
  static double conversion = 0.0;

  if (conversion == 0.0)
  {
    mach_timebase_info_data_t info;
    kern_return_t err = mach_timebase_info(&info);

    if (err == 0)
    {
      conversion = 1e-9 * (double) info.numer / (double) info.denom;
    }

    return conversion * (double) difference;
  }
}

int main()
{
  uint64_t start, stop;
  uint64_t answer = 0;
  uint64_t i, size = 1000000000;
  double elapsedTime = 0.0;

  start = mach_absolute_time();


  for(i = 1; i<= size; i++)
  {
    answer += size/i;
  }

  stop = mach_absolute_time();
  elapsedTime = subtractTimes(stop, start);

  printf("\n Total time in second = %1.12lf for answer: %llu\n", elapsedTime, answer);
}