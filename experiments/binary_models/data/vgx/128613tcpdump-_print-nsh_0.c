void
FUN1(VAR1 *VAR2, const VAR3 *VAR4, u_int VAR5)
{
uint32_t VAR6;
u_int VAR7, VAR8, VAR9;
uint8_t VAR10;
u_char VAR11 = 0;
u_int VAR12;

VAR2->VAR13 = "";



if (VAR5 < VAR14 + VAR15) {
FUN2("",
VAR5, VAR14 + VAR15);
goto VAR16;
}

VAR6 = FUN3(VAR4);
VAR4 += 4;
VAR7 = FUN4(VAR6);
VAR8 = FUN5(VAR6);
VAR9 = FUN6(VAR6);
VAR10 = FUN7(VAR6);

FUN2("");
if (VAR2->VAR17 > 1) {
FUN2("", VAR7);
}
if (VAR7 != 0)
return;
FUN2("",
FUN8(VAR18, "", FUN9(VAR6)));
if (VAR2->VAR17 > 2) {
FUN2("", FUN10(VAR6));
FUN2("", VAR8);
FUN2("", FUN11(VAR19, "", VAR9));
}
if (VAR2->VAR17 > 1) {
FUN2("",
FUN11(VAR20, "", VAR10));
}


if (VAR5 < VAR8 * VAR21) {
FUN2("", VAR5);
goto VAR16;
}


FUN2("", FUN12(VAR4));
VAR4 += 3;
FUN2("", FUN13(VAR4));
VAR4 += 1;


if (VAR8 < 2) {
FUN2("");
goto VAR16;
}


if (VAR2->VAR17 > 2) {
u_int VAR22;

if (VAR9 == VAR23) {
if (VAR8 != 6) {
FUN2("");
goto VAR16;
}
for (VAR22 = 0; VAR22 < VAR8 - 2; VAR22++) {
FUN2("", VAR22, FUN3(VAR4));
VAR4 += VAR21;
}
VAR11 = 1;
}
else if (VAR9 == VAR24) {
VAR22 = 0;
while (VAR22 < VAR8 - 2) {
uint16_t VAR25;
uint8_t VAR26, VAR27, VAR28;

VAR25 = FUN14(VAR4);
VAR4 += 2;
VAR26  = FUN13(VAR4);
VAR4 += 1;
VAR27   = FUN13(VAR4) & 0x7f;
VAR4 += 1;
VAR28 = FUN15(VAR27, VAR21);

FUN2("",
VAR25, VAR26, VAR27);

VAR22 += 1;

if (VAR8 - 2 < VAR22 + VAR28 / VAR21) {
FUN2("");
goto VAR16;
}

if (VAR27) {
const char *VAR29 = "";
u_int VAR30;

FUN2("");
for (VAR30 = 0; VAR30 < VAR27; VAR30++) {
FUN2("", VAR29, FUN13(VAR4));
VAR4 += 1;
VAR29 = "";
}

FUN16(VAR4, VAR28 - VAR27);
VAR4 += VAR28 - VAR27;
VAR22 += VAR28 / VAR21;
}
}
VAR11 = 1;
}
}
if (! VAR11) {
FUN16(VAR4, (VAR8 - 2) * VAR21);
VAR4 += (VAR8 - 2) * VAR21;
}
FUN2(VAR2->VAR17 ? "" : "");


VAR12 = VAR5 - VAR8 * VAR21;
switch (VAR10) {
case VAR31:
FUN17(VAR2, VAR4, VAR12);
break;
case VAR32:
FUN18(VAR2, VAR4, VAR12);
break;
case VAR33:
FUN19(VAR2, VAR4, VAR12, FUN20(VAR4), NULL, NULL);
break;
default:
FUN2("");
return;
}

return;

VAR16:
FUN21(VAR2);
}