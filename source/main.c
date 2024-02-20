/*
 *  file main.c
 *  executable program
 * */

#include <CDynamicMem.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    unsigned int len = 1;
    Message * msg = Message__new(len);


    //strcpy(msg[0].from, "a@b.com");
    strcpy(msg->from, "a@b.com");
    strcpy(msg->text, "Hi apa kabar?");

    len = 2;

    Message * msg_ptr = NULL;

    msg = Message__realloc(msg, 2 * sizeof(Message));
    msg_ptr = msg;

    // message ada 2
    msg_ptr++;
    //strcpy(msg[1].from, "a@b.com");
    strcpy(msg_ptr->from, "c@b.com");
    strcpy(msg_ptr->text, "Hi C!");

    msg_ptr = msg;

    for(int i = 0; i < len; i++) {
        printf("msg from: %s\n", msg_ptr->from);
        printf("msg text: %s\n", msg_ptr->text);
        msg_ptr++;
        
        //printf("msg from: %s\n", msg[i].from);
        //printf("msg text: %s\n", msg[i].text);
    }

    free(msg);
    msg = NULL;
    msg_ptr = NULL;

    return 0;
}

