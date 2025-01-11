#include <stdio.h>

struct Time
{
    int hours, minutes, seconds;
};

struct Time timeUpdate(struct Time);

int main(void)
{
    struct Time updatedClock;
    struct Time clock[3];
    clock[0].hours = 1;
    clock[1].hours = 5;
    clock[2].hours = 9;

    return 0;
}

struct Time timeUpdate(struct Time now)
{
    now.seconds++;
    if (now.seconds == 60)
    {
        now.seconds = 0;
        now.minutes++;
        if (now.minutes == 60)
        {
            now.minutes = 0;
            now.hours++;
            if (now.hours == 24)
            {
                now.hours = 0;
            }
        }
    }
    return now;
}