/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 13:38:01 by jchan             #+#    #+#             */
/*   Updated: 2018/07/31 13:41:44 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
void ft_swap(int *a, int *b);
int main()
{ 
    int a = 2;
    int b = 6;
    ft_swap(&a, &b);
    return 0;
}

void ft_swap(int *a, int *b){
  int *x, *y, temp;
 
   printf("Before Swapping\nx = %d\ny = %d\n", *a, *b);
 
   x = *&a;
   y = *&b;
 
   temp = *y;
   *y = *x;
   *x = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n", *a, *b);
}
