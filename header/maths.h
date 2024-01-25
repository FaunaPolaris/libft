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

// matrix arithmetic

t_constants	*mtx_init(void);

t_matrix	mtx_new(int col, int row);
void		mtx_free(t_matrix m);

t_matrix	mtx_null(void);
t_matrix	mtx_from_vec(t_vector source, int col);
t_matrix	mtx_identify(int size);
t_matrix	mtx_multiply(const t_matrix a, const t_matrix b);
t_matrix	mtx_rotate(char axes, double angle);

void		mtx_nullv(t_vector *m);
int			mtx_fill(t_matrix *m, char *content);

void		mtx_print(t_matrix m);

t_vector	mtx_apply(const t_vector vector const t_matrix m);

// vector manipulation

t_vector	vec_new(double y, double x, double z, int color);
t_vector	vec_from_mtx(t_matrix m);
t_vector	vec_isometry(const t_vector vertx);
t_vector	vec_center(void);
t_vector	vec_unit(char base);

#endif
