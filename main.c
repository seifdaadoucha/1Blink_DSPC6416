#include <stdio.h>
#include <unistd.h>

int main() {
    // Add code to control the LED using DSPC6416
    while(1) {
        // Blink the LED here
        printf("LED ON\n");
        usleep(500000); // 500ms delay
        printf("LED OFF\n");
        usleep(500000); // 500ms delay
    }
    return 0;
}
