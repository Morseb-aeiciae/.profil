Vim�UnDo� ���4|@�W��m<gF���zT	�%���;�   .                                  _�Ĺ    _�                             ����                                                                                                                                                                                                                                                                                                                                                             _�#c     �   "   $          #        str[rang] = (n % 10) + '0';�   !   #          4                stat_convert(n / 10, str, rang - 1);�       "                  if (n >= 10)�                        return (str);�                	        }�                /                stat_convert(n, str, ilen - 1);�                                }�                                        rang++;�                #                        *str = '-';�                                        n = -n;�                                {�                                if (n < 0)�                	        {�                        else�                .                ft_strcpy(str, "-2147483648");�                        if (n == -2147483648)�                        ft_bzero(str, ilen);�                                return (NULL);�                $        if(!(str = ft_strnew(ilen)))�                        rang = 0;�   
                     ilen = ft_intlen(n);�      
                  size_t ilen;�      	                  int rang;�                        char *str;5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _�#d     �          /    �          .    �          -    �          ,    �          +    �          *    �          )    �          (    �          '    �          &    �          %    �          $    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             _�#h     �         0      =static void         stat_convert(int n, char *str, int rang);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             _�#p     �         0      #char                *ft_itoa(int n)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             _�#z     �         0      
	int rang;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             _�#~     �         0      		intrang;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             _�#�     �         0      	char *str;5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             _�#�     �         0      	size_t ilen;5�_�      
           	   +       ����                                                                                                                                                                                                                                                                                                                                                             _�#�     �   *   ,   0      <static void         stat_convert(int n, char *str, int rang)5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                             _�#�    �                P/*   ft_itoa.c                                          :+:      :+:    :+:   */�      
          P/*   Updated: 2020/11/04 22:55:48 by smorel           ###   ########.fr       */5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             _�#�     �         0      	if(!(str = ft_strnew(ilen)))5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _�#�    �                P/*   ft_itoa.c                                          :+:      :+:    :+:   */�      
          P/*   Updated: 2020/11/04 22:56:52 by smorel           ###   ########.fr       */5�_�                    *        ����                                                                                                                                                                                                                                                                                                                                                             _�ĩ     �   )   *              7static void				stat_convert(int n, char *str, int rang)   {   	if (n >= 10)   &		stat_convert(n / 10, str, rang - 1);   	str[rang] = (n % 10) + '0';   }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _�Į     �         )    �         )    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _�ĵ     �                8static void				stat_convert(int n, char *str, int rang);5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             _�Ķ     �                 5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             _�ĸ    �                P/*   ft_itoa.c                                          :+:      :+:    :+:   */�      
          P/*   Updated: 2020/11/04 22:57:36 by smorel           ###   ########.fr       */5��