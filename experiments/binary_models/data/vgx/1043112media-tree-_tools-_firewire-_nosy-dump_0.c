static void
FUN1(struct VAR1 *VAR2, size_t VAR3,
int VAR4, int VAR5)
{
const struct VAR6 *VAR7;
int VAR8 = 0;
int VAR9;

VAR7 = &VAR6[VAR2->VAR10.VAR11];

for (VAR9 = 0; VAR9 < VAR7->VAR12; VAR9++) {
const struct VAR13 *VAR14 = &VAR7->VAR15[VAR9];
int VAR16;

if (VAR14->VAR17 & VAR5)
continue;
if (VAR4 && !(VAR14->VAR17 & VAR4))
continue;

if (VAR14->VAR16 < 0)
VAR16 = VAR3 * 8 + VAR14->VAR16 - 32;
else
VAR16 = VAR14->VAR16;

if (VAR14->VAR18 != NULL) {
uint32_t VAR19;

VAR19 = FUN2(VAR2, VAR16, VAR14->VAR20);
FUN3("", VAR14->VAR18[VAR19]);
} else if (VAR14->VAR20 == 0) {
FUN3("", VAR14->VAR21);
FUN4((unsigned char *) VAR2 + (VAR16 / 8 + 4), VAR8);
FUN3("");
} else {
unsigned long long VAR19;
int VAR22, VAR23;

if ((VAR16 & ~31) != ((VAR16 + VAR14->VAR20 - 1) & ~31)) {

VAR22 = ((VAR16 + 31) & ~31) - VAR16;
VAR23 = VAR14->VAR20 - VAR22;

VAR19 = FUN2(VAR2, VAR16, VAR22);
VAR19 = (VAR19 << VAR23) |
FUN2(VAR2, VAR16 + VAR22, VAR23);
} else {
VAR19 = FUN2(VAR2, VAR16, VAR14->VAR20);
}

FUN3("", VAR14->VAR21, (VAR14->VAR20 + 3) / 4, VAR19);

if (VAR14->VAR17 & VAR24)
VAR8 = VAR19;
}

if (VAR9 < VAR7->VAR12 - 1)
FUN3("");
}
}