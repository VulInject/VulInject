static int FUN1(VAR1 *VAR2, VAR3 *VAR4,
uint32_t VAR5, uint32_t VAR6,
const char *VAR7, uint32_t VAR8)
{
int VAR9;

FUN2(VAR5 <= VAR6 && VAR6 - VAR5 < 32);
if (VAR8 < VAR5 || VAR8 > VAR6) {
FUN3(VAR2->VAR10, VAR11, ""
""VAR12""VAR12""VAR12"",
VAR7, VAR8, VAR5, VAR6);
return VAR13;
}

if (VAR8 == VAR6)
VAR9 = VAR6 - VAR5;
else
VAR9 = VAR8 - VAR5 + 1;
if (FUN4(VAR4) < VAR9)
return FUN5(VAR14);

if (VAR2->VAR15) {
char VAR16[33];
int VAR17;
for (VAR17 = 0; VAR17 < VAR9; VAR17++) {
if (VAR5 + VAR17 == VAR8)
VAR16[VAR17] = '';
else
VAR16[VAR17] = '';
}
VAR16[VAR17] = 0;
FUN6(VAR2, FUN7(VAR4),
VAR7, NULL, VAR16, VAR8);
}

if (VAR9 > 0)
FUN8(VAR4, VAR9, (1 << VAR9) - 1 - (VAR8 != VAR6));

return 0;
}