#include <stdio.h>
#include <stdlib.h>

int main() {
    // Print CPU usage message
    system("echo 'CPU Usage:'");
    system("top -bn1 | grep 'Cpu(s)'");

    // Print Memory usage message
    system("echo 'Memory Usage:'");
    system("free -h");

    return 0;
}

