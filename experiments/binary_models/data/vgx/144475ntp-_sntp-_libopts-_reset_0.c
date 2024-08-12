void
FUN1(VAR1 * VAR2, VAR3 * VAR4)
{
static bool VAR5 = false;

tOptState VAR6 = FUN2(VAR7);
char const * VAR8 = VAR4->VAR9.VAR10;
tSuccess     VAR11;

if (VAR2 <= VAR12)
return;

if (VAR5)
return;

if (  (! FUN3(VAR2))
|| (VAR2->VAR13 == NULL))
FUN4(VAR14);

if ((VAR8 == NULL) || (*VAR8 == VAR15)) {
fprintf(VAR16, VAR17, VAR2->VAR18, VAR4->VAR19);
VAR2->FUN5(VAR2, VAR20);

assert(0 == 1);
}

VAR5 = true;

if (VAR8[1] == VAR15) {
if (*VAR8 == '') {
FUN6(VAR2);
VAR5 = false;
return;
}

VAR11 = FUN7(VAR2, (VAR21)*VAR8, &VAR6);
if (! FUN8(VAR11)) {
fprintf(VAR16, VAR22, VAR2->VAR23, *VAR8);
VAR2->FUN5(VAR2, VAR20);

assert(0 == 1);
}
} else {
VAR11 = FUN9(VAR2, VAR8, &VAR6);
if (! FUN8(VAR11)) {
fprintf(VAR16, VAR24, VAR2->VAR23, VAR8);
VAR2->FUN5(VAR2, VAR20);

assert(0 == 1);
}
}


FUN10(VAR2, VAR6.VAR4);
VAR5 = false;
}