VAR1 *
FUN1(char ***VAR2)
{
VAR3 *VAR4;
VAR1 *new;
char **argv;

argv = *VAR2;

if ((VAR4 = FUN2(*argv)) == NULL)
FUN3(1, "", *argv);
++argv;
if (VAR4->VAR5 & (VAR6|VAR7) && !*argv)
FUN3(1, "", *--argv);

switch(VAR4->VAR5) {
case VAR8:
new = NULL;
break;
case VAR9:
new = (VAR4->VAR10)(NULL, NULL, 0);
break;
case VAR6:
new = (VAR4->VAR10)(*argv++, NULL, 0);
break;
case VAR7:
new = (VAR4->VAR10)(NULL, &argv, VAR4->VAR11 == VAR12);
VAR13 = 1;
break;
default:
FUN4();
}
*VAR2 = argv;
return (new);
}