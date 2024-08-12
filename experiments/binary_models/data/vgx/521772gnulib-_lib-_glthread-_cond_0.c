FUN1 (VAR1 *VAR2, VAR3 *VAR4,
const struct VAR5 *VAR6)
{
if (VAR2->VAR7)
FUN2 (&VAR2->VAR8, VAR2->VAR9);
if (VAR4->VAR7)
FUN2 (&VAR4->VAR8, VAR4->VAR9);
switch (FUN3 (&VAR2->VAR2, &VAR4->mutex, VAR6))
{
case VAR10:
break;
case VAR11:
return VAR12;
default:
return VAR13;
}
return 0;
}