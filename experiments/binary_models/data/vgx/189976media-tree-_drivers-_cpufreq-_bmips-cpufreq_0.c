static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
unsigned int VAR4 = VAR2->VAR5[VAR3].VAR6;

switch (VAR7->VAR8) {
case VAR9:
case VAR10:
FUN2(VAR11 << VAR12,
(1 << VAR13) |
(VAR4 << VAR12));
break;
default:
return -VAR14;
}

return 0;
}