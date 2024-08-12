static VAR1
FUN1(VAR2 *VAR3, char *VAR4, uint_t VAR5)
{
int		VAR6;
struct VAR7	*VAR8;

switch (VAR3->VAR9) {
case VAR10:
VAR8 = FUN2((char *)&VAR3->VAR11, sizeof (VAR3->VAR11),
VAR3->VAR9, &VAR6);
break;
case VAR12:
VAR8 = FUN2((char *)&VAR3->VAR13, sizeof (VAR3->VAR13),
VAR3->VAR9, &VAR6);
break;
default: return (VAR14);
}


if (VAR8 == NULL)
VAR4[0] = '';
else
(void) FUN3(VAR4, VAR8->VAR15, VAR5);

return (VAR16);
}