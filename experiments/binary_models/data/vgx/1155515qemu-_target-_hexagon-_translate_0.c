static bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
target_ulong VAR5 = VAR4->VAR6.VAR7 & VAR8;
bool VAR9 = false;
int VAR10;

for (VAR10 = 0; !VAR9 && VAR10 < VAR11; VAR10++) {
uint32_t VAR12 = FUN2(VAR2,
VAR4->VAR6.VAR13 + VAR10 * sizeof(VAR14));
VAR9 = FUN3(VAR12);
}
uint32_t VAR15 =  VAR4->VAR6.VAR13 + VAR10 * sizeof(VAR14);
return VAR9 && VAR15 - VAR5 >= VAR16;
}