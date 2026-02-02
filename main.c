#include <stdio.h>

int main() {
    int sensorID = 99;
    float tempRead = 12.34;
    char status = 'A';

    printf("The sensor ID: %d, \nthe temperature reading is: %.2f, \nstatus code: %c", sensorID, tempRead, status);
    return 0;
}
