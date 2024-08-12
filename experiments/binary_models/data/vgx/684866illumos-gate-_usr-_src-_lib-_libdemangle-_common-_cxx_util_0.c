VAR1
FUN1(const VAR2 *VAR3, size_t VAR4, VAR5 *VAR6)
{
FUN2(VAR4, <, VAR3->VAR7);

const VAR5 *VAR8 = &VAR3->VAR9[VAR4];
const VAR10 *VAR11 = VAR8->VAR12;
size_t VAR13 = FUN3(VAR6);

for (size_t VAR14 = 0; VAR14 < VAR8->VAR15; VAR14++, VAR11++) {
str_pair_t copy = { 0 };

if (!FUN4(VAR11, &copy))
goto VAR16;

if (!FUN5(VAR6, &copy.VAR17, &copy.VAR18))
goto VAR16;
}

return (VAR19);

VAR16:
for (size_t VAR14 = 0; VAR14 < FUN3(VAR6) - VAR13; VAR14++)
FUN6(VAR6, NULL);
return (VAR20);
}