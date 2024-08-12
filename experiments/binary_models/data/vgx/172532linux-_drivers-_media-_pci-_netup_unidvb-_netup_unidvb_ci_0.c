static int FUN1(struct VAR1 *VAR2,
int VAR3, int open)
{
struct VAR4 *VAR5 = VAR2->VAR6;
struct VAR7 *VAR8 = VAR5->VAR8;
u16 VAR9 = (VAR5->VAR10 == 1) ? VAR11 : 0;
u16 VAR12 = 0;

FUN2(&VAR8->VAR13->VAR8, "",
VAR14, FUN3(VAR8->VAR15 + VAR16));
VAR12 = FUN3(VAR8->VAR15 + VAR16);
if (VAR12 & (VAR17 << VAR9)) {
VAR5->VAR18 = VAR19 |
VAR20;
} else if (VAR12 & (VAR21 << VAR9)) {
VAR5->VAR18 = VAR19;
} else {
VAR5->VAR18 = 0;
}
return VAR5->VAR18;
}