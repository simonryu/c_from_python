typedef struct _Img{
    int width;
    int height;
    unsigned char * data;
} Img;



int create_fractal(Img img, int iters);
int mandel(float real, float imag, int max_iters, unsigned char * val);

