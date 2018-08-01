/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:07:35 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:07:36 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define ULLI			unsigned long long int
# define LLI			long long int
# define ULI			unsigned long int
# define LI				long int
# define UI				unsigned int
# define SC				signed char
# define I_T			intmax_t
# define FT_MAX(x, y)	(x > y ? x : y)
# define FT_MIN(x, y)	(x > y ? y : x)
# define FT_S_P(c)		(((c >= '0' && c <= '9') || c == '.') ? 1 : 0)

int						g_put_nr;
int						g_pref;
int						g_suf;

int		ft_printf(const char *format, ...);

int		ft_putchar_f(char c);
int		ft_putstr_f(char *str);
int		ft_putnbr_f(long long int n, int nr);
int		ft_strlen(char *str);
int		ft_strlen_w(u_int32_t *str);
int		ft_atoi(const char *str);
char	*ft_itoa_base(int value, int base);
char	*ft_itoa_base_u(unsigned int nr, int base);
char	*ft_mari(char *s);
char	*ft_itoa(long long int n);
int		ft_pow(int nb, int p);
int		ft_putsstr_f(u_int32_t*s);
int		ft_putwchar_f(u_int32_t ch);
int		print_ss(u_int32_t *str);
int		ft_strlen_ch(u_int32_t c);
void	restabilire(void);
int		print_c(char c);
int		print_s(char *s);
int		print_p(char *p);
int		print_u(unsigned int n);
int		print_procent();
int		print_nothing(char c);
int		ft_diez(char c, va_list args);
int		ft_diez_print_x(char *str, char c);
int		ft_diez_print_o(char *str);
int		ft_zero(char c, va_list args, char z);
int		ft_zero_diez(char c, va_list args);
int		ft_minus(char c, va_list args, char z);
int		ft_minus_diez(char c, va_list args);
int		ft_plus(char c, va_list args);
int		ft_plus_diez(char c, va_list args);
int		ft_zero_diez_print(char *str, char c);
int		print_zero_nr(char *s, char z);
int		print_zero_nothing(char str);
int		print_zero_chr(char s);
int		ft_plus_diez_print(char *str, char c);
int		print_plus_nr(char *s);
int		print_minus_nr(char *s, char z);
int		ft_minus_diez_print(char *str, char c);
int		print_nr_print(char *str);
int		ft_zero_plus(char c, va_list args);
int		print_u_print(char *str);
int		print_cc(wchar_t c);
int		print_d_print(char *str, char z);
char	*ft_itoa_base_ulli(ULLI nr, int base);
char	*ft_itoa_base_lli(LLI nr, int base);
char	*ft_itoa_base_s(size_t nr, int base);
char	*ft_itoa_base_it(intmax_t nr, int base);
int		flags_print_nb(va_list args, char c);
int		flags_print_x(va_list args, char c);
int		flags_print_xx(va_list args, char c);
int		flags_print_o(va_list args, char c);
int		flags_print_nb_u(va_list args, char c);
int		ft_flags_minus(char c, va_list args, char f);
int		ft_flags_zero_diez(char c, va_list args, char f);
int		ft_flags_plus(char c, va_list args, char f);
int		ft_flags_zero(char c, va_list args, char f);
int		ft_flags_diez(char c, va_list args, char f);
int		ft_flags_plus_diez(char c, va_list args, char f);
int		ft_flags_minus_diez(char c, va_list args, char f);
int		ft_flags_zero_diez(char c, va_list args, char f);
int		flags_print_nb_uu(va_list args, char c);
int		flags_print_oo(va_list args);
int		print_e(double nb, char c, char z);
int		print_le(long double nb, char c, char z);
int		flags_put_n(va_list args, char c);
int		print_f(double nb);
void	verificari(char *s, int *i, char *z, int j);
int		verificari_2(char *s, int *i, char *z, int *j);
int		ft_flags_check(char *s, char z, va_list args);
char	check_flags(char *s);
int		ft_check_flag(char *s, int *i);
void	trecere(char *s, int *i, char *z, va_list args);
void	ft_switch_stea(int *i, char *z, va_list args);
int		test(char *s, int *i);
int		ft_function_flags(char *s, va_list args, char z);
int		ft_switch_flags_printf_2(char *s, va_list args, char c);
int		ft_switch_flags_printf(char *s, va_list args);
int		ft_check(char c, char z, va_list args);
int		flags_minus_z(char c, va_list args);
int		flags_minus_j(char c, va_list args);
int		flags_plus_z(char c, va_list args);
int		flags_plus_j(char c, va_list args);
int		flags_zero_j(char c, va_list args);
int		flags_zero_z(char c, va_list args);

#endif
