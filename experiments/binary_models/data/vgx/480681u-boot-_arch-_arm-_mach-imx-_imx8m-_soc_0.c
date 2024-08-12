int FUN1(void *VAR1, struct VAR2 *VAR3)
{
int VAR4 = 0;
int VAR5;
int VAR6;

if (FUN2() == VAR7) {
FUN3(VAR1);

bool VAR8 = FUN4(VAR1);
int VAR9 = VAR8 ? 1 : 0;
static const char * const VAR10[] = {
"",
""
};

VAR6 = FUN5(VAR1, VAR10[VAR9]);
if (VAR6 >= 0) {
const char *VAR11 = "";

FUN6("", VAR10[VAR9]);

VAR12:

VAR5 = FUN7(VAR1, VAR6, "", VAR11, strlen(VAR11) + 1);
if (VAR5) {
if (VAR5 == -VAR13) {
VAR5 = FUN8(VAR1, 512);
if (!VAR5)
goto VAR12;
}
FUN6("",
VAR10[VAR9], "", FUN9(VAR5));
} else {
FUN6("",
VAR10[VAR9], "", VAR11);
}
} else {
FUN6("", VAR10[VAR9]);
}
}


if (FUN10(VAR14)) {
static const char * const VAR15[] = {
"",
"",
"",
"",
};

for (VAR4 = 0; VAR4 < FUN11(VAR15); VAR4++) {
VAR6 = FUN5(VAR1, VAR15[VAR4]);
if (VAR6 < 0)
continue; 

FUN12("", VAR15[VAR4]);

VAR5 = FUN13(VAR1, VAR6, "");
if (VAR5 == -VAR16)
continue;
if (VAR5) {
FUN6("",
VAR15[VAR4], "", FUN9(VAR5));
return VAR5;
}

FUN12("", VAR15[VAR4],
"");
}
}

if (FUN14()) {
FUN15(VAR1);
if (FUN16()) {
FUN6("");
FUN3(VAR1);
FUN17(VAR1);
}
}

if (FUN18())
FUN19(VAR1, 2);

if (FUN20() || FUN21() ||  FUN22())
FUN15(VAR1);

if (FUN23() || FUN21())
FUN19(VAR1, 2);
else if (FUN24() || FUN22())
FUN19(VAR1, 3);

if (FUN25() || FUN26() ||  FUN27())
FUN28(VAR1);
else {
int VAR17 = FUN29(VAR1);

if (VAR17 < 0)
FUN6("");
else
FUN6("");
}

if (FUN30() || FUN26() || FUN31())
FUN19(VAR1, 2);
else if (FUN32() || FUN27() || FUN33())
FUN19(VAR1, 3);

if (FUN34()) {

FUN28(VAR1);


FUN35(VAR1);


FUN36(VAR1);
}

if (FUN34() || FUN37())
FUN15(VAR1);

if (FUN34() || FUN37() || FUN38())
FUN39(VAR1);

if (FUN34() || FUN37())
FUN40(VAR1);

if (FUN34() || FUN37() || FUN38())
FUN41(VAR1);

if (FUN42())
FUN19(VAR1, 2);

FUN43(VAR1);

if (FUN44(VAR1, ""))
FUN6("");
if (FUN45(VAR18) &&
FUN44(VAR1, ""))
FUN6("");

return 0;
}