static int FUN1(
VAR1 *VAR2,
VAR3 *VAR4,
const VAR5 *VAR6,
VAR7 *VAR8) {

FUN2(VAR9) VAR10 *VAR11 = NULL;
bool VAR12, VAR13, VAR14;
const char *VAR15 = NULL;
uid_t VAR16;
int VAR17;

assert(VAR2);
assert(VAR4);
assert(VAR6);

if (VAR6->VAR18 >= 0) {
VAR17 = FUN3(VAR6->VAR18);
if (FUN4(VAR17,  0, -VAR19))
return FUN5(VAR4, "", "");
if (VAR17 < 0)
return VAR17;
}

VAR17 = FUN6(VAR4, VAR20, &VAR11);
if (VAR17 < 0)
return VAR17;

VAR17 = FUN7(VAR11, &VAR16);
if (VAR17 < 0)
return VAR17;

VAR17 = FUN8(VAR2, VAR16);
if (VAR17 < 0)
return VAR17;

VAR12 = VAR17 > 0;
VAR14 = FUN9(VAR2, VAR6->VAR21, VAR22, NULL, false, true, VAR16, NULL);

HandleAction VAR23 = FUN10(FUN11(VAR6->VAR18));
if (VAR23 >= 0) {
const char *VAR24;

VAR24 = FUN12(VAR23)->VAR24;
if (VAR24) {
_cleanup_free_ char *VAR25 = NULL;

VAR17 = FUN13(VAR2->VAR26, VAR24, &VAR25);
if (VAR17 < 0)
return VAR17;

if (!FUN14(VAR25, "")) {
VAR15 = "";
goto VAR27;
}
}
}

if (VAR12) {
VAR17 = FUN15(VAR4, VAR28, VAR6->VAR29, NULL, VAR30, &VAR13, VAR8);
if (VAR17 < 0)
return VAR17;

if (VAR17 > 0)
VAR15 = "";
else if (VAR13)
VAR15 = "";
else
VAR15 = "";
}

if (VAR14) {
VAR17 = FUN15(VAR4, VAR28, VAR6->VAR31, NULL, VAR30, &VAR13, VAR8);
if (VAR17 < 0)
return VAR17;

if (VAR17 > 0) {
if (!VAR15)
VAR15 = "";
} else if (VAR13) {
if (!VAR15 || FUN14(VAR15, ""))
VAR15 = "";
} else
VAR15 = "";
}

if (!VAR12 && !VAR14) {


VAR17 = FUN15(VAR4, VAR28, VAR6->VAR32, NULL, VAR30, &VAR13, VAR8);
if (VAR17 < 0)
return VAR17;

if (VAR17 > 0)
VAR15 = "";
else if (VAR13)
VAR15 = "";
else
VAR15 = "";
}

VAR27:
return FUN5(VAR4, "", VAR15);
}