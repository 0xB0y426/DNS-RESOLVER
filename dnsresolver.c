#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s hostname\n", argv[0]);
        return 1;
    }

    struct hostent *vitima = gethostbyname(argv[1]);

    printf("DNS RESOLVER v1.0\nBy unoxy5\n==================================\n");
    printf("Address: %s\n", inet_ntoa(*((struct in_addr *)vitima->h_addr_list)));

    return 0;
}
 