static int FUN1(
VAR1 *VAR2,
size_t VAR3,
size_t VAR4,
size_t VAR5,
VAR6 *VAR7,
VAR6 *VAR8)
{
VAR9 *VAR10;

for (VAR10 = VAR2->VAR11; VAR10; VAR10 = VAR10->VAR12) {
if (VAR10->VAR13 || !FUN2(VAR10->VAR14, VAR7))
continue;
if (VAR5 <= VAR10->VAR15)
continue;
if (VAR3 < VAR10->VAR15 + VAR10->VAR16) {
if (FUN3(VAR2, VAR10, VAR3, VAR4, VAR5, VAR8) < 0)
return -1;
}
}

return 0;
}