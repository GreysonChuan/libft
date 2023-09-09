/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:21:36 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/05 19:21:37 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	main(void)
{
	char str[50];
	char str1[50];
	char	*res;

	printf("%s\n", "------------------------------");

	printf("%s\n\n", "ft_isalpha testcase");
	printf("%s\n\n", "Testcase 1 - char = c");
	printf("%s - %d\n", "isalpha", isalpha('c'));
	printf("%s - %d\n\n", "ft_isalpha",  ft_isalpha('c'));
	printf("%s\n\n", "Testcase 2 - char = 1");
	printf("%s - %d\n", "isalpha", isalpha('1'));
	printf("%s - %d\n\n", "ft_isalpha",  ft_isalpha('1'));
	printf("%s\n\n", "Testcase 3 - char = .");
	printf("%s - %d\n", "isalpha", isalpha('.'));
	printf("%s - %d\n\n", "ft_isalpha",  ft_isalpha('.'));
	
	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_isdigit testcase");
	printf("%s\n\n", "Testcase 1 - char = c");
	printf("%s - %d\n", "isdigit", isdigit('c'));
	printf("%s - %d\n\n", "ft_isdigit",  ft_isdigit('c'));
	printf("%s\n\n", "Testcase 2 - char = 1");
	printf("%s - %d\n", "isdigit", isdigit('1'));
	printf("%s - %d\n\n", "ft_isdigit",  ft_isdigit('1'));
	printf("%s\n\n", "Testcase 3 - char = .");
	printf("%s - %d\n", "isdigit", isdigit('.'));
	printf("%s - %d\n\n", "ft_isdigit",  ft_isdigit('.'));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_isalnum testcase");
	printf("%s\n\n", "Testcase 1 - char = c");
	printf("%s - %d\n", "isalnum", isalnum('c'));
	printf("%s - %d\n\n", "ft_isalnum",  ft_isalnum('c'));
	printf("%s\n\n", "Testcase 2 - char = 1");
	printf("%s - %d\n", "isalnum", isalnum('1'));
	printf("%s - %d\n\n", "ft_isalnum",  ft_isalnum('1'));
	printf("%s\n\n", "Testcase 3 - char = .");
	printf("%s - %d\n", "isalnum", isalnum('.'));
	printf("%s - %d\n\n", "ft_isalnum",  ft_isalnum('.'));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_isascii testcase");
	printf("%s\n\n", "Testcase 1 - char = c");
	printf("%s - %d\n", "isascii", isascii('c'));
	printf("%s - %d\n\n", "ft_isascii",  ft_isascii('c'));
	printf("%s\n\n", "Testcase 2 - char = 1");
	printf("%s - %d\n", "isascii", isascii('1'));
	printf("%s - %d\n\n", "ft_isascii",  ft_isascii('1'));
	printf("%s\n\n", "Testcase 3 - char = .");
	printf("%s - %d\n", "isascii", isascii('.'));
	printf("%s - %d\n\n", "ft_isascii",  ft_isascii('.'));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_isprint testcase");
	printf("%s\n\n", "Testcase 1 - char = c");
	printf("%s - %d\n", "isprint", isprint('c'));
	printf("%s - %d\n\n", "ft_isprint",  ft_isprint('c'));
	printf("%s\n\n", "Testcase 2 - char = 1");
	printf("%s - %d\n", "isprint", isprint('1'));
	printf("%s - %d\n\n", "ft_isprint",  ft_isprint('1'));
	printf("%s\n\n", "Testcase 3 - char = tab");
	printf("%s - %d\n", "isprint", isprint('\t'));
	printf("%s - %d\n\n", "ft_isprint",  ft_isprint('\t'));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_strlen testcase");
	printf("%s\n\n", "Testcase 1 - char = testing");
	printf("%s - %lu\n", "strlen", strlen("testing"));
	printf("%s - %d\n\n", "ft_strlen",  ft_strlen("testing"));
	printf("%s\n\n", "Testcase 2 - char = 42 Singapore");
	printf("%s - %lu\n", "strlen", strlen("42 Singapore"));
	printf("%s - %d\n\n", "ft_strlen",  ft_strlen("42 Singapore"));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_memset testcase");
	printf("%s\n\n", "Testcase 1 - value = $, numbytes = 7");
	strcpy(str,"This is string.h library function");
	memset(str, '$', 7);
	printf("%s - %s\n", "memset", str);
	strcpy(str,"This is string.h library function");
	ft_memset(str, '$', 7);
	printf("%s - %s\n\n", "ft_memset",  str);
	printf("%s\n\n", "Testcase 2 - value = k, numbytes = 5");
	strcpy(str,"This is string.h library function");
	memset(str, 'k', 5);
	printf("%s - %s\n", "memset", str);
	strcpy(str,"This is string.h library function");
	ft_memset(str, 'k', 5);
	printf("%s - %s\n\n", "ft_memset",  str);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_bzero testcase");
	printf("%s\n\n", "Testcase 1 - numbytes = 7");
	strcpy(str,"This is string.h library function");
	bzero(str, 7);
	printf("%s - %s\n", "bzero", str);
	strcpy(str,"This is string.h library function");
	ft_bzero(str, 7);
	printf("%s - %s\n\n", "ft_bzero",  str);
	printf("%s\n\n", "Testcase 2 - numbytes = 5");
	strcpy(str,"This is string.h library function");
	bzero(str, 5);
	printf("%s - %s\n", "bzero", str);
	strcpy(str,"This is string.h library function");
	ft_bzero(str, 5);
	printf("%s - %s\n\n", "ft_bzero",  str);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_memcpy testcase");
	printf("%s\n\n", "Testcase memcpy - before = Hello World");
	strcpy(str,"Hello World");
	printf("%s - %s\n", "Before memcpy dest", str);
	memcpy(str, "42 Singapore", 13);
	printf("%s - %s\n\n", "After memcpy dest",  str);
	printf("%s\n\n", "Testcase ft_memcpy - before = Hello World");
	strcpy(str,"Hello World");
	printf("%s - %s\n", "Before ft_memcpy dest", str);
	ft_memcpy(str, "42 Singapore", 13);
	printf("%s - %s\n\n", "After ft_memcpy dest",  str);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_memmove testcase");
	printf("%s\n\n", "Testcase memmove - before = Hello World");
	strcpy(str,"Hello World");
	printf("%s - %s\n", "Before memmove dest", str);
	memmove(str, str + 6, 6);
	printf("%s - %s\n\n", "After memmove dest",  str);
	printf("%s\n\n", "Testcase ft_memmove - before = Hello World");
	strcpy(str,"Hello World");
	printf("%s - %s\n", "Before ft_memmove dest", str);
	ft_memmove(str, str + 6, 6);
	printf("%s - %s\n\n", "After ft_memmove dest",  str);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_strlcpy testcase");
	printf("%s\n\n", "Testcase strlcpy - before = Hello World");
	strcpy(str,"Hello World");
	printf("%s - %s\n", "Before strlcpy dest", str);
	//strlcpy(str, str + 6, 6);
	printf("%s - %s\n\n", "After strlcpy dest",  str);
	printf("%s\n\n", "Testcase ft_strlcpy - before = Hello World");
	strcpy(str,"Hello World");
	printf("%s - %s\n", "Before ft_strlcpy dest", str);
	ft_strlcpy(str, str + 6, 6);
	printf("%s - %s\n\n", "After ft_strlcpy dest",  str);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_toupper testcase");
	printf("%s\n\n", "Testcase 1 - char = c");
	printf("%s - %c\n", "toupper", toupper('c'));
	printf("%s - %c\n\n", "ft_toupper",  ft_toupper('c'));
	printf("%s\n\n", "Testcase 2 - char = 1");
	printf("%s - %c\n", "toupper", toupper('1'));
	printf("%s - %c\n\n", "ft_toupper",  ft_toupper('1'));
	printf("%s\n\n", "Testcase 3 - char = tab");
	printf("%s - %c\n", "toupper", toupper('\t'));
	printf("%s - %c\n\n", "ft_toupper",  ft_toupper('\t'));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_strchr testcase");
	strcpy(str,"Hello World");
	printf("%s\n\n", "Testcase 1 - char = l");
	printf("%s - %s\n", "strchr", strchr(str, 'l'));
	printf("%s - %s\n\n", "ft_strchr",  ft_strchr(str, 'l'));
	printf("%s\n\n", "Testcase 2 - char = 1");
	printf("%s - %s\n", "strchr", strchr(str, '1'));
	printf("%s - %s\n\n", "ft_strchr",  ft_strchr(str, '1'));
	printf("%s\n\n", "Testcase 3 - char = tab");
	printf("%s - %s\n", "strchr", strchr(str, '\t'));
	printf("%s - %s\n\n", "ft_strchr",  ft_strchr(str, '\t'));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_strrchr testcase");
	strcpy(str,"Hello World");
	printf("%s\n\n", "Testcase 1 - char = l");
	printf("%s - %s\n", "strrchr", strrchr(str, 'l'));
	printf("%s - %s\n\n", "ft_strrchr",  ft_strrchr(str, 'l'));
	printf("%s\n\n", "Testcase 2 - char = 1");
	printf("%s - %s\n", "strrchr", strrchr(str, '1'));
	printf("%s - %s\n\n", "ft_strrchr",  ft_strrchr(str, '1'));
	printf("%s\n\n", "Testcase 3 - char = tab");
	printf("%s - %s\n", "strrchr", strrchr(str, '\t'));
	printf("%s - %s\n\n", "ft_strrchr",  ft_strrchr(str, '\t'));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_memchr testcase");
	printf("%s\n\n", "Testcase memchr - before = Hello World");
	strcpy(str,"Hello World");
	printf("%s - %s\n", "Before memchr dest", str);
	printf("%s - %p\n\n", "After memchr dest",  memchr(str, 'o', 6));
	printf("%s\n\n", "Testcase ft_memchr - before = Hello World");
	strcpy(str,"Hello World");
	printf("%s - %s\n", "Before ft_memchr dest", str);
	printf("%s - %p\n\n", "After ft_memchr dest",  ft_memchr(str, 'o', 6));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_memcmp testcase");
	printf("%s\n\n", "Testcase ft_memcmp - str1 = Hello world, str2 = hello World");
	strcpy(str,"Hello world");
	strcpy(str1,"hello World");
	printf("%s - %d\n", "memcmp", memcmp(str, str1, 11));
	printf("%s - %d\n\n", "ft_memcmp",  ft_memcmp(str, str1, 11));
	printf("%s\n\n", "Testcase ft_memcmp - str1 = AbCdEf, str2 = ABCdef");
	strcpy(str,"AbCdEf");
	strcpy(str1,"ABCdef");
	printf("%s - %d\n", "memcmp", memcmp(str, str1, 6));
	printf("%s - %d\n\n", "ft_memcmp",  ft_memcmp(str, str1, 6));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_strnstr testcase");
	printf("%s\n\n", "Testcase ft_strnstr - str1 = Hello world, str2 = world, len = 11");
	strcpy(str,"Hello world");
	strcpy(str1,"world");
	//printf("%s - %d\n", "strnstr", strnstr(str, str1, 11));
	printf("%s - %s\n\n", "ft_strnstr",  ft_strnstr(str, str1, 11));
	printf("%s\n\n", "Testcase ft_strnstr - str1 = Hello world, str2 = world, len = 6");
	//printf("%s - %d\n", "strnstr", strnstr(str, str1, 6));
	printf("%s - %s\n\n", "ft_strnstr",  ft_strnstr(str, str1, 6));

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_calloc testcase");
	printf("%s\n\n", "Testcase ft_calloc");
	int	*a, *b;
	a = (int *)calloc(2, sizeof(int));
	b = (int *)ft_calloc(2, sizeof(int));
	a[1] = 2;
	b[1] = 2;
	a[3] = sizeof(int);
	b[3] = 3;
	printf("%s - %d\n\n", "calloc",  a[1]);
	printf("%s - %d\n\n", "ft_calloc",  b[1]);
	printf("%s - %d\n\n", "calloc",  a[3]);
	printf("%s - %d\n\n", "ft_calloc",  b[3]);
	free(a);
	free(b);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_strdup testcase");
	printf("%s\n\n", "Testcase ft_strdup");
	char source[] = "GeeksForGeeks";
    char	*target = strdup(source);
    char	*target1 = ft_strdup(source);
	printf("%s - %s\n\n", "strdup",  target);
	printf("%s - %s\n\n", "ft_strdup",  target1);
	free(target);
	free(target1);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_substr testcase");
	printf("%s\n\n", "Testcase ft_substr");
	//printf("%s - %d\n\n", "substr",  substr(source, 6, 3));
	res = ft_substr(source, 5, 3);
	printf("%s - %s\n\n", "ft_substr",  res);
	free(res);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_strjoin testcase");
	printf("%s\n\n", "Testcase ft_strjoin");
	strcpy(str,"Hello ");
	strcpy(str1,"World");
	//printf("%s - %d\n\n", "strjoin",  strjoin(str, str1));
	res = ft_strjoin(str, str1);
	printf("%s - %s\n\n", "ft_strjoin",  res);
	free(res);

	printf("%s\n", "------------------------------");
	
	printf("%s\n\n", "ft_strtrim testcase");
	printf("%s\n\n", "Testcase ft_strtrim");
	//printf("%s - %d\n\n", "strjoin",  strjoin(str, str1));
	res = ft_strtrim("Hello world", "lo");
	printf("%s - %s\n\n", "ft_strtrim",  res);
	free(res);
	return (0);
}
