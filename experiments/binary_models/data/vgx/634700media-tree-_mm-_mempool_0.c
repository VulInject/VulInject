static void FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
VAR5 *VAR6 = VAR3;
size_t VAR7;

for (VAR7 = 0; VAR7 < VAR4; VAR7++) {
u8 VAR8 = (VAR7 < VAR4 - 1) ? VAR9 : VAR10;

if (VAR6[VAR7] != VAR8) {
FUN2(VAR2, VAR3, VAR4, VAR7);
return;
}
}
memset(VAR6, VAR11, VAR4);
}