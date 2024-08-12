static int
FUN1(const struct VAR1 *VAR2)
{
const struct VAR3 *VAR4;

VAR4 = FUN2(VAR2, struct VAR3 *);
switch (FUN3(VAR4->VAR5)) {
case VAR6:
case VAR7:
return (1);
default:
break;
}

return (0);
}