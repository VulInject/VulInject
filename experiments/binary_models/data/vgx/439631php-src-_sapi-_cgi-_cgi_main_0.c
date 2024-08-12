static int FUN1(void)
{

if (!FUN2(VAR1).VAR2) {
return VAR3;
}

if (FUN3()) {
char *VAR4;


if (FUN4()) {
VAR5 *VAR6 = (VAR5*) FUN2(VAR7);

VAR4 = FUN5(VAR6, "");
} else {
VAR4 = getenv("");
}

if (VAR4) {
size_t VAR8 = strlen(VAR4);
VAR4 = FUN6(VAR4, VAR8);
FUN7(VAR4, VAR8);
FUN8(VAR4, VAR8);
FUN9(VAR4);
}
}

if (FUN10() ||
(FUN11(VAR9) && *FUN11(VAR9))
) {
char *VAR10;
size_t VAR11;


VAR11 = strlen(FUN2(VAR1).VAR2);


if (!FUN12(FUN2(VAR1).VAR2[VAR11])) {
VAR10 = FUN13(VAR11 + 2);
memcpy(VAR10, FUN2(VAR1).VAR2, VAR11 + 1);
VAR11 = FUN14(VAR10, VAR11);
VAR10[VAR11++] = VAR12;
} else {
VAR10 = FUN6(FUN2(VAR1).VAR2, VAR11);
VAR11 = FUN14(VAR10, VAR11);
}
VAR10[VAR11] = 0;


FUN15(VAR10, VAR11); 


if (FUN11(VAR9) && *FUN11(VAR9)) {
char *VAR13;

if (FUN4()) {
VAR5 *VAR6 = (VAR5*) FUN2(VAR7);

VAR13 = FUN5(VAR6, "");
} else {
VAR13 = getenv("");
}

if (VAR13) {
size_t VAR14 = strlen(VAR13);
if (VAR14 > 0 && FUN12(VAR13[VAR14 - 1])) {
--VAR14;
}

VAR13 = FUN6(VAR13, VAR14);
FUN7(VAR13, VAR14);
FUN16(VAR10, VAR11, VAR13, VAR14);

FUN9(VAR13);
}
}

FUN9(VAR10);
}

return VAR15;
}