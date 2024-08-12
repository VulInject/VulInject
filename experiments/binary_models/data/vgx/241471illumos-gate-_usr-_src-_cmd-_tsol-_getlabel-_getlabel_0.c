static int
FUN1(char *VAR1, uint_t VAR2)
{
VAR3 *VAR4;
char	*VAR5;

if ((VAR4 = FUN2(VAR6)) == NULL) {
FUN3("");
return (1);
} else if (FUN4(VAR1, VAR4) != 0) {
FUN3(VAR1);
FUN5(VAR4);
return (1);
}

(void) FUN6("", VAR1);
switch (VAR2)  {
case VAR7:
if (FUN7(VAR4, &VAR5, VAR8, VAR9) != 0) {
FUN3(FUN8(""
""));
FUN5(VAR4);
return (2);
}
break;
case VAR10:
if (FUN7(VAR4, &VAR5, VAR8, VAR11) != 0) {
FUN3(FUN8(""
""));
FUN5(VAR4);
return (2);
}
break;
default:
if (FUN7(VAR4, &VAR5, VAR8, VAR12) != 0) {
FUN3(FUN8(""
""));
FUN5(VAR4);
return (2);
}
break;
}
(void) FUN6("", VAR5);

free(VAR5);
FUN5(VAR4);
return (0);
}