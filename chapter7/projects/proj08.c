/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 8
 * Prompt: Modify programming project 8 from chapter 5 so that the user enters a time using the 12-hour clock. The input will 
   have the form hours:minutes followed by either A, P, AM, PM.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    int h, m, dt1, dt2, dt3, dt4, dt5, dt6, dt7, dt8, minut_time;
    char ch;

    printf("Enter a 12-hour time (e.g., 1:15 PM): ");
    scanf("%d:%d", &h, &m);

    dt1 = 8 * 60;
    dt2 = 9 * 60 + 43;
    dt3 = 11 * 60 + 19;
    dt4 = 12 * 60 + 47;
    dt5 = 14 * 60;
    dt6 = 15 * 60 + 45;
    dt7 = 19 * 60;
    dt8 = 21 * 60 + 45;

    do {
        ch = getchar();
        if (toupper(ch) == 'P') {
            if (h != 12) {
                h += 12;
            }
        } else if (toupper(ch) == 'A') {
            if (h == 12) {
                h = 0;
            }
        }
    } while (ch != '\n');

    minut_time = h * 60 + m;

    if (minut_time < (dt1 + dt2) / 2) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (minut_time < (dt2 + dt3) / 2) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (minut_time < (dt3 + dt4) / 2) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (minut_time < (dt4 + dt5) / 2) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (minut_time < (dt5 + dt6) / 2) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (minut_time < (dt6 + dt7) / 2) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (minut_time < (dt7 + dt8) / 2) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}
