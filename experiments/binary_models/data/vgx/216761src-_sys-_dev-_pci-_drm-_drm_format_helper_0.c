void FUN1(struct VAR1 *VAR2, const unsigned int *VAR3,
const struct VAR1 *VAR4, const struct VAR5 *VAR6,
const struct VAR7 *VAR8)
{
static const unsigned int VAR9[VAR10] = {
0, 0, 0, 0
};
unsigned int VAR11 = FUN2(VAR8);
unsigned int VAR12 = FUN3(VAR8);
unsigned int VAR13 = VAR6->VAR14->VAR13[0];
unsigned int VAR15 = VAR11 * VAR13;
struct VAR16 *VAR17 = VAR6->VAR17;
void *VAR18 = VAR4[0].VAR18;
unsigned int VAR19;
unsigned int VAR20;
VAR21 *VAR22 = VAR2[0].VAR18, *VAR23;
VAR24 *VAR25;

if (FUN4(VAR17, VAR6->VAR14->VAR14 != VAR26))
return;

if (!VAR3)
VAR3 = VAR9;
VAR19 = VAR3[0];


if (!VAR19)
VAR19 = FUN5(VAR11, 8);


VAR25 = FUN6(VAR15 + VAR11, VAR27);
if (!VAR25)
return;

VAR23 = (VAR21 *)VAR25 + VAR15;

VAR18 += FUN7(VAR8, VAR6->VAR28[0], VAR13);
for (VAR20 = 0; VAR20 < VAR12; VAR20++) {
VAR25 = memcpy(VAR25, VAR18, VAR15);
FUN8(VAR23, VAR25, VAR11);
FUN9(VAR22, VAR23, VAR11);
VAR18 += VAR6->VAR28[0];
VAR22 += VAR19;
}

FUN10(VAR25);
}