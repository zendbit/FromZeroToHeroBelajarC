#include <CDynamicMem.h>
#include <stdlib.h>

Message * Message__new(unsigned int len) {
    //return (Message*)malloc(len * sizeof(Message));
    return (Message*)calloc(len, sizeof(Message));
}

Message * Message__realloc(Message * msg, unsigned int len) {
    return (Message*)realloc(msg, len * sizeof(Message));
}
