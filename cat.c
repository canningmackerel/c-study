#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// proto type
void do_cat(const char *path);
void die(const char *s);

#define BUFFER_SIZE 2048

int main(int argc, char *argv[])
{
    int i;
    if (argc < 2) {
        fprintf(stderr, "%s: ファイルを入力してください\n", argv[0]);
        exit(1);
    }
    for (i = 1; i < argc; i++) {
        do_cat(argv[i]);
    }
    exit(0);
}

void do_cat(const char *path)
{
    int fd;
    unsigned char buf[BUFFER_SIZE];
    int n;

    fd = open(path, O_RDONLY);
    //printf("here !%d", fd);
    //write(STDOUT_FILENO, &fd, 20);
    if (fd < 0) die(path);
    for (;;) {
        //printf("here !!%d", fd);
        n = read(fd, buf, sizeof buf);
        if (n < 0) die(path);
        if (n == 0) break;
        if (write(STDOUT_FILENO, buf, n) < 0) die(path);
    }
    if (close(fd) < 0) die(path);
}

void die (const char *s)
{
    perror(s);
    exit(1);
}
