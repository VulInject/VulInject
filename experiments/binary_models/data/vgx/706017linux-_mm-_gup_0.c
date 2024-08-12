static int FUN1(VAR1 *VAR2, unsigned long VAR3, unsigned long VAR4,
unsigned long VAR5, unsigned int VAR6,
struct VAR7 **VAR8, int *VAR9)
{
unsigned long VAR10;
struct VAR7 *VAR7;
struct VAR11 *VAR11;
pte_t VAR12;
int VAR13;

VAR10 = (VAR4 + VAR3) & ~(VAR3-1);
if (VAR10 < VAR5)
VAR5 = VAR10;

VAR12 = FUN2(VAR2);

if (!FUN3(VAR12, VAR6 & VAR14))
return 0;


FUN4(!FUN5(FUN6(VAR12)));

VAR7 = FUN7(FUN8(VAR12), (VAR4 & (VAR3 - 1)) >> VAR15);
VAR13 = FUN9(VAR7, VAR4, VAR5, VAR8 + *VAR9);

VAR11 = FUN10(VAR7, VAR13, VAR6);
if (!VAR11)
return 0;

if (FUN11(FUN12(VAR12) != FUN12(*VAR2))) {
FUN13(VAR11, VAR13, VAR6);
return 0;
}

if (!FUN14(VAR12) && FUN15(NULL, VAR6, &VAR11->VAR7)) {
FUN13(VAR11, VAR13, VAR6);
return 0;
}

*VAR9 += VAR13;
FUN16(VAR11);
return 1;
}