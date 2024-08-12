static int FUN1(struct VAR1 *VAR1)
{
FUN2(&VAR1->VAR2);

if (FUN3(&VAR1->VAR2, VAR1->VAR3, VAR1->VAR4, VAR5)) {
FUN4(VAR6, "", NULL);
return 0;
}

const unsigned char *VAR7 = (const unsigned char*) VAR1->VAR8;
size_t VAR9 = VAR1->VAR10 + VAR1->VAR11 + 1;
const char *VAR3 = FUN5(&VAR1->VAR2);
size_t VAR4 = FUN6(&VAR1->VAR2);
VAR12 *VAR13 = FUN7();
int VAR14 = 0;

int VAR15;
for (VAR15 = 0; VAR15 < FUN8(&VAR16); VAR15++) {
VAR17 *VAR18 = FUN9(&VAR16, VAR15);
FUN10(VAR13);

if (!FUN11(VAR1, VAR18))
continue;

if (VAR1->VAR19 == VAR20) {
unsigned char VAR21[VAR22];
size_t VAR23 = sizeof(VAR21);

int VAR24 = FUN12(VAR13, NULL, VAR1->VAR25, NULL, VAR18);
if (VAR24 != 1) {
FUN4(VAR6, "",
"", FUN13(VAR24, NULL));
continue;
}

VAR24 = FUN14(VAR13, VAR7, VAR9);
if (VAR24 != 1) {
FUN4(VAR6, "",
"", FUN13(VAR24, NULL));
continue;
}

VAR24 = FUN15(VAR13, VAR21, &VAR23);
if (VAR24 != 1) {
FUN4(VAR6, "",
"", FUN13(VAR24, NULL));
continue;
}

if (VAR23 == VAR4 && !FUN16(VAR21, VAR3, VAR23)) {
VAR14 = 1;
break;
}
}
else {
int VAR24 = FUN17(VAR13, NULL, VAR1->VAR25, NULL, VAR18);
if (VAR24 != 1) {
FUN4(VAR6, "",
"", FUN13(VAR24, NULL));
continue;
}

VAR24 = FUN18(VAR13, VAR7, VAR9);
if (VAR24 != 1) {
FUN4(VAR6, "",
"", FUN13(VAR24, NULL));
continue;
}

VAR14 = FUN19(VAR13, (const unsigned char*)VAR3, VAR4) == 1;
}
}

FUN20(VAR13);
return VAR14;
}