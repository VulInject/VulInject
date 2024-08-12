static int FUN1(void)
{
unsigned int VAR1, VAR2, VAR3 = 0;
unsigned int VAR4;
int VAR5;


VAR5 = FUN2();
if (VAR5 == -1) {
FUN3("");
return -VAR6;
}
VAR7 = FUN4(VAR5);
if (VAR7 == 0) {
FUN3("");
return -VAR6;
}

VAR8 = VAR5;

switch (VAR9) {
case VAR10:
VAR11 = 50;
break;
case VAR12:
VAR11 = 40;
break;
default:
VAR11 = 30;
break;
}

FUN5("",
VAR11/10, VAR11%10, VAR8/10, VAR8%10);

VAR13 = FUN6(VAR8);
VAR14 = FUN6(VAR11);
FUN5("", VAR7,
FUN7(VAR14/1000),
FUN7(VAR13/1000));

if (VAR14 == VAR13) {
FUN3("");
return -VAR6;
}
if (VAR14 > VAR13) {
FUN3("",
VAR14, VAR13);
return -VAR6;
}

VAR15 = FUN8(VAR16 + 1, sizeof(*VAR15),
VAR17);
if (!VAR15)
return -VAR18;

for (VAR2 = 0; VAR2 < VAR16; VAR2++) {
VAR4 = VAR19[VAR2];
if (VAR4 == -1)
continue;
if (VAR4 > VAR8 || VAR4 < VAR11)
continue;
VAR15[VAR3].VAR20 = FUN6(VAR4);
VAR15[VAR3].VAR21	= VAR2;
VAR3++;
}
if (VAR3 <= 1) {
FUN9(VAR15);
return -VAR22;
}

for (VAR2 = 0; VAR2 < VAR3 - 1; VAR2++) {
unsigned int VAR23, VAR24;
VAR23 = VAR15[VAR2].VAR20;
VAR24 = VAR2;
for (VAR1 = VAR2 + 1; VAR1 < VAR3; VAR1++) {
if (VAR15[VAR1].VAR20 < VAR23) {
VAR23 = VAR15[VAR1].VAR20;
VAR24 = VAR1;
}
}
if (VAR24 != VAR2) {
FUN10(VAR15[VAR2].VAR20,
VAR15[VAR24].VAR20);
FUN10(VAR15[VAR2].VAR21,
VAR15[VAR24].VAR21);
}
}

VAR15[VAR3].VAR20 = VAR25;


for (VAR2 = 0; VAR2 < VAR3; VAR2++) {
if (VAR19[VAR15[VAR2].VAR21 & 0x1f] == VAR5) {
VAR26 = VAR2;
break;
}
}
return 0;
}