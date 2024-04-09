#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(message);
    ssize_t bytes_written = write(STDERR_FILENO, message, len);
    
    if (bytes_written == -1) {
        
        return 1;
    }

    
    return 1;
}

