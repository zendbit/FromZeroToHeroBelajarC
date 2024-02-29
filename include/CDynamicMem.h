#ifndef _DYNAMICMEM_H_
#define _DYNAMICMEM_H_

typedef struct Message {
    char from[50];
    char text[255];
} Message;

Message * Message__new(unsigned int len);
Message * Message__realloc(Message * msg, unsigned int len);

#endif
