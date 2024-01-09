#ifndef MATHS_H
#define MATHS_H

// basic arithmetic

int	mth_abs(int x);
int	mth_pow(int operand, int power);
int	mth_sqrt(int n);

// numerical methods

int	mth_ilerp(int x, int y, double t);
float	mth_flerp(int x, int y, double t);
double	mth_dlerp(int x, int y, double t);
double	mth_lerpcolor(int cx, int cy, double t);

#endif
