/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 15:05:20 by jchan             #+#    #+#             */
/*   Updated: 2018/07/29 19:57:49 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int 42sofuckinghard; 
void ft_putnbr(int nb);

int main(void) 
{ 
  scanf("%d", &42sofuckinghard); 
  ft_putnbr(42sofuckinghard);
  return 0; 
}

void ft_putnbr(int x) {
  printf("%d\n", x); 
}
