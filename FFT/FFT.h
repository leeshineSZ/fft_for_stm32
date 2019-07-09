/**
  ******************************************************************************

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FFT_H
#define __FFT_H

#define PI 3.1415926535897932384626433832795028841971              
#define FFT_N 1024  //sampling number                                                 

struct compx
{
	float real;
	float imag;
};  

void FFT(struct compx *xin);

#endif
