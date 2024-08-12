static int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = VAR2->VAR4;
unsigned int VAR5 = VAR4->VAR5;
unsigned int VAR6 = VAR4->VAR6;
struct VAR7 *VAR7 = VAR2->VAR7;
u8 VAR8 = VAR7->VAR9[VAR10];
unsigned int VAR11 = 0;
unsigned int VAR12 = 0;
int VAR13;
int VAR14;



for (VAR14 = 0; VAR14 < VAR4->VAR15; VAR14++) {
int VAR16 = FUN2(VAR5);

if (VAR2->VAR17 & (1 << VAR14)) {
VAR11 |= 1 << VAR16;
VAR12 |= 1 << VAR16;
}

VAR5 &= ~(1 << VAR16);
}

for (VAR14 = 0; VAR14 < VAR4->VAR18; VAR14++) {
int VAR16 = FUN2(VAR6);

if (VAR2->VAR19 & (1 << VAR14))
VAR11 |= 1 << VAR16;

VAR6 &= ~(1 << VAR16);
}

VAR13 = FUN3(VAR7, VAR11, VAR20);
if (VAR13)
return VAR13;


if (VAR4->VAR21) {
u8 VAR22;

VAR13 = FUN4(VAR7, VAR8);
if (VAR13)
return VAR13;


VAR22 = VAR13 & ~VAR12;
VAR22 |= VAR12;

VAR13 = FUN5(VAR7, VAR8, VAR22);
}

return 0;
}