int
FUN1(struct VAR1 *VAR2, int VAR3, const void *VAR4, void *VAR5,
VAR6 *VAR7)
{
struct VAR8 *VAR9 = VAR2->VAR9;
uint32_t VAR10;
uint64_t VAR11;
uint32_t VAR12, VAR13, VAR14;
VAR6 *VAR15;

VAR12 = VAR9->VAR12;
VAR13 = VAR12 - 1;
VAR14 = VAR12 * sizeof(VAR6);

VAR15 = VAR2->VAR15[VAR3];

VAR11 = FUN2(&VAR9->VAR16, VAR4, VAR9->VAR17[VAR3]);
while ((VAR10 = VAR15[VAR11 & VAR13]) != -1) {
if (FUN3(VAR2, VAR5, VAR10) != 0) {
VAR18 = VAR19;
return -1;
}
if (memcmp((VAR20 *)VAR5 + VAR9->VAR21[VAR3], VAR4,
VAR9->VAR17[VAR3]) == 0) {
if (VAR7)
*VAR7 = VAR10;
return 0;
}
VAR11 = FUN2(&VAR9->VAR16, &VAR11, sizeof(VAR11));
}
return 1;
}