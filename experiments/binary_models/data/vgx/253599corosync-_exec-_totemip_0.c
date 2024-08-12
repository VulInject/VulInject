const char *FUN1(const struct VAR1 *VAR2)
{
static char VAR3[VAR4];

VAR3[0] = 0;

switch (VAR2->VAR5) {
case VAR6:
FUN2(VAR2->VAR5, &((struct VAR7 *)(VAR2))->VAR8, VAR3,
VAR4);
break;
case VAR9:
FUN2(VAR2->VAR5, &((struct VAR10 *)(VAR2))->VAR11, VAR3,
VAR4);
break;
default:
return (NULL);
}

return (VAR3);
}