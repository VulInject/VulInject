int FUN1(const struct VAR1 *VAR2)
{
u64 VAR3 = FUN2(VAR4);
bool VAR5;
int VAR6;

VAR5 = VAR3 >> 63;
VAR3 = (VAR7)VAR3;


VAR8.VAR9 = (VAR3 & 0xf) + 1;
VAR8.VAR10 = false;
VAR8.VAR3 = VAR3;


if (VAR2->VAR11) {
VAR8.VAR12 = VAR13;
VAR8.VAR14 = VAR2->VAR15 && VAR13;
FUN3("",
VAR8.VAR14 ? "" : "",
VAR13 ? "" : "");
}

VAR8.VAR16 = 0;

if (!VAR2->VAR17.VAR18) {
FUN3("");
} else if (!VAR5) {
FUN4(VAR19 "");
} else if (!FUN5(VAR2->VAR17.VAR18)) {
FUN4("",
(unsigned long long)VAR2->VAR17.VAR18);
} else if (FUN6() != VAR20) {
VAR8.VAR16 = VAR2->VAR17.VAR18;
VAR8.VAR10 = true;
VAR6 = FUN7(VAR21);
if (VAR6) {
FUN8("");
return VAR6;
}
FUN3("", VAR2->VAR17.VAR18);
}
VAR6 = FUN7(VAR22);
if (VAR6) {
FUN8("");
FUN9(VAR21);
return VAR6;
}

if (VAR8.VAR16 == 0)
FUN3("");

if (FUN10(VAR23)) {
VAR24 = true;
VAR25 = true;
}

if (FUN11()) {
FUN3("");

VAR8.VAR3 &= ~VAR26;
VAR24 = true;
VAR25 = true;
if (VAR3 & VAR27)
VAR28 = true;
else
VAR29 = true;
}

if (VAR24 || VAR25 || VAR29 | VAR28) {
FUN3("",
VAR24 ? "" : "",
VAR25 ? "" : "",
VAR29 ? ""  : "",
VAR28    ? ""  : "");
FUN12(&VAR30);
}

VAR8.VAR31 = NULL;
VAR8.VAR32 = VAR33;
VAR8.VAR34 = VAR35;

return 0;
}