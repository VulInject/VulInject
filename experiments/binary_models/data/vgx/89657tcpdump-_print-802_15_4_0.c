static void
FUN1(VAR1 *VAR2,
const VAR3 *VAR4,
uint16_t VAR5,
int VAR6)
{
int VAR7;

switch (VAR6) {
case 0x00: 
if (VAR5 < 3) {
FUN2("");
} else {
FUN2("", FUN3(VAR4),
FUN3(VAR4 + 1), FUN3(VAR4 + 2));
FUN2("");
for(VAR7 = 3; VAR7 < VAR5; VAR7++) {
FUN2("", FUN3(VAR4 + VAR7));
}
}
break;
case 0x1a: 
if (VAR5 < 4) {
FUN2("");
} else {
FUN2("",
FUN4(VAR4), FUN4(VAR4 + 2));
if (VAR5 >= 6) {
FUN2("",
FUN4(VAR4 + 4));
}
if (VAR5 != 4 && VAR5 != 6) {
FUN2("");
}
}
break;
case 0x1b: 
if (VAR5 < 4) {
FUN2("");
} else {
FUN2("",
FUN3(VAR4),
FUN3(VAR4 + 1),
FUN4(VAR4 + 2));
}
break;
case 0x1c: 

case 0x21: 
if (VAR5 < 2) {
FUN2("");
} else {
uint16_t VAR8, VAR9, VAR10;
int16_t VAR11;
int VAR12;

VAR12 = 0;

VAR8 = FUN4(VAR4);
FUN5(VAR2, VAR8);
if (VAR5 < 3) {
FUN2("");
break;
}
VAR9 = 2;
VAR11 = FUN6(VAR2,
VAR4 + VAR9,
VAR5 -
VAR9);
if (VAR11 < 0) {
break;
}
VAR9 += VAR11;

if (VAR6 == 0x21) {

if (VAR5 < VAR9 + 2) {
FUN2("");
break;
}
VAR8 = FUN4(VAR4 + VAR9);
VAR9 += 2;
FUN2("", VAR8 & 0xff);
FUN2("", ((VAR8 & 0x100) ?
"" :
""));
if (VAR8 & 0x400) {
FUN2("");
}
if (VAR8 & 0x800) {
FUN2("");
}
if (VAR8 & 0x1000) {
FUN2("");
VAR12 = 1;
}
} else {
if (VAR5 < VAR9 + 1) {
FUN2("");
break;
}
VAR8 = FUN3(VAR4 + VAR9);
VAR9++;
FUN2("",
VAR8 & 0x0f);
FUN2("", ((VAR8 & 0x10) ?
"" :
""));
if (VAR8 & 0x40) {
FUN2("");
}
if (VAR8 & 0x80) {
FUN2("");
}
}
if (VAR5 < VAR9 + 8) {
FUN2("");
break;
}
FUN2("" VAR13 "",
FUN7(VAR4 + VAR9),
FUN4(VAR4 + VAR9 + 6));
VAR9 += 8;
if (VAR5 < VAR9 + 4) {
FUN2("");
break;
}

VAR10 = FUN4(VAR4 + VAR9 + 2);
FUN2("",
FUN4(VAR4 + VAR9), VAR10);
VAR9 += 4;
if (VAR5 < VAR9 + VAR10) {
FUN2("");
break;
}
FUN2("");
for(VAR7 = 0; VAR7 < VAR10; VAR7++) {
FUN2("", FUN3(VAR4 + VAR9 + VAR7));
}
VAR9 += VAR10;

if (VAR5 < VAR9 + 5) {
FUN2("");
break;
}

VAR10 = FUN4(VAR4 + VAR9 + 4);
FUN2(""
"",
FUN3(VAR4 + VAR9),
FUN3(VAR4 + VAR9 + 1),
FUN4(VAR4 + VAR9 + 2),
VAR10);
VAR9 += 5;
if (VAR5 < VAR9 + VAR10) {
FUN2("");
break;
}
FUN2("");
for(VAR7 = 0; VAR7 < VAR10; VAR7++) {
FUN2("", FUN3(VAR4 + VAR9 + VAR7));
}
VAR9 += VAR10;
if (VAR12) {
if (VAR5 < VAR9 + 1) {
FUN2("");
break;
}
VAR10 = FUN3(VAR4 + VAR9);
VAR9++;
FUN2("", VAR10);



if (VAR5 < VAR9 + VAR10 * 2) {
FUN2("");
break;
}
for(VAR7 = 0; VAR7 < VAR10; VAR7++) {
FUN2("",
FUN4(VAR4 + VAR9 + VAR7 * 2));
}
FUN2("");
VAR9 += VAR10 * 2;
}
}
break;
case 0x1d: 
if (VAR5 != 4) {
FUN2("");
} else {
uint16_t VAR14, VAR15;
VAR14 = FUN4(VAR4);
VAR15 = FUN4(VAR4 + 2);

FUN2("",
VAR14, VAR15);
}
break;
case 0x1e: 
if (VAR5 != 2) {
FUN2("");
} else {
uint16_t VAR16;
int16_t VAR17;

VAR16 = FUN4(VAR4);
if (VAR16 & 0x8000) { FUN2(""); }
VAR16 &= 0xfff;
VAR16 <<= 4;
VAR17 = VAR16;
VAR17 >>= 4;

FUN2("", VAR17);
}
break;
case 0x22: 

case 0x23: 

case 0x24: 

case 0x25: 

case 0x26: 

case 0x27: 

case 0x28: 

case 0x29: 

case 0x2b: 

default:
FUN2("");
for(VAR7 = 0; VAR7 < VAR5; VAR7++) {
FUN2("", FUN3(VAR4 + VAR7));
}
break;
}
}