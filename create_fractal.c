#include "create_fractal.h"

int create_fractal(Img img,  int iters) {
    float pixel_size_x = 3.0 / img.width;
    float pixel_size_y = 2.0 / img.height;
    int x, y, ret=0;
    for (y=0; y < img.height; y++) {
        float imag = y * pixel_size_y - 1;
        int yy = y * img.width;
        for (x=0; x < img.width; x++) {
            float real = x * pixel_size_x - 2;
            unsigned char color;
            ret += mandel(real, imag, iters, &color);
            img.data[yy + x] = color;
        }
    }
    return ret;
}
