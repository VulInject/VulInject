static int
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2, uintptr_t VAR3, size_t VAR4)
{
VAR5 *VAR6 = VAR2->VAR7;
const uintptr_t VAR8 = VAR3 + VAR4;
const int VAR9 = VAR6->VAR10;
const int VAR11 = VAR9 | VAR12;
VAR13 *VAR14 = VAR6->VAR15;

FUN2(VAR14 != NULL);

VAR3 &= VAR16;
uintptr_t VAR17 = VAR3 - (VAR18)VAR2->VAR19 + VAR6->VAR20;

do {
VAR21 *VAR22;
pfn_t VAR23;

VAR22 = FUN3(VAR14, VAR17, VAR9);
if (VAR22 == NULL) {
return (VAR24);
}

VAR23 = FUN4(VAR22);
FUN5(VAR23, !=, VAR25);


FUN6(VAR1, (VAR26)VAR3, VAR27, VAR23, VAR11, VAR28);

if (FUN7(VAR22)) {

FUN8(VAR1, (VAR26)VAR3, VAR27, VAR29);
return (VAR24);
}

VAR3 += VAR27;
VAR17 += VAR27;
} while (VAR3 < VAR8);

return (0);
}