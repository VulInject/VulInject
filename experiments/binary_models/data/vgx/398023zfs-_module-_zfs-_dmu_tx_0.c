static int
FUN1(VAR1 *VAR2, txg_how_t VAR3)
{
VAR4 *VAR5 = VAR2->VAR6->VAR7;

FUN2(VAR2->VAR8);

if (VAR2->VAR9) {
FUN3(VAR10);
return (VAR2->VAR9);
}

if (FUN4(VAR5)) {
FUN3(VAR11);


if (FUN5(VAR5) == VAR12 &&
VAR3 != VAR13)
return (FUN6(VAR14));

return (FUN6(VAR15));
}

if (!VAR2->VAR16 &&
FUN7(VAR2->VAR6)) {
VAR2->VAR17 = VAR18;
FUN3(VAR19);
return (FUN6(VAR15));
}

VAR2->VAR8 = FUN8(VAR2->VAR6, &VAR2->VAR20);
VAR2->VAR21 = NULL;



uint64_t VAR22 = 0;
uint64_t VAR23 = 0;
for (VAR24 *VAR25 = FUN9(&VAR2->VAR26); VAR25 != NULL;
VAR25 = FUN10(&VAR2->VAR26, VAR25)) {
VAR27 *VAR28 = VAR25->VAR29;
if (VAR28 != NULL) {
FUN11(&VAR28->VAR30);
if (VAR28->VAR31 == VAR2->VAR8 - 1) {
FUN12(&VAR28->VAR30);
VAR2->VAR21 = VAR25;
FUN3(VAR32);
return (FUN6(VAR15));
}
if (VAR28->VAR31 == 0)
VAR28->VAR31 = VAR2->VAR8;
FUN13(VAR28->VAR31, ==, VAR2->VAR8);
(void) FUN14(&VAR28->VAR33, VAR2);
FUN12(&VAR28->VAR30);
}
VAR22 += FUN15(&VAR25->VAR34);
VAR23 += FUN15(&VAR25->VAR35);
}


uint64_t VAR36 = FUN16(VAR2->VAR6->VAR7, VAR22);

uint64_t VAR37 = VAR22 + VAR23;

if (VAR2->VAR38 != NULL && VAR36 != 0) {
int VAR39 = FUN17(VAR2->VAR38, VAR37,
VAR36, VAR2->VAR40, &VAR2->VAR41, VAR2);
if (VAR39 != 0)
return (VAR39);
}

FUN3(VAR42);

return (0);
}