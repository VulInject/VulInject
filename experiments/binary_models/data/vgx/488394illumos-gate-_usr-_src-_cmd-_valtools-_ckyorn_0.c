static void
FUN1(void)
{
switch (*VAR1) {
default:
(void) fprintf(VAR2,
FUN2(""), VAR1);
(void) fprintf(VAR2, FUN2(VAR3));
(void) fprintf(VAR2, FUN2(VAR4));
break;

case '':
(void) fprintf(VAR2,
FUN2(""), VAR1);
break;

case '':
(void) fprintf(VAR2,
FUN2(""), VAR1);
(void) fprintf(VAR2, FUN2(VAR3));
(void) fprintf(VAR2,
FUN2(""));
break;

case '':
(void) fprintf(VAR2,
FUN2(""), VAR1);
(void) fprintf(VAR2, FUN2(VAR3));
(void) fprintf(VAR2,
FUN2(""));
break;
}
FUN3(1);
}