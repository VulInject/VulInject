static inline int FUN1(const VAR1 *VAR2, struct VAR3 *VAR4, int VAR5) {
int VAR6 = 2;
ut32 VAR7;
ut16 VAR8;

if (VAR5 < 2) {
return -1;
}
ut16 VAR9 = FUN2 (VAR2);

if (FUN3(VAR4, VAR9)) {
return -1;
}

switch (FUN4(VAR9) & (~0x20)) {
case 0x04:
VAR6 = 4;
if ((VAR9 & 0xC0) != 0xC0) {
VAR6 = -1;
break;
}
if (VAR5 < 4) {
return -1;
}
VAR8 = FUN5 (VAR2, 2);

VAR7 = VAR8 | ((VAR9 & 0x0100) << 9) | ((VAR9 & 0x0020) << 11);

FUN6(VAR4, FUN7(VAR9), VAR7);
break;
case 0x05:
VAR6 = 4;
if (VAR5 < 4) {
return -1;
}
VAR8 = FUN5 (VAR2, 2);

if (FUN8(VAR4, FUN7(VAR9),
VAR8, FUN9(VAR9) & 0x9)) {
return -1;
}
break;
case 0x45:
if (!(VAR9 & 0x1) || ((VAR9 >> 6) & 0x3) != 0x3) {
VAR6 = -1;
break;
}
if (FUN8(VAR4, FUN7(VAR9), 0,
FUN9(VAR9) & 0x9)) {
return -1;
}
break;
default:
VAR6 = -1;
}

if (VAR6 != -1) {
return VAR6;
}

switch ((VAR9 >> 11) & (~0x4)) {
case 0x12:
VAR6 = 4;
if (!(VAR9 & 1)) {
VAR6 = -1;
break;
}
if (VAR5 < 4) {
return -1;
}
VAR8 = FUN5 (VAR2, 2);
VAR7 = VAR8 | (((VAR9 >> 9) & 0x3) << 16);

FUN10(VAR4, VAR7, FUN7(VAR9),
FUN9(VAR9), 0);
break;

case 0x13:
VAR6 = 4;
if (VAR5 < 4) {
return -1;
}
VAR8 = FUN5 (VAR2, 2);
VAR7 = VAR8 | (((VAR9 >> 9) & 0x3) << 16);

if (FUN7(VAR9) == 0xF) {
FUN11(VAR4, VAR7, FUN9(VAR9), 0);
} else {
FUN12(VAR4, VAR7, FUN7(VAR9),
FUN9(VAR9), 0);
}
break;
case 0x1B:
VAR6 = 4;
if (VAR5 < 4) {
return -1;
}
VAR8 = FUN5 (VAR2, 2);
VAR7 = VAR8 | (((VAR9 >> 9) & 0x3) << 16);

if (FUN7(VAR9) == 0xF) {
FUN11(VAR4, VAR7, FUN9(VAR9), 1);
} else {
FUN12(VAR4, VAR7, FUN9(VAR9),
FUN7(VAR9), 1);
}
break;
case 0x1A:
VAR6 = 4;
if (VAR5 < 4) {
return -1;
}
VAR8 = FUN5 (VAR2, 2);
VAR7 = VAR8 | (((VAR9 >> 9) & 0x3) << 16);

FUN10(VAR4, VAR7, FUN7(VAR9),
FUN9(VAR9), 1);

break;
default:
VAR6 = -1;
}

if (VAR6 != -1) {
return VAR6;
}

switch (VAR9 >> 14) {
case 0x3:
VAR6 = 2;
VAR8 = (VAR9 & 0x1) | ((VAR9 >> 8) & 0x1E);
FUN13 (VAR4, FUN7 (VAR9),
VAR8, FUN9 (VAR9), 1);
break;
case 0x2:
VAR6 = 2;
VAR8 = (VAR9 & 0x1) | ((VAR9 >> 8) & 0x1E);
FUN13  (VAR4, FUN7 (VAR9),
VAR8, FUN9 (VAR9), 0);
break;
default:
VAR6 = -1;
}
return VAR6;
}