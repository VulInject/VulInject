static void FUN1(const void *VAR1, const struct VAR2 *VAR3)
{
uint32_t VAR4 = FUN2(VAR3->VAR5);
unsigned long VAR6 = FUN2(VAR3->VAR6) * 4;
const char *VAR7;
const char *VAR8[0x8] = {
"", "", "", "", "", "", "",
""
};

switch (VAR4 & VAR9) {
case VAR10:
VAR7 = "";
break;
case VAR11:
VAR7 = "";
break;
default:
VAR7 = "";
break;
}

FUN3("", VAR7,
VAR12[(VAR4 & VAR13) >> 8],
VAR8[(VAR4 & VAR14) >> 4]);

FUN3("", FUN2(VAR3->VAR15) * 4);
FUN3("", VAR6, VAR6);
FUN3("",
(unsigned long long)FUN4(VAR3->VAR16));
if (VAR3->VAR16 != VAR3->VAR17)
FUN3("",
(unsigned long long)FUN4(VAR3->VAR17));
else
FUN3("");
FUN3("");

if (VAR4 & VAR18)
FUN3("");

if (VAR4 & VAR19)
FUN3("");

switch (VAR4 & VAR20) {
case VAR21:
FUN3("");
break;
case VAR22:
FUN3("");
break;
case VAR23:
FUN3("");
break;
}

if (VAR4 & VAR24)
FUN3("");

if (VAR4 & VAR25)
FUN3("");

if (VAR4 & VAR26)
FUN3("");

if (VAR4 & VAR27)
FUN3("", (VAR4 & VAR27) >> 1);

if (VAR4 & VAR28)
FUN3("");
FUN3("");

FUN3("", FUN2(VAR3->VAR29));
}