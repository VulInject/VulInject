static int
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
const struct VAR5 *VAR6 = VAR2->VAR7->VAR5;
struct VAR8 **VAR9 = VAR4->VAR10;

if (VAR9[VAR11] &&
!(VAR6->VAR12 & VAR13)) {
FUN2(VAR4->VAR14,
VAR9[VAR11],
"");
return -VAR15;
}

if (VAR9[VAR16] &&
!(VAR6->VAR12 & VAR17)) {
FUN2(VAR4->VAR14,
VAR9[VAR16],
"");
return -VAR15;
}

if (VAR9[VAR18] &&
!(VAR6->VAR12 & VAR19)) {
FUN2(VAR4->VAR14,
VAR9[VAR18],
"");
return -VAR15;
}

if (VAR9[VAR20] &&
!(VAR6->VAR12 & VAR21)) {
FUN2(VAR4->VAR14,
VAR9[VAR20],
"");
return -VAR15;
}

return VAR6->VAR22 && VAR6->VAR23 ? 1 : -VAR15;
}