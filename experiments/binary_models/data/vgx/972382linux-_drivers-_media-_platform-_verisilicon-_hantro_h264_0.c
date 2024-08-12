static void
FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = &VAR2->VAR5.VAR4;
const struct VAR6 *VAR7 = VAR4->VAR7;
const struct VAR8 *VAR9 = VAR4->VAR9;
const size_t VAR10 = FUN2(VAR7->VAR11);
const size_t VAR12 = FUN2(VAR7->VAR11[0]);
const size_t VAR13 = FUN2(VAR7->VAR14[0]);
struct VAR15 *VAR16 = VAR2->VAR5.VAR17.VAR18;
VAR19 *VAR20 = (VAR19 *)VAR16->VAR21;
const VAR19 *VAR22;
int VAR23, VAR24;

if (!(VAR9->VAR25 & VAR26))
return;

for (VAR23 = 0; VAR23 < VAR10; VAR23++) {
VAR22 = (VAR19 *)&VAR7->VAR11[VAR23];
for (VAR24 = 0; VAR24 < VAR12 / 4; VAR24++)
*VAR20++ = FUN3(VAR22[VAR24]);
}


for (VAR23 = 0; VAR23 < 2; VAR23++) {
VAR22 = (VAR19 *)&VAR7->VAR14[VAR23];
for (VAR24 = 0; VAR24 < VAR13 / 4; VAR24++)
*VAR20++ = FUN3(VAR22[VAR24]);
}
}