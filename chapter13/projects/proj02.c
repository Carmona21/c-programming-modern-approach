/*
 * Book: c programing a modern aproach 2nd edition
 * Chapter: 13
 * Projects: 2
 * Promtp: improve the remmind.c program of section 13.5 in the following ways:
 *  a) Have the program primnt an error message and ignore a reminder if the corresponding day is negative or larger than 31.
 *  b) Allow the user to enter a day, a 24-hour time, and a reminder. The printed reminder list should be sorted first by day, then by time
 *  C) have the program print a one-year reminder list. Require the user to enter days in the form month/day.
 */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char *str, int n);

int main(){
    char reminders[MAX_REMIND][MSG_LEN + 12];
    char date_time_str[12], msg_str[MSG_LEN + 1];
    int month, day, h, m, i, j, ch, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter month/day hour:minute and reminder: ");
        scanf("%2d", &month);
        if (month == 0)
            break;

        scanf("/%2d", &day);
        if (day == 0)
            break;

        if (month < 1 || month > 12 || day < 1 || day > 31) {
            printf("Invalid date\n");
            while ((ch = getchar()) != '\n')
                ;
            continue;
        }

        scanf("%2d:%2d", &h, &m);
        if (h < 0 || h > 23 || m < 0 || m > 59) {
            printf("Invalid time\n");
            while ((ch = getchar()) != '\n')
                ;
            continue;
        }

        sprintf(date_time_str, "%02d/%02d %02d:%02d", month, day, h, m);

        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++) {
            if (strcmp(date_time_str, reminders[i]) < 0)
                break;
        }

        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        strcpy(reminders[i], date_time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nMonth/Day Hour:Min Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char *str, int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
