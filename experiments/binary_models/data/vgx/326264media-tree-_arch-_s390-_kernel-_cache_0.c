int FUN1(unsigned int VAR1)
{
struct VAR2 *VAR3 = FUN2(VAR1);
struct VAR4 *VAR5 = VAR3->VAR6;
unsigned int VAR7, VAR8, VAR9;
union cache_topology VAR10;
enum cache_type VAR11;

if (!FUN3(34))
return -VAR12;
VAR10.VAR13 = FUN4(VAR14, 0, 0);
for (VAR8 = 0, VAR7 = 0; VAR7 < VAR3->VAR15 &&
VAR8 < VAR3->VAR16; VAR8++, VAR7++) {
if (!VAR5)
return -VAR17;
VAR9 = (VAR10.VAR18[VAR7].VAR19 == VAR20) ? 1 : 0;
VAR11 = FUN5(&VAR10.VAR18[0], VAR7);
if (VAR11 == VAR21) {
FUN6(VAR5++, VAR9, VAR22, VAR7, VAR1);
FUN6(VAR5++, VAR9, VAR23, VAR7, VAR1);
} else {
FUN6(VAR5++, VAR9, VAR11, VAR7, VAR1);
}
}
return 0;
}