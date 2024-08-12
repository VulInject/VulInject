static VAR1
FUN1(VAR2 *VAR3,
const VAR4 *VAR5, u_int VAR6)
{
u_int VAR7,VAR8;
union {
float VAR9;
uint32_t VAR10;
} VAR11;

FUN2(VAR6, <, 4);
VAR7 = FUN3(VAR5);
VAR8 = FUN4(VAR5 + 2)<<2; 

FUN5("",
FUN6(VAR12,"",VAR7),
VAR7,
VAR8,
FUN3(VAR5 + 1));

FUN2(VAR6, <, VAR8 + 4);
switch(VAR7) { 

case 4:

if (VAR8 == 4) {
FUN5("", FUN7(VAR5 + 4));
}
break;

case 6:

if (VAR8 == 4) {
VAR11.VAR10 = FUN7(VAR5 + 4);
FUN5("", VAR11.VAR9 / 125000);
}
break;

case 8:

if (VAR8 == 4) {
FUN5("");
if (FUN7(VAR5 + 4) == 0xffffffff)
FUN5("");
else
FUN5("", FUN7(VAR5 + 4));
}
break;

case 10:


if (VAR8 == 4) {
FUN5("", FUN7(VAR5 + 4));
}
break;
case 127:


if (VAR8 == 20) {
VAR11.VAR10 = FUN7(VAR5 + 4);
FUN5("", VAR11.VAR9 / 125000);
VAR11.VAR10 = FUN7(VAR5 + 8);
FUN5("", VAR11.VAR9);
VAR11.VAR10 = FUN7(VAR5 + 12);
FUN5("", VAR11.VAR9 / 125000);
FUN5("",
FUN7(VAR5 + 16));
FUN5("",
FUN7(VAR5 + 20));
}
break;

case 130:


if (VAR8 == 8) {
VAR11.VAR10 = FUN7(VAR5 + 4);
FUN5("", VAR11.VAR9 / 125000);
FUN5("", FUN7(VAR5 + 8));
}
break;

case 133:
case 134:
case 135:
case 136:
if (VAR8 == 4) {
FUN5("", FUN7(VAR5 + 4));
}
break;

default:
if (VAR3->VAR13 <= 1)
FUN8(VAR3, VAR5 + 4, "", VAR8);
}
return (VAR8+4); 

VAR14:
FUN9(VAR3);
return 0;
}