static int FUN1(VAR1 *VAR2, char **VAR3) {
FUN2(VAR4) VAR5 *VAR6 = NULL;
_cleanup_free_ bool *VAR7 = NULL;
VAR5 *VAR8;
size_t VAR9 = 0;
int VAR10;

VAR10 = FUN3(VAR2, &VAR6);
if (VAR10 < 0)
return VAR10;

VAR7 = FUN4(bool, FUN5(VAR3));
if (!VAR7)
return FUN6();

FUN7(VAR8, FUN8(VAR6, "")) {
char VAR11[FUN9(VAR12)];
const char *VAR13;
int64_t VAR14;
size_t VAR15;

VAR13 = FUN10(FUN8(VAR8, ""));
VAR14 = FUN11(FUN8(VAR8, ""));
FUN12(VAR11, "" VAR16, VAR14);

if (!FUN13(VAR3, VAR11, 0, &VAR15) &&
!FUN13(VAR3, VAR13, 0, &VAR15)) {
bool VAR17 = false;
VAR5 *VAR18;

FUN7(VAR18, FUN8(VAR8, ""))
if (FUN13(VAR3, FUN10(VAR18), 0, &VAR15)) {
VAR17 = true;
break;
}

if (!VAR17)
continue;
}

VAR7[VAR15] = true;
FUN14(VAR8, VAR19, NULL, NULL);
VAR9++;
}


for (size_t VAR15 = 0; VAR15 < FUN5(VAR3); VAR15++) {
if (VAR7[VAR15])
continue;

if (FUN15(VAR3[VAR15]))
FUN16(""%VAR20\"",
VAR3[VAR15]);
else
return FUN17(FUN18(VAR21),
""%VAR20\"", VAR3[VAR15]);
}

if (VAR9 == 0)
FUN19("");

return 0;
}