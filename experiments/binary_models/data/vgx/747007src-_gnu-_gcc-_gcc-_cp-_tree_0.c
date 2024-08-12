FUN1 (tree VAR1)
{
tree VAR2 = FUN2 (FUN3 (VAR1));
for (; VAR2; VAR2 = FUN4 (VAR2))
if (FUN5 (VAR2) == VAR3)
return 0;
return 1;
}