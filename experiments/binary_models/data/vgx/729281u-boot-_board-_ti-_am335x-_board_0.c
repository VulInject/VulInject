int FUN1(void)
{
struct VAR1 *VAR2;
uint8_t VAR3[6];
uint32_t VAR4, VAR5;

char *VAR6 = NULL;

if (FUN2()) {

if (!FUN3(FUN4(), "", 3)) {
VAR6 = "";
}

if (!FUN3(FUN4(), "", 3)) {
VAR6 = "";
}

if (!FUN3(FUN4(), "", 3)) {
VAR6 = "";
}
}

if (FUN5())
VAR6 = "";
if (FUN6()) {
char VAR7 = FUN7()[1];

switch (VAR7) {
case '':
VAR6 = "";
break;
case '':
VAR6 = "";
break;
default:
VAR6 = "";
}
}
FUN8(VAR6);


if (FUN9() == VAR8)
FUN10("", "");


VAR5 = FUN11(&VAR9->VAR10);
VAR4 = FUN11(&VAR9->VAR11);
VAR3[0] = VAR4 & 0xFF;
VAR3[1] = (VAR4 & 0xFF00) >> 8;
VAR3[2] = (VAR4 & 0xFF0000) >> 16;
VAR3[3] = (VAR4 & 0xFF000000) >> 24;
VAR3[4] = VAR5 & 0xFF;
VAR3[5] = (VAR5 & 0xFF00) >> 8;

if (!FUN12("")) {
FUN13("");

if (FUN14(VAR3))
FUN15("", VAR3);
}

VAR5 = FUN11(&VAR9->VAR12);
VAR4 = FUN11(&VAR9->VAR13);
VAR3[0] = VAR4 & 0xFF;
VAR3[1] = (VAR4 & 0xFF00) >> 8;
VAR3[2] = (VAR4 & 0xFF0000) >> 16;
VAR3[3] = (VAR4 & 0xFF000000) >> 24;
VAR3[4] = VAR5 & 0xFF;
VAR3[5] = (VAR5 & 0xFF00) >> 8;

if (!FUN12("")) {
if (FUN14(VAR3))
FUN15("", VAR3);
}

FUN10("", VAR14 ? "" : "");

if (!FUN12("")) {
char *VAR15 = FUN12("");
char *VAR16 = FUN12("");

if (!VAR15 || !FUN3(VAR15, "", 7))
FUN10("", VAR16);
else
FUN10("", VAR15);
}


FUN16(VAR17, "", &VAR2);

return 0;
}