static int FUN1(int VAR1, const char *VAR2)
{
bool VAR3 = FUN2(VAR1);

int VAR4 = open(VAR2, VAR5 | VAR6);
if (VAR4 == -1)
FUN3("",
VAR2, strerror(VAR7));

FUN4();

FUN5(VAR4, "", "");

if (VAR3) {
uid_t VAR8 = FUN6();

FUN5(VAR4, "",
"");
if (chown("", 0, -1) != 0)
FUN3("", strerror(VAR7));
if (chmod("", VAR9 | 0700) != 0)
FUN3("", strerror(VAR7));

FUN5(VAR4, "",
"");
if (chown("", VAR1 + 1, -1) != 0)
FUN3("", strerror(VAR7));
if (chmod("", VAR9 | 0700) != 0)
FUN3("", strerror(VAR7));

FUN5(VAR4, "",
"");
if (chown("", -1, 0) != 0)
FUN3("", strerror(VAR7));
if (chmod("", VAR10 | 0710) != 0)
FUN3("", strerror(VAR7));

FUN5(VAR4, "",
"");
if (chown("", -1, VAR8 + 1) != 0)
FUN3("", strerror(VAR7));
if (chmod("", VAR10 | 0710) != 0)
FUN3("", strerror(VAR7));
}

FUN7();


FUN8(VAR11, VAR12, VAR13);
if (FUN9(VAR14) != 0)
FUN3("", strerror(VAR7));

if (VAR1 == 0) {
FUN10("");
if (FUN11())
FUN12(true, true, false, false);
} else {
FUN10("");
if (FUN11())
FUN12(false, false, false, false);
}

FUN10("");


if (FUN13(VAR15, VAR16, VAR13, 0, 0, 0) != -1 || VAR7 != VAR17) {
if (VAR7 == VAR18)
FUN14(
"");
else
FUN14(
"");
return 1;
}
FUN15(
"");

FUN8(VAR19, VAR12, VAR20);
FUN8(VAR11, VAR21, VAR20);
FUN8(VAR11, VAR22, VAR20);
if (FUN9(VAR14) != 0)
FUN3("", strerror(VAR7));
if (FUN13(VAR15, VAR16, VAR20, 0, 0, 0) != -1 || VAR7 != VAR17) {
FUN14(
"");
return 1;
}
FUN15(
"");

FUN8(VAR19, VAR12, VAR13);
if (FUN9(VAR14) != 0)
FUN3("", strerror(VAR7));
if (FUN13(VAR15, VAR16, VAR13, 0, 0, 0) != 0) {
FUN14(
"");
return 1;
}
FUN15("");

if (FUN13(VAR15, VAR23, VAR13, 0, 0, 0) != 1) {
FUN14("");
return 1;
}

if (FUN13(VAR15, VAR24, 0, 0, 0, 0) != 0)
FUN3("",
strerror(VAR7));

if (FUN13(VAR15, VAR23, VAR13, 0, 0, 0) != 0) {
FUN14(
"");
return 1;
}

if (FUN13(VAR15, VAR16, VAR13, 0, 0, 0) != 0)
FUN3("",
strerror(VAR7));

FUN8(VAR11, VAR12, VAR13);
if (FUN9(VAR14) != 0)
FUN3("", strerror(VAR7));

if (FUN13(VAR15, VAR23, VAR13, 0, 0, 0) != 0) {
FUN14("");
return 1;
}

FUN15("");

FUN8(VAR19, VAR12, VAR13);
if (FUN9(VAR14) != 0)
FUN3("", strerror(VAR7));
if (VAR1 == 0) {
FUN10("");
if (FUN11())
FUN12(true, true, true, false);
} else {
FUN10("");
if (FUN11())
FUN12(false, false, true, false);
}

if (FUN13(VAR15, VAR16, VAR13, 0, 0, 0) != 0)
FUN3("",
strerror(VAR7));

FUN10("", VAR1);
if (FUN11())
FUN12(true, true, true, true);



if (!VAR3) {
FUN16("");
goto VAR25;
}

if (VAR1 == 0) {
FUN10("");
if (FUN11())
FUN17("",
true, true, true, true);

FUN10("");
if (FUN11())
FUN17("",
false, true, true, false);

FUN10("");
if (FUN11())
FUN17("",
true, true, true, true);

if (FUN11()) {
FUN10(
"");
if (FUN18(1, 1, 1) != 0)
FUN3("",
strerror(VAR7));
FUN17("",
true, true, true, false);
}

FUN10("");
if (FUN11())
FUN17("",
true, true, true, false);
} else {
FUN10("");
if (FUN11())
FUN17("",
false, false, true, false);

if (FUN11()) {
FUN10("");
if (FUN18(1, 1, 1) != 0)
FUN3("",
strerror(VAR7));
FUN17("",
false, false, true, false);
}
}

VAR25:
FUN19();
return VAR26 ? 1 : 0;
}