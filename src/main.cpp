#include "main.h"
#include <stdio.h>

int main() {
    printf("Please slection option: \n");
    printf("Option '-c' is block Screen Capture\n");
    printf("Option '-w' is block websites\n");
    printf("Option '-p' is block app\n");
    printf("Option '-e' is exit program\n");
    printf("Enter an option (-c, -w, -p, -e): ");
    char option = getchar();
    getchar(); // Đọc ký tự newline (\n) từ bàn phím

    switch (option) {
        case 'c':
            blockScreen(1, nullptr);
            break;
        case 'w':
            blockWebsites();
            break;
        case 'p':
            blockApp();
            break;
        case 'e':
            printf("Exit.\n");
            break;
        default:
            printf("Invalid option.\n");
            break;
    }

    return 0;
}