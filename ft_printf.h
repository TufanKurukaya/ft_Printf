/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:30:03 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/10 17:10:13 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_printf(const char *format, ...);
int	ft_print_int(long num, int len);
int	ft_print_hex(unsigned long num, char format, int len);

#endif