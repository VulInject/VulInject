static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
const struct VAR4 **VAR5,
const struct VAR6 **VAR7)
{
int VAR8;

for (VAR8 = 0; VAR8 < VAR2->VAR9; VAR8++) {
const struct VAR4 *VAR10 = &VAR2->VAR11[VAR8];
int VAR12;

for (VAR12 = 0; VAR12 < VAR10->VAR13; VAR12++) {
const struct VAR6 *VAR14 = &VAR10->VAR15[VAR12];

if (VAR14->VAR16 == VAR17)
continue;

if (VAR3 >= VAR14->VAR16 &&
VAR3 < VAR14->VAR16 + VAR14->VAR18) {
int VAR19;

VAR19 = VAR14->VAR20 + VAR3 - VAR14->VAR16;
if (VAR5)
*VAR5 = VAR10;
if (VAR7)
*VAR7 = VAR14;

return VAR19;
}
}
}

return -VAR21;
}