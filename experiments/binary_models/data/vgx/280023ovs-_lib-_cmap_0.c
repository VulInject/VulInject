unsigned long
FUN1(const struct VAR1 *VAR1, unsigned long VAR2,
uint32_t VAR3[], const struct VAR4 *VAR5[])
{
const struct VAR6 *VAR7 = FUN2(VAR1);
unsigned long VAR8 = VAR2;
int VAR9;
uint32_t VAR10[sizeof VAR2 * VAR11];
const struct VAR12 *VAR13[sizeof VAR2 * VAR11];
const struct VAR12 *VAR14[sizeof VAR2 * VAR11];
uint32_t VAR15[sizeof VAR2 * VAR11];


FUN3(VAR9, VAR2) {
VAR10[VAR9] = FUN4(VAR7, VAR3[VAR9]);
VAR13[VAR9] = &VAR7->VAR16[VAR10[VAR9] & VAR7->VAR17];
FUN5(VAR13[VAR9]);
}

FUN3(VAR9, VAR2) {
uint32_t VAR18;
const struct VAR12 *VAR19 = VAR13[VAR9];
const struct VAR4 *VAR20;

do {
VAR18 = FUN6(VAR19);
VAR20 = FUN7(VAR19, VAR3[VAR9]);
} while (FUN8(FUN9(VAR19, VAR18)));

if (!VAR20) {

VAR14[VAR9] = &VAR7->VAR16[FUN10(VAR10[VAR9]) & VAR7->VAR17];
FUN5(VAR14[VAR9]);
VAR15[VAR9] = VAR18; 
continue;
}

FUN11(VAR2, VAR9); 
FUN5(VAR20);
VAR5[VAR9] = VAR20;
}

FUN3(VAR9, VAR2) {
uint32_t VAR21;
const struct VAR12 *VAR22 = VAR14[VAR9];
const struct VAR4 *VAR20;

do {
VAR21 = FUN6(VAR22);
VAR20 = FUN7(VAR22, VAR3[VAR9]);
} while (FUN8(FUN9(VAR22, VAR21)));

if (!VAR20) {

if (FUN8(FUN9(VAR13[VAR9], VAR15[VAR9]))) {
VAR20 = FUN12(VAR13[VAR9], VAR14[VAR9], VAR3[VAR9]);
if (VAR20) {
goto VAR23;
}
}

FUN11(VAR8, VAR9); 
continue;
}
VAR23:
FUN5(VAR20);
VAR5[VAR9] = VAR20;
}
return VAR8;
}