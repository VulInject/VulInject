static struct VAR1 *FUN1(struct VAR2 *VAR3,
const struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(-VAR8);
struct VAR9 *VAR10 = FUN3(VAR3);
unsigned int VAR11 = VAR5->VAR5[0];
unsigned int VAR12 = VAR5->VAR5[1];
struct VAR13 *VAR14;
struct VAR1 *VAR15;
unsigned long VAR16;
unsigned int VAR17;

switch (VAR11) {
case VAR18:
VAR14 = FUN4(VAR10, VAR12);
if (VAR14)
VAR7 = &VAR14->VAR7;

break;

default:
break;
}

if (FUN5(VAR7))
return FUN6(VAR7);

FUN7(&VAR10->VAR19, VAR16);

for (VAR17 = 0; VAR17 < VAR10->VAR3.VAR20; VAR17++) {
VAR15 = &VAR10->VAR3.VAR21[VAR17];
if (!VAR15->VAR22) {
VAR15->VAR22 = VAR7;
VAR7->VAR15 = VAR15;
break;
}

VAR15 = NULL;
}

FUN8(&VAR10->VAR19, VAR16);

return VAR15 ?: FUN2(-VAR23);
}