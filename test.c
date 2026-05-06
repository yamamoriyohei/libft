#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ------------------- is & to functions ------------------- */
void	test_ft_isalpha(void)
{
	printf("[ft_isalpha] 'A':%d, '1':%d\n", ft_isalpha('A'), ft_isalpha('1'));
}
void	test_ft_isdigit(void)
{
	printf("[ft_isdigit] '1':%d, 'a':%d\n", ft_isdigit('1'), ft_isdigit('a'));
}
void	test_ft_isalnum(void)
{
	printf("[ft_isalnum] 'a':%d, '!':%d\n", ft_isalnum('a'), ft_isalnum('!'));
}
void	test_ft_isascii(void)
{
	printf("[ft_isascii] 127:%d, 128:%d\n", ft_isascii(127), ft_isascii(128));
}
void	test_ft_isprint(void)
{
	printf("[ft_isprint] ' ':%d, 31:%d\n", ft_isprint(' '), ft_isprint(31));
}
void	test_ft_toupper(void)
{
	printf("[ft_toupper] 'a' -> %c\n", ft_toupper('a'));
}
void	test_ft_tolower(void)
{
	printf("[ft_tolower] 'A' -> %c\n", ft_tolower('A'));
}

/* ------------------- String functions ------------------- */
void	test_ft_strlen(void)
{
	printf("[ft_strlen] \"42Tokyo\": %zu\n", ft_strlen("42Tokyo"));
}
void	test_ft_strlcpy(void)
{
	char	d[10];
	size_t	r;

	r = ft_strlcpy(d, "abc", 5);
	printf("[ft_strlcpy] dest: %s, res: %zu\n", d, r);
}
void	test_ft_strlcat(void)
{
	char	d[10] = "a";
	size_t	r;

	r = ft_strlcat(d, "bc", 5);
	printf("[ft_strlcat] dest: %s, res: %zu\n", d, r);
}
void	test_ft_strchr(void)
{
	printf("[ft_strchr] \"hello\", 'e': %s\n", ft_strchr("hello", 'e'));
}
void	test_ft_strrchr(void)
{
	printf("[ft_strrchr] \"hello\", 'l': %s\n", ft_strrchr("hello", 'l'));
}
void	test_ft_strncmp(void)
{
	printf("[ft_strncmp] \"abc\", \"abd\", 3: %d\n", ft_strncmp("abc", "abd",
			3));
}
void	test_ft_strnstr(void)
{
	printf("[ft_strnstr] \"hello world\", \"world\": %s\n",
		ft_strnstr("hello world", "world", 11));
}
void	test_ft_strdup(void)
{
	char	*p;

	p = ft_strdup("42");
	printf("[ft_strdup] %s\n", p);
	free(p);
}

/* ------------------- Memory functions ------------------- */
void	test_ft_memset(void)
{
	char	s[] = "12345";

	ft_memset(s, 'a', 3);
	printf("[ft_memset] %s\n", s);
}
void	test_ft_bzero(void)
{
	char	s[] = "12345";

	ft_bzero(s, 3);
	printf("[ft_bzero] %d %d %d %c %c\n", s[0], s[1], s[2], s[3], s[4]);
}
void	test_ft_memcpy(void)
{
	char	d[10] = "";

	ft_memcpy(d, "abc", 3);
	printf("[ft_memcpy] %s\n", d);
}
void	test_ft_memmove(void)
{
	char	s[] = "12345";

	ft_memmove(s + 1, s, 3);
	printf("[ft_memmove] overlap test: %s\n", s);
}
void	test_ft_memchr(void)
{
	printf("[ft_memchr] \"hello\", 'e': %s\n", (char *)ft_memchr("hello", 'e',
			5));
}
void	test_ft_memcmp(void)
{
	printf("[ft_memcmp] \"abc\", \"abd\", 3: %d\n", ft_memcmp("abc", "abd", 3));
}
void	test_ft_calloc(void)
{
	char	*p;

	p = ft_calloc(5, 1);
	printf("[ft_calloc] p[0]:%d p[4]:%d\n", p[0], p[4]);
	free(p);
}

/* ------------------- Utility functions ------------------- */
void	test_ft_atoi(void)
{
	printf("[ft_atoi] \"  -42\": %d\n", ft_atoi("  -42"));
}
void	test_ft_itoa(void)
{
	char	*p;

	p = ft_itoa(-42);
	printf("[ft_itoa] -42 -> %s\n", p);
	free(p);
}

/* ------------------- Additional String utils ------------------- */
void	test_ft_substr(void)
{
	char	*p;

	p = ft_substr("hello world", 6, 5);
	printf("[ft_substr] \"hello world\"(6, 5) -> %s\n", p);
	free(p);
}
void	test_ft_strjoin(void)
{
	char	*p;

	p = ft_strjoin("hello ", "world");
	printf("[ft_strjoin] %s\n", p);
	free(p);
}
void	test_ft_strtrim(void)
{
	char	*p;

	p = ft_strtrim("  hello  ", " ");
	printf("[ft_strtrim] \"  hello  \", \" \" -> \"%s\"\n", p);
	free(p);
}
void	test_ft_split(void)
{
	char	**p;

	p = ft_split("a b c", ' ');
	if (p)
	{
		printf("[ft_split] %s, %s, %s\n", p[0], p[1], p[2]);
		free(p[0]);
		free(p[1]);
		free(p[2]);
		free(p);
	}
}
static char	mapi_f(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}
void	test_ft_strmapi(void)
{
	char	*p;

	p = ft_strmapi("abc", mapi_f);
	printf("[ft_strmapi] \"abc\" + 1 -> %s\n", p);
	free(p);
}
static void	iteri_f(unsigned int i, char *c)
{
	(void)i;
	*c = *c + 1;
}
void	test_ft_striteri(void)
{
	char	s[] = "abc";

	ft_striteri(s, iteri_f);
	printf("[ft_striteri] \"abc\" + 1 -> %s\n", s);
}

/* ------------------- FD functions ------------------- */
void	test_ft_putchar_fd(void)
{
	printf("[ft_putchar_fd] ");
	ft_putchar_fd('A', 1);
	printf("\n");
}
void	test_ft_putstr_fd(void)
{
	printf("[ft_putstr_fd] ");
	ft_putstr_fd("hello", 1);
	printf("\n");
}
void	test_ft_putendl_fd(void)
{
	printf("[ft_putendl_fd] ");
	ft_putendl_fd("hello", 1);
}
void	test_ft_putnbr_fd(void)
{
	printf("[ft_putnbr_fd] ");
	ft_putnbr_fd(-42, 1);
	printf("\n");
}

/* ------------------- List functions ------------------- */
void	test_ft_lstnew(void)
{
	t_list	*l;

	l = ft_lstnew("42");
	printf("[ft_lstnew] %s\n", (char *)l->content);
	free(l);
}
void	test_ft_lstadd_front(void)
{
	t_list	*l1;
	t_list	*l2;

	l1 = ft_lstnew("1");
	l2 = ft_lstnew("2");
	ft_lstadd_front(&l2, l1);
	printf("[ft_lstadd_front] head: %s\n", (char *)l2->content);
	free(l2->next);
	free(l2);
}
void	test_ft_lstsize(void)
{
	t_list	*l;

	l = ft_lstnew("1");
	printf("[ft_lstsize] size: %d\n", ft_lstsize(l));
	free(l);
}
void	test_ft_lstlast(void)
{
	t_list	*l;

	l = ft_lstnew("1");
	printf("[ft_lstlast] last: %s\n", (char *)ft_lstlast(l)->content);
	free(l);
}
void	test_ft_lstadd_back(void)
{
	t_list	*l1;
	t_list	*l2;

	l1 = ft_lstnew("1");
	l2 = ft_lstnew("2");
	ft_lstadd_back(&l1, l2);
	printf("[ft_lstadd_back] back: %s\n", (char *)l1->next->content);
	free(l1);
	free(l2);
}
static void	del_f(void *c)
{
	free(c);
}
void	test_ft_lstdelone(void)
{
	t_list	*l;

	l = ft_lstnew(ft_strdup("42"));
	ft_lstdelone(l, del_f);
	printf("[ft_lstdelone] OK (no segfault)\n");
}
void	test_ft_lstclear(void)
{
	t_list	*l;

	l = ft_lstnew(ft_strdup("42"));
	ft_lstclear(&l, del_f);
	printf("[ft_lstclear] OK (no segfault, list is %p)\n", (void *)l);
}
static void	lstiter_f(void *c)
{
	*(char *)c = 'A';
}
void	test_ft_lstiter(void)
{
	char	s[] = "B";
	t_list	*l;

	l = ft_lstnew(s);
	ft_lstiter(l, lstiter_f);
	printf("[ft_lstiter] applied: %s\n", s);
	free(l);
}
static void	*lstmap_f(void *c)
{
	return (ft_strdup((char *)c));
}
void	test_ft_lstmap(void)
{
	t_list	*l;
	t_list	*nl;

	l = ft_lstnew(ft_strdup("42"));
	nl = ft_lstmap(l, lstmap_f, del_f);
	printf("[ft_lstmap] mapped: %s\n", (char *)nl->content);
	ft_lstclear(&l, del_f);
	ft_lstclear(&nl, del_f);
}

/* ------------------- Test Runner ------------------- */
typedef struct
{
	const char	*name;
	void		(*func)(void);
}				t_test;

int	main(int argc, char **argv)
{
	int	i;
	int	found;
	int	run_all;

	t_test tests[] = {{"ft_isalpha", test_ft_isalpha},
						{"ft_isdigit", test_ft_isdigit},
						{"ft_isalnum", test_ft_isalnum},
						{"ft_isascii", test_ft_isascii},
						{"ft_isprint", test_ft_isprint},
						{"ft_toupper", test_ft_toupper},
						{"ft_tolower", test_ft_tolower},
						{"ft_strlen", test_ft_strlen},
						{"ft_strlcpy", test_ft_strlcpy},
						{"ft_strlcat", test_ft_strlcat},
						{"ft_strchr", test_ft_strchr},
						{"ft_strrchr", test_ft_strrchr},
						{"ft_strncmp", test_ft_strncmp},
						{"ft_strnstr", test_ft_strnstr},
						{"ft_strdup", test_ft_strdup},
						{"ft_memset", test_ft_memset},
						{"ft_bzero", test_ft_bzero},
						{"ft_memcpy", test_ft_memcpy},
						{"ft_memmove", test_ft_memmove},
						{"ft_memchr", test_ft_memchr},
						{"ft_memcmp", test_ft_memcmp},
						{"ft_calloc", test_ft_calloc},
						{"ft_atoi", test_ft_atoi},
						{"ft_itoa", test_ft_itoa},
						{"ft_substr", test_ft_substr},
						{"ft_strjoin", test_ft_strjoin},
						{"ft_strtrim", test_ft_strtrim},
						{"ft_split", test_ft_split},
						{"ft_strmapi", test_ft_strmapi},
						{"ft_striteri", test_ft_striteri},
						{"ft_putchar_fd", test_ft_putchar_fd},
						{"ft_putstr_fd", test_ft_putstr_fd},
						{"ft_putendl_fd", test_ft_putendl_fd},
						{"ft_putnbr_fd", test_ft_putnbr_fd},
						{"ft_lstnew", test_ft_lstnew},
						{"ft_lstadd_front", test_ft_lstadd_front},
						{"ft_lstsize", test_ft_lstsize},
						{"ft_lstlast", test_ft_lstlast},
						{"ft_lstadd_back", test_ft_lstadd_back},
						{"ft_lstdelone", test_ft_lstdelone},
						{"ft_lstclear", test_ft_lstclear},
						{"ft_lstiter", test_ft_lstiter},
						{"ft_lstmap", test_ft_lstmap},
						{NULL, NULL}};
	if (argc != 2)
	{
		printf("Usage: ./test_runner [all | function_name]\n");
		printf("Example: ./test_runner ft_split\n");
		return (1);
	}
	run_all = (strcmp(argv[1], "all") == 0);
	found = 0;
	i = 0;
	while (tests[i].name != NULL)
	{
		if (run_all || strcmp(argv[1], tests[i].name) == 0)
		{
			tests[i].func();
			found = 1;
		}
		i++;
	}
	if (!found)
		printf("Test for '%s' not found.\n", argv[1]);
	return (0);
}
