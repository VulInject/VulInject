VAR1 FUN1(gdImagePtr VAR2, const unsigned int VAR3, const unsigned int VAR4)
{
const long VAR5 = FUN2(1, VAR3);
const long VAR6 = FUN2(1, VAR4);
const int VAR7 = FUN3(VAR2);
const int VAR8 = FUN4(VAR2);
const gdFixed VAR9 = FUN5((float)VAR7 / (float)VAR5);
const gdFixed VAR10 = FUN5((float)VAR8 / (float)VAR6);
const gdFixed VAR11 = FUN6(1);
const gdFixed VAR12 = FUN6(2);
const gdFixed VAR13 = FUN6(4);
const gdFixed VAR14 = FUN6(6);
const gdFixed VAR15 = FUN5(1.04f);
gdImagePtr VAR16;

unsigned int VAR17;
unsigned int VAR18 = 0;
long VAR19;

if (VAR5 == 0 || VAR6 == 0) {
return NULL;
}


if (VAR2->VAR20 == 0) {
FUN7(VAR2);
}

VAR16 = FUN8(VAR5, VAR6);
if (!VAR16) {
return NULL;
}

VAR16->VAR21 = 1;

for (VAR19=0; VAR19 < VAR6; VAR19++) {
long VAR22;
VAR17 = 0;

for (VAR22=0; VAR22 < VAR5; VAR22++) {
const gdFixed VAR23 = FUN9(FUN6(VAR19), VAR10);
const gdFixed VAR24 = FUN9(FUN6(VAR22), VAR9);
const long VAR25 = FUN10(VAR23);
const long VAR26 = FUN10(VAR24);
const gdFixed VAR27 = VAR23 - FUN6(VAR25);
const gdFixed VAR28 = VAR24 - FUN6(VAR26);
unsigned int VAR29[16], VAR30[16];
long VAR31;
register gdFixed VAR32 = 0, VAR33 = 0, VAR34 = 0, VAR35 = 0;
unsigned char VAR36, VAR37, VAR38, VAR39 = 0;
int *VAR40 = VAR16->VAR41[VAR18];

if ((VAR25 < 1) || (VAR26 < 1)) {
VAR29[0] = VAR26;
VAR30[0] = VAR25;
} else {
VAR29[0] = VAR26 - 1;
VAR30[0] = VAR25;
}

VAR29[1] = VAR26;
VAR30[1] = VAR25;

if ((VAR25 < 1) || (VAR26 >= VAR7 - 1)) {
VAR29[2] = VAR26;
VAR30[2] = VAR25;
} else {
VAR29[2] = VAR26 + 1;
VAR30[2] = VAR25;
}

if ((VAR25 < 1) || (VAR26 >= VAR7 - 2)) {
VAR29[3] = VAR26;
VAR30[3] = VAR25;
} else {
VAR29[3] = VAR26 + 1 + 1;
VAR30[3] = VAR25;
}

if (VAR26 < 1) {
VAR29[4] = VAR26;
VAR30[4] = VAR25;
} else {
VAR29[4] = VAR26 - 1;
VAR30[4] = VAR25;
}

VAR29[5] = VAR26;
VAR30[5] = VAR25;
if (VAR26 >= VAR7-1) {
VAR29[6] = VAR26;
VAR30[6] = VAR25;
} else {
VAR29[6] = VAR26 + 1;
VAR30[6] = VAR25;
}

if (VAR26 >= VAR7 - 2) {
VAR29[7] = VAR26;
VAR30[7] = VAR25;
} else {
VAR29[7] = VAR26 + 1 + 1;
VAR30[7] = VAR25;
}

if ((VAR25 >= VAR8 - 1) || (VAR26 < 1)) {
VAR29[8] = VAR26;
VAR30[8] = VAR25;
} else {
VAR29[8] = VAR26 - 1;
VAR30[8] = VAR25;
}

VAR29[9] = VAR26;
VAR30[9] = VAR25;

if ((VAR25 >= VAR8-1) || (VAR26 >= VAR7-1)) {
VAR29[10] = VAR26;
VAR30[10] = VAR25;
} else {
VAR29[10] = VAR26 + 1;
VAR30[10] = VAR25;
}

if ((VAR25 >= VAR8 - 1) || (VAR26 >= VAR7 - 2)) {
VAR29[11] = VAR26;
VAR30[11] = VAR25;
} else {
VAR29[11] = VAR26 + 1 + 1;
VAR30[11] = VAR25;
}

if ((VAR25 >= VAR8 - 2) || (VAR26 < 1)) {
VAR29[12] = VAR26;
VAR30[12] = VAR25;
} else {
VAR29[12] = VAR26 - 1;
VAR30[12] = VAR25;
}

VAR29[13] = VAR26;
VAR30[13] = VAR25;

if ((VAR25 >= VAR8 - 2) || (VAR26 >= VAR7 - 1)) {
VAR29[14] = VAR26;
VAR30[14] = VAR25;
} else {
VAR29[14] = VAR26 + 1;
VAR30[14] = VAR25;
}

if ((VAR25 >= VAR8 - 2) || (VAR26 >= VAR7 - 2)) {
VAR29[15] = VAR26;
VAR30[15] = VAR25;
} else {
VAR29[15] = VAR26  + 1 + 1;
VAR30[15] = VAR25;
}

for (VAR31 = -1; VAR31 < 3; VAR31++) {
const gdFixed VAR42 = FUN6(VAR31)-VAR27;
const gdFixed VAR43 = VAR42 - VAR11;
const gdFixed VAR44 = VAR42 + VAR11;
const gdFixed VAR45 = VAR42 + VAR12;
register gdFixed VAR23 = 0, VAR24 = 0, VAR46 = 0, VAR47 = 0;
register gdFixed VAR48;
int VAR49;

if (VAR45 > 0) VAR23 = FUN9(VAR45, FUN9(VAR45,VAR45));
if (VAR44 > 0) VAR24 = FUN9(VAR44, FUN9(VAR44,VAR44));
if (VAR42 > 0)     VAR47 = FUN9(VAR42, FUN9(VAR42,VAR42));
if (VAR43 > 0) VAR46 = FUN9(VAR43, FUN9(VAR43,VAR43));

VAR48 = FUN11((VAR23 - FUN9(VAR13,VAR24) + FUN9(VAR14,VAR47) - FUN9(VAR13,VAR46)),VAR14);

for (VAR49 = -1; VAR49 < 3; VAR49++) {
const gdFixed VAR42 = FUN6(VAR49) - VAR28;
const gdFixed VAR43 = VAR42 - VAR11;
const gdFixed VAR44 = VAR42 + VAR11;
const gdFixed VAR45 = VAR42 + VAR12;
register gdFixed VAR23 = 0, VAR24 = 0, VAR47 = 0, VAR46 = 0;
register gdFixed VAR50, VAR51, VAR52, VAR53, VAR54, VAR55;
register int VAR56;
const int VAR57 = ((VAR31+1)*4) + (VAR49+1);

if (VAR45 > 0) VAR23 = FUN9(VAR45,FUN9(VAR45,VAR45));

if (VAR44 > 0) VAR24 = FUN9(VAR44,FUN9(VAR44,VAR44));

if (VAR42 > 0) VAR47 = FUN9(VAR42,FUN9(VAR42,VAR42));

if (VAR43 > 0) VAR46 = FUN9(VAR43,FUN9(VAR43,VAR43));

VAR50 = FUN11((VAR23-FUN9(VAR13,VAR24)+FUN9(VAR14,VAR47)-FUN9(VAR13,VAR46)),VAR14);
VAR51 = FUN9(VAR48,VAR50);

VAR56 = VAR2->VAR41[*(VAR30 + VAR57)][*(VAR29 + VAR57)];
VAR52 = FUN6(FUN12(VAR56));
VAR53 = FUN6(FUN13(VAR56));
VAR54 = FUN6(FUN14(VAR56));
VAR55 = FUN6(FUN15(VAR56));

VAR32 += FUN9(VAR52,VAR51);
VAR33 += FUN9(VAR53,VAR51);
VAR34 += FUN9(VAR54,VAR51);
VAR35 += FUN9(VAR55,VAR51);
}
}

VAR36    = (unsigned char) FUN16(FUN10(FUN9(VAR32,   VAR15)),  0, 255);
VAR37  = (unsigned char) FUN16(FUN10(FUN9(VAR33, VAR15)),  0, 255);
VAR38   = (unsigned char) FUN16(FUN10(FUN9(VAR34,  VAR15)),  0, 255);
VAR39  = (unsigned char) FUN16(FUN10(FUN9(VAR35,  VAR15)), 0, 127);

*(VAR40 + VAR17) = FUN17(VAR36, VAR37, VAR38, VAR39);

VAR17++;
}
VAR18++;
}
return VAR16;
}