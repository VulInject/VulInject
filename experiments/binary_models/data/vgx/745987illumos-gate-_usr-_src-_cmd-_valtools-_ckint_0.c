static char	*VAR1;
static char	*VAR2, *VAR3, *VAR4, *VAR5;
static int	VAR6 = VAR7;
static int	VAR8;
static short	VAR9;

static const char	VAR10[] = "";
static const char	VAR11[] = "";
static const char	VAR12[] = "";

static void
FUN1(void)
{
switch (*VAR1) {
default:
(void) fprintf(VAR13,
FUN2(""), VAR1);
(void) fprintf(VAR13, FUN2(VAR14));
(void) fprintf(VAR13, FUN2(VAR15));
break;

case '':
(void) fprintf(VAR13,
FUN2(""), VAR1);
break;

case '':
(void) fprintf(VAR13,
FUN2(""), VAR1);
(void) fprintf(VAR13, FUN2(VAR14));
(void) fprintf(VAR13,
FUN2(""));
break;

case '':
(void) fprintf(VAR13,
FUN2(""), VAR1);
(void) fprintf(VAR13, FUN2(VAR14));
(void) fprintf(VAR13,
FUN2(""));
break;
}
FUN3(1);
}