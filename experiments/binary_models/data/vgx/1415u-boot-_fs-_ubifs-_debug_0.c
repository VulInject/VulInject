const char *FUN1(const struct VAR1 *VAR2,
const union VAR3 *VAR4, char *VAR5, int VAR6)
{
char *VAR7 = VAR5;
int VAR8 = FUN2(VAR2, VAR4);

if (VAR2->VAR9 == VAR10) {
switch (VAR8) {
case VAR11:
VAR6 -= snprintf(VAR7, VAR6, "",
(unsigned long)FUN3(VAR2, VAR4),
FUN4(VAR8));
break;
case VAR12:
case VAR13:
VAR6 -= snprintf(VAR7, VAR6, "",
(unsigned long)FUN3(VAR2, VAR4),
FUN4(VAR8), FUN5(VAR2, VAR4));
break;
case VAR14:
VAR6 -= snprintf(VAR7, VAR6, "",
(unsigned long)FUN3(VAR2, VAR4),
FUN4(VAR8), FUN6(VAR2, VAR4));
break;
case VAR15:
VAR6 -= snprintf(VAR7, VAR6, "",
(unsigned long)FUN3(VAR2, VAR4),
FUN4(VAR8));
break;
default:
VAR6 -= snprintf(VAR7, VAR6, "",
VAR4->VAR16[0], VAR4->VAR16[1]);
}
} else
VAR6 -= snprintf(VAR7, VAR6, "", VAR2->VAR9);
FUN7(VAR6 > 0);
return VAR7;
}