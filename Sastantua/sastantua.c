/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 10:42:57 by jchan             #+#    #+#             */
/*   Updated: 2018/07/29 22:57:43 by jchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int input;
int stars = 1;

int main(){
    scanf("%d", &input);
    printf("%d \n", input);
    
    int tmpspace = 1;
    for(int xyz = 0 ; xyz < input ; xyz++){ //計算最底層的第底列
      tmpspace = tmpspace+xyz+2;
      tmpspace = tmpspace+3+xyz/2;
    }
    tmpspace = tmpspace + input + 2;
    tmpspace = tmpspace*2-1;
    // printf("%d", tmpspace);
    
    for (int x = 0; x < input;x++ ){  //組
      for (int y = stars; y < stars+x+3 ; y++){   //組中層
        int tmp = y*2-1;
        //space
        for(int z = 0 ; z < (tmpspace-tmp)/2-5 ; z++){
          printf(" ");
        }
        //==space
        printf("/");
        for(int z = 0 ; z < tmp ; z++){
          if( x == input - 1 && y > stars+x+3-input-1 && z > (tmp/2 - input/2 - 1) && z < (tmp/2 + input/2 + 1)){
            if(x >= 4 && y == stars+x+3-input-1 + (input+1)/2 && z == tmp/2 + input/2 + 1 - 2){
              printf("$");
            }else{
              printf("|");
            }
          }else{
            printf("*");
          }
        }
        printf("\\\n");
      }
      stars = stars+x+2;
      stars = stars+3+x/2;

    }

    return 0;
}
