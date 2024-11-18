#include "printf/ft_printf.h"
#include "limits.h"

void	test_main()
{
	int	resft;
	int	resor;
	char	*string = "char pointer";

	printf("\n			MAIN PART START		\n\n");

	resft = ft_printf("CHAR %c a char: %c ", 67, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR %c a char: %c ", 67, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR null %c a char: %c ", 0, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR null %c a char: %c ", 0, NULL);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("INT NULL : %d", NULL);
	printf(" | resft: %i\n", resft);
	resor = printf("INT NULL : %d", NULL);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("INT ZERO int : %d", 0);
	printf(" | resft: %i\n", resft);
	resor = printf("INT ZERO int : %d", 0);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("INT int : %i", -6732424);
	printf(" | resft: %i\n", resft);
	resor = printf("INT int : %i", -6732424);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("%d INT at beginning", -6732424);
	printf(" | resft: %i\n", resft);
	resor = printf("%d INT at beginning", -6732424);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("%i INT at beginning with zeros", 900000);
	printf(" | resft: %i\n", resft);
	resor = printf("%i INT at beginning with zeros", 900000);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("int %d", INT_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("int %d", INT_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("int %d", INT_MIN);
	printf(" | resft: %i\n", resft);
	resor = printf("int %d", INT_MIN);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("STRING: %s", "text as a parameter");
	printf(" | restft: %i\n", resft);
	resor = printf("STRING: %s", "text as a parameter");
	printf(" | restor: %i\n", resor);

	resft = ft_printf("STRING Null %s Null ", NULL);
	printf(" | resft: %i\n", resft);
	resor = printf("STRING Null %s Null ", NULL);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("NOT: %+-k %#123k %k%k");
	printf(" | resft: %i\n", resft);
	resor = printf("NOT: %+-k %#123k %k%k");
	printf(" | resor: %i\n", resor);

	resft = ft_printf("NOT identifiers 0 %m 34%k78%%");
	printf(" | restft: %i\n", resft);
	resor = printf("NOT identifiers 0 %m 34%k78%%");
	printf(" | resor: %i\n", resor);

	resft = ft_printf("one identifier between not identifiers %k 034 %s H78%%", "0000");
	printf(" | resft: %i\n", resft);
	resor = printf("one identifier between not identifiers %k 034 %s H78%%", "0000");
	printf(" | resor: %i\n", resor);

	resft = ft_printf("POINTER identifier %p", string);
	printf(" | resft: %i\n", resft);
	resor = printf("POINTER identifier %p", string);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("POINTER NULL identifier %p", NULL);
	printf(" | resft: %i\n", resft);
	resor = printf("POINTER NULL identifier %p", NULL);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("POINTER int parameter %x", -1569);
	printf(" | resft: %i\n", resft);
	resor = printf("POINTER int parameter %x", -1569);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("POINTER int %p ", 100);
	printf(" | resft: %i\n", resft);
	resor = printf("POINTER int %p ", 100);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("UNSIGNED int %u", 1234567988);
	printf(" | resft: %i\n", resft);
	resor = printf("UNSIGNED int %u", 1234567988);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("UNSIGNED int max %u", ULONG_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("UNSIGNED int max %u", ULONG_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("UNSIGNED int %u", 0);
	printf(" | resft: %i\n", resft);
	resor = printf("UNSIGNED int %u", 0);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("UNSIGNED int %u", 1000000);
	printf(" | resft: %i\n", resft);
	resor = printf("UNSIGNED int %u", 1000000);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("he x long max %x ", LONG_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("he x long max %x ", LONG_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("he x long min %x ", LONG_MIN);
	printf(" | resft: %i\n", resft);
	resor = printf("he x long min %x ", LONG_MIN);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("he x ulong max %x ", ULONG_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("he x ulong max %x ", ULONG_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("HE X long max %X ", LONG_MAX);
	printf(" | resft: %i\n", resft);
	resor = printf("HE X long max %X ", LONG_MAX);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("HE X long min %X ", LONG_MIN);
	printf(" | resft: %i\n", resft);
	resor = printf("HE X long min %X ", LONG_MIN);
	printf(" | resor: %i\n", resor);

	resft = ft_printf("HE X int %X ", 123456789);
	printf(" | resft: %i\n", resft);
	resor = printf("HE X int %X ", 123456789);
	printf(" | resor: %i\n", resor);


	printf("\n			MAIN PART END		\n");
}
void	test_bonus_width_and_minus()
{
	int resft;
	int resor;
	char *string = "char pointer";

	printf("\n		BONUS WIDTH AND MINUS START		\n\n");
	resft = ft_printf("PERCENT %-15% a char: %15%");
	printf(" | restft: %i\n", resft);
	resor = printf("PERCENT %-15% a char: %15%");
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR%-2ca char: %-5c", 0, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR%-2ca char: %-5c", 0, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR %2c a char: %5c", 0, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR %2c a char: %5c", 0, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("POINTER %10p a char: %10p", string, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("POINTER %10p a char: %10p", string, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("POINTER %-10p a char: %-10p", string, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("POINTER %-10p a char: %-10p", string, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("POINTER %10p a char: %10p", -1, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("POINTER %10p a char: %10p", -1, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("POINTER %-10p a char: %-10p", 1, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("POINTER %-10p a char: %-10p", 1, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("INT MAX %10u a char: %10u", INT_MAX, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("INT MAX %10u a char: %10u", INT_MAX, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("ULONG MAX %-15u a char: %-15u", ULONG_MAX, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("ULONG MAX %-15u a char: %-15u", ULONG_MAX, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("INTEGER MAX %15d a char: %15d", INT_MAX, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("INTEGER MAX %15d a char: %15d", INT_MAX, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("INTEGER MIN %-15d a char: %-15d", INT_MIN, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("INTEGER MIN %-15d a char: %-15d", INT_MIN, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("STRING %15s a char: %15s", "PUTINSIDE", 0);
	printf(" | restft: %i\n", resft);
	resor = printf("STRING %15s a char: %15s", "PUTINSIDE", 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("STRING %-15s a char: %-15s", "PUTINSIDE", 0);
	printf(" | restft: %i\n", resft);
	resor = printf("STRING %-15s a char: %-15s", "PUTINSIDE", 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("HEX ULONGMAX %15X a char: %15X", ULONG_MAX, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("HEX ULONGMAX %15X a char: %15X", ULONG_MAX, NULL);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("HEX ULONGMAX %-15X a char: %-15X", ULONG_MAX, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("HEX ULONGMAX %-15X a char: %-15X", ULONG_MAX, NULL);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("hex ULONGMAX %15x a char: %15x", ULONG_MAX, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("hex ULONGMAX %15x a char: %15x", ULONG_MAX, NULL);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("hex ULONGMAX %-15x a char: %-15x", ULONG_MAX, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("hex ULONGMAX %-15x a char: %-15x", ULONG_MAX, NULL);
	printf(" | restor: %i\n", resor);

	printf("\n	!!!!!!!!!!!!!!!!!!! INVALID FLAGS IGNORED !!!!!!!!!!!!!!!	\n");

	resft = ft_printf("CHAR TWO DOTS CONSECUTIVELY %m a char: %c", 67, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR TWO DOTS CONSECUTIVELY %m a char: %c", 67, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR TWO DOTS CONSECUTIVELY %..c a char: %c", 67, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR TWO DOTS CONSECUTIVELY %..c a char: %c", 67, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR THREE DOTS CONSECUTIVELY %+++...c a char: %c", 67, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR THREE DOTS CONSECUTIVELY %+++...c a char: %c", 67, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR THREE DOTS CONSECUTIVELY %..5. a char: %c", 67, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR THREE DOTS CONSECUTIVELY %..5. a char: %c", 67, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR TWO DOTS NUMBER BETWEEN DOTS %.1.c a char: %c ", 67, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR TWO DOTS NUMBER BETWEEN DOTS %.1.c a char: %c ", 67, 68);
	printf(" | restor: %i\n", resor);
	
	// resft = ft_printf("%-1k%-2k%-+0 #5k", '0', 0, '1');
	// printf(" | restft: %i\n", resft);
	// resor = printf("%-1k%-2k%-+0 #5k", '0', 0, '1');
	// printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR TWO DOTS NUMBER BETWEEN DOTS .1.c a char: %");
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR TWO DOTS NUMBER BETWEEN DOTS .1.c a char: %");
	printf(" | restor: %i\n", resor);

	printf("	!!!!!!!!!!!!!!!!!!! INVALID FLAGS IGNORED !!!!!!!!!!!!!!!	\n");

	printf("\n		BONUS WIDTH AND MINUS END		\n");
}

void	test_bonus_flags()
{
	int resft;
	int resor;
	char *string = "char pointer";

	printf("\n		BONUS + SPACE # START		\n\n");

	// resft = ft_printf("PERCENT % -0+15% a char: % +015%");
	// printf(" | restft: %i\n", resft);
	// resor = printf("PERCENT % -+015% a char: % +015%");
	// printf(" | restor: %i\n", resor);
	
	resft = ft_printf("%-1c%-2c%-3c", '0', 0, '1');
	printf(" | restft: %i\n", resft);
	resor = printf("%-1c%-2c%-3c", '0', 0, '1');
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR%-0+2ca char: %-0+5c", 0, 68);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR%-0+2ca char: %-0+5c", 0, 68);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("CHAR %+02c a char: %+05c", 66, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("CHAR %+02c a char: %+05c", 66, 0);
	printf(" | restor: %i\n", resor);

	/*	START POINTERS	*/
	resft = ft_printf("POINTER % +#010p a char: %+0 10p", string, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("POINTER % +#010p a char: %+0 10p", string, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("POINTER % #010p a char: %+0 10p", string, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("POINTER % #010p a char: %+0 10p", string, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("POINTER %#010p a char: %+0 10p", string, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("POINTER %#010p a char: %+0 10p", string, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("POINTER %-0+10p a char: %-0+10p", string, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("POINTER %-0+10p a char: %-0+10p", string, 0);
	printf(" | restor: %i\n", resor);
	/*	END POINTERS	*/

	resft = ft_printf("INT MAX %# 0+15u a char: %+015u", INT_MAX, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("INT MAX %# +015u a char: %0+15u", INT_MAX, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("ULONG MAX %#-0+15u a char: %-+015u", ULONG_MAX, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("ULONG MAX %#-+015u a char: %-0+15u", ULONG_MAX, 0);
	printf(" | restor: %i\n", resor);

	/*	START INTEGER d i FLAGS */

	resft = ft_printf("  INTEGER MAX % 015d a char: %+015d", INT_MAX, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("  INTEGER MAX % 015d a char: %+015d", INT_MAX, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("+ INTEGER MAX %+ 015d a char: %+020d", INT_MAX, INT_MIN);
	printf(" | restft: %i\n", resft);
	resor = printf("+ INTEGER MAX %+ 015d a char: %+020d", INT_MAX, INT_MIN);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("+ 04 %05d a char: %04d", -15, -14);
	printf(" | restft: %i\n", resft);
	resor = printf("+ 04 %05d a char: %04d", -15, -14);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("INTEGER MAX %+ 015d a char: %+015d", INT_MAX, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("INTEGER MAX %+ 015d a char: %+015d", INT_MAX, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("INTEGER MIN %-+015d a char: %-0+15d", INT_MIN, 0);
	printf(" | restft: %i\n", resft);
	resor = printf("INTEGER MIN %-0+15d a char: %-0+15d", INT_MIN, 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("STRING %+015s a char: %0+15s", "PUTINSIDE", 0);
	printf(" | restft: %i\n", resft);
	resor = printf("STRING %+015s a char: %0+15s", "PUTINSIDE", 0);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("STRING %+0-15s a char: %+0-15s", "PUTINSIDE", 0);
	printf(" | restft: %i\n", resft);
	resor = printf("STRING %+0-15s a char: %+0-15s", "PUTINSIDE", 0);
	printf(" | restor: %i\n", resor);

	//	END INTEGER d i FLAGS
	//	START ULONG X

	resft = ft_printf("HEX ULONGMAX %#0+12X a char: %#0+12X", ULONG_MAX, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("HEX ULONGMAX %#0+12X a char: %#0+12X", ULONG_MAX, NULL);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("HEX ULONGMAX %#- +12X a char: %#+- 12X", ULONG_MAX, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("HEX ULONGMAX %-#+ 12X a char: %#- +12X", ULONG_MAX, NULL);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("HEX lowercase ULONGMAX %0+15x a char: %0+15x", ULONG_MAX, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("HEX lowercase ULONGMAX %+015x a char: %+015x", ULONG_MAX, NULL);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("HEX lowercase ULONGMAX %-0+15x a char: %-0+15x", ULONG_MAX, NULL);
	printf(" | restft: %i\n", resft);
	resor = printf("HEX lowercase ULONGMAX %-0+15x a char: %-0+15x", ULONG_MAX, NULL);
	printf(" | restor: %i\n", resor);
	//	END ULONG X
	
	printf("\n		BONUS + SPACE # END		\n\n");
}
void	test_bonus_precision()
{
	int resft;
	int resor;
	//char *string = "char pointer";
	
	resft = ft_printf("x INT MIN %++0011.5x a char: %0 11.5x", INT_MIN, 123);
	printf(" | restft: %i\n", resft);
	resor = printf("x INT MIN %++0011.5x a char: %0 11.5x", INT_MIN, 123);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("i INT MIN %+ 13.15i a char: %+0 11.5i", INT_MIN, -123);
	printf(" | restft: %i\n", resft);
	resor = printf("i INT MIN %+ 13.15i a char: %+0 11.5i", INT_MIN, -123);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("i INT MIN - %+ -13.15i a char: %-+0 11.5i", INT_MIN, -123);
	printf(" | restft: %i\n", resft);
	resor = printf("i INT MIN - %+ -13.15i a char: %-+0 11.5i", INT_MIN, -123);
	printf(" | restor: %i\n", resor);

	resft = ft_printf("i INT MAX %+ 13.15i a char: %+0 11.5i", INT_MAX, 123);
	printf(" | restft: %i\n", resft);
	resor = printf("i INT MAX %+ 13.15i a char: %+0 11.5i", INT_MAX, 123);
	printf(" | restor: %i\n", resor);

	resor = printf("x INT MAX %0# 11.12x a char: %0 11.12x", INT_MAX, 123);
	printf(" | restor: %i\n", resor);
	resft = ft_printf("x INT MAX %0# 11.12x a char: %0 11.12x", INT_MAX, 123);
	printf(" | restft: %i\n", resft);

	 resft = ft_printf("STRING: %0 8.4s a char: %0 8.2s", "STRING", "123");
	 printf(" | restft: %i\n", resft);
	 resor = printf("STRING: %0 8.4s a char: %0 8.2s", "STRING", "123");
	 printf(" | restor: %i\n", resor);

	 resft = ft_printf("STRING: %0 8.s a char: %0 8.0s", "STRING", "123");
	 printf(" | restft: %i\n", resft);
	 resor = printf("STRING: %0 8.s a char: %0 8.0s", "STRING", "123");
	 printf(" | restor: %i\n", resor);

	 resor = printf("STRING: %0 8.10s a char: %0 8.10s", "STRING", "123");
	 printf(" | restor: %i\n", resor);
	 resft = ft_printf("STRING: %0 8.10s a char: %0 8.10s", "STRING", "123");
	 printf(" | restft: %i\n", resft);
}
int main(void)
{
	//test_main();
	//test_bonus_width_and_minus();
	//test_bonus_flags();
	//test_bonus_precision();
	return 0;
}
