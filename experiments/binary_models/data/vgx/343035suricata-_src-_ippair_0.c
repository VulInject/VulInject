void FUN1(bool VAR1)
{
FUN2("");
if (FUN3() > 0) {
FUN4(sizeof(VAR2) + FUN3() > VAR3);
VAR4 = (VAR5)(sizeof(VAR2) + FUN3());
}

memset(&VAR6,  0, sizeof(VAR6));

FUN5(VAR7);
FUN5(VAR8);
FUN5(VAR9);
FUN5(VAR6.VAR10);
FUN6(&VAR11);


VAR6.VAR12   = (VAR13)FUN7();
VAR6.VAR14   = VAR15;
VAR6.VAR16    = VAR17;
FUN8(VAR6.VAR10, VAR18);


const char *VAR19;
uint32_t VAR20 = 0;


uint64_t VAR21;
if ((FUN9("", &VAR19)) == 1)
{
if (FUN10(VAR19, &VAR21) < 0) {
FUN11(""
"",
VAR19);
FUN12(VAR22);
} else {
FUN8(VAR6.VAR10, VAR21);
}
}
if ((FUN9("", &VAR19)) == 1)
{
if (FUN13(&VAR20, 10, strlen(VAR19),
VAR19) > 0) {
VAR6.VAR14 = VAR20;
}
}

if ((FUN9("", &VAR19)) == 1)
{
if (FUN13(&VAR20, 10, strlen(VAR19),
VAR19) > 0) {
VAR6.VAR16 = VAR20;
} else {
FUN14("", ""VAR23, VAR6.VAR16);
}
}
FUN2(""VAR24""
""VAR23""VAR23, FUN15(VAR6.VAR10),
VAR6.VAR14, VAR6.VAR16);


uint64_t VAR14 = VAR6.VAR14 * sizeof(VAR25);
if (!(FUN16(VAR14))) {
FUN11(""
""
"" VAR24 "" VAR24 ""
""VAR26.VAR27-VAR28\"" VAR29 ""
"",
FUN15(VAR6.VAR10), VAR14, (VAR30)sizeof(VAR25));
FUN12(VAR22);
}
VAR31 = FUN17(VAR6.VAR14 * sizeof(VAR25), VAR32);
if (FUN18(VAR31 == NULL)) {
FUN19("");
}
memset(VAR31, 0, VAR6.VAR14 * sizeof(VAR25));

uint32_t VAR33 = 0;
for (VAR33 = 0; VAR33 < VAR6.VAR14; VAR33++) {
FUN20(&VAR31[VAR33]);
}
(void) FUN21(VAR8, (VAR6.VAR14 * sizeof(VAR25)));

if (!VAR1) {
FUN22(""VAR24""
"" VAR23 "" VAR29 "",
FUN15(VAR8), VAR6.VAR14,
(VAR30)sizeof(VAR25));
}


for (VAR33 = 0; VAR33 < VAR6.VAR16; VAR33++) {
if (!(FUN16(VAR4))) {
FUN11(""
"" VAR24 ""
"" VAR24 "",
FUN15(VAR6.VAR10),
((VAR34)FUN15(VAR8) + VAR4));
FUN12(VAR22);
}

VAR2 *VAR35 = FUN23();
if (VAR35 == NULL) {
FUN11("", strerror(VAR36));
FUN12(VAR22);
}
FUN24(&VAR11,VAR35);
}

if (!VAR1) {
FUN22("" VAR23 "" VAR37 "",
VAR11.VAR38, VAR4);
FUN22(""VAR24""VAR24,
FUN15(VAR8), FUN15(VAR6.VAR10));
}

return;
}