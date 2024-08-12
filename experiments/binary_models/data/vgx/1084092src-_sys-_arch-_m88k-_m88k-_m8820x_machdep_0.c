VAR1
FUN1()
{
u_int VAR2;
struct VAR3 *VAR4;

VAR4 = VAR3;
for (VAR2 = VAR5; VAR2 != 0; VAR2--, VAR4++) {
if (VAR4->VAR6 == NULL)
continue;

if (FUN2(VAR4->VAR7) == VAR8 &&
FUN3(VAR4->VAR7) <= 6)
return VAR9;
}

if (((FUN4() & VAR10) >> VAR11) <= 9)
return VAR9;

return VAR12;
}