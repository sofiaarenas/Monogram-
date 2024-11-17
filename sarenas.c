#include <stdio.h>
#include <unistd.h>
#include "sense.h"
#define WHITE 0xFFFF
#define BLACK 0x0000

int main(void) {
    // getFrameBuffer should only get called once/program
    pi_framebuffer_t *fb=getFrameBuffer();
    sense_fb_bitmap_t *bm=fb->bitmap;

    // First initial letter: S
    bm->pixel[2][0]=WHITE;
    bm->pixel[3][0]=WHITE;
    bm->pixel[4][0]=WHITE;
    bm->pixel[5][0]=WHITE;
    bm->pixel[1][1]=WHITE;
    bm->pixel[6][1]=WHITE;
    bm->pixel[6][2]=WHITE;
    bm->pixel[5][3]=WHITE;
    bm->pixel[4][3]=WHITE;
    bm->pixel[3][3]=WHITE;
    bm->pixel[2][3]=WHITE;
    bm->pixel[1][4]=WHITE;
    bm->pixel[1][5]=WHITE;
    bm->pixel[6][5]=WHITE;
    bm->pixel[5][6]=WHITE;
    bm->pixel[4][6]=WHITE;
    bm->pixel[3][6]=WHITE;
    bm->pixel[2][6]=WHITE;

    sleep(1); // Wait for one second
    clearFrameBuffer(fb, BLACK); // Clears the screen

    // Second inital letter: A
    bm->pixel[4][0]=WHITE;
    bm->pixel[3][0]=WHITE;
    bm->pixel[5][1]=WHITE;
    bm->pixel[2][1]=WHITE;
    bm->pixel[6][2]=WHITE;
    bm->pixel[1][2]=WHITE;
    bm->pixel[6][3]=WHITE;
    bm->pixel[1][3]=WHITE;
    bm->pixel[6][4]=WHITE;
    bm->pixel[5][4]=WHITE;
    bm->pixel[4][4]=WHITE;
    bm->pixel[3][4]=WHITE;
    bm->pixel[2][4]=WHITE;
    bm->pixel[1][4]=WHITE;
    bm->pixel[6][5]=WHITE;
    bm->pixel[6][6]=WHITE;
    bm->pixel[1][5]=WHITE;
    bm->pixel[1][6]=WHITE;

    sleep(1);
    clearFrameBuffer(fb, BLACK);

    // see: "man 3 sleep"
     //    sleep(1);
    // freeFrameBuffer() should only be called once/program
    // may or may not clear the screen. See "clear" example.
    freeFrameBuffer(fb);
    return 0;
}

