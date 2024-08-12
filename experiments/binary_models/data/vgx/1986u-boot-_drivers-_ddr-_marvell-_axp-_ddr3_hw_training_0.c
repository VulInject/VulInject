int FUN1(u32 VAR1, u32 VAR2, int VAR3,
u32 VAR4, u32 VAR5, int VAR6,
int VAR7, int VAR8)
{

__maybe_unused u32 VAR9 = 0;
u32 VAR10, VAR11;
MV_DRAM_INFO VAR12;
int VAR13 = 0;
int VAR14 = 1;
int VAR15;

if (VAR7)
FUN2("");

memset(&VAR12, 0, sizeof(VAR12));
VAR12.VAR16 = FUN3();
VAR12.VAR17 = FUN4();
VAR12.VAR18 = VAR1;
VAR12.VAR2 = VAR2;
VAR12.VAR19 = VAR2 / VAR20;
VAR12.VAR21 = 0;
VAR12.VAR22 = 0;
VAR12.VAR21 = 1;


VAR11 = FUN5(VAR23);
if (VAR11 & (1 << VAR24)) {
VAR12.VAR25 = 1;
VAR11 |= (1 << VAR26);
FUN6(VAR23, VAR11);
} else {
VAR12.VAR25 = 0;
}

VAR11 = FUN5(VAR23);
if (VAR11 & (1 << VAR27))
VAR12.VAR28 = 1;
else
VAR12.VAR28 = 0;

VAR12.VAR29 = VAR2 / VAR20 + VAR12.VAR25;


VAR11 = FUN5(VAR30);
VAR12.VAR31 = (VAR11 >> VAR32) &
VAR33;


VAR11 = FUN5(VAR34) >> 2;
VAR11 = FUN5(VAR35) >> 2;

VAR11 = (((VAR11 >> 1) & 0xE) | (VAR11 & 0x1)) & 0xF;
VAR12.VAR36 = FUN7(VAR11);


VAR11 = FUN5(VAR37) >> VAR38;
VAR11 = FUN5(VAR39) >> VAR38;

VAR11 &= VAR40;
VAR12.VAR41 = VAR11;

if ((VAR12.VAR18 > VAR42) && (VAR43))
VAR9 = 1;

if ((VAR12.VAR18 > VAR42) && (VAR43) &&
(FUN8() >= VAR44))
VAR9 = 1;
else
VAR9 = 0;

VAR10 = VAR12.VAR18;


FUN9(1);


FUN10(&VAR12);


if (FUN5(VAR45) & (1 << VAR46))
VAR13 = 1;


if (VAR3 == 0) {
if (VAR43) {
FUN2("");
} else {
FUN2("");
}

if (VAR12.VAR18 > VAR47) {
VAR14 = 0;
VAR10 = VAR48;

if (VAR12.VAR28 == 1)
VAR10 = VAR49;

if (VAR50 != FUN11(VAR10, &VAR12)) {

FUN2("");
return VAR51;
}

if ((VAR12.VAR28 == 1) &&
(VAR8 == 0)) {
if (VAR50 !=
FUN12(VAR10,
&VAR12))
FUN2("");
}

if (FUN13() >= VAR52)
FUN14(VAR10);

if (VAR7)
FUN2("");
} else {
if (!VAR6) {



if (VAR12.VAR17 > 1) {
if (VAR50 !=
FUN15(
VAR10, VAR14,
&VAR12)) {
FUN2("");
return VAR53;
}
} else {
if (VAR50 !=
FUN16(VAR10,
&VAR12)) {
FUN2("");
return VAR54;
}
}
if (VAR50 != FUN16(
VAR10, &VAR12)) {
FUN2("");
if (VAR55) {
if (VAR50 !=
FUN15(
VAR10, VAR14,
&VAR12)) {
FUN2("");
return VAR53;
}
} else {
return VAR54;
}
}
}

if (VAR7)
FUN2("");
}

if (VAR50 != FUN17(&VAR12, 0)) {
FUN2("");
return VAR56;
}


FUN18(50);

do {
VAR10 = VAR12.VAR18;
VAR14 = VAR13;
FUN19("");


if (VAR9) {
VAR10 = VAR42;
VAR14 = 0;
}

if (VAR50 != FUN20(VAR10, VAR14,
&VAR12)) {
FUN2("");
return VAR51;
}

if (FUN13() >= VAR52) {
FUN14(VAR10);
}

if (VAR7)
FUN2("");


if (!VAR6) {

if (VAR12.VAR17 > 1) {
if (VAR50 != FUN15(
VAR10, VAR14, &VAR12)) {
FUN2("");
return VAR53;
}
} else {
if (VAR50 != FUN16(
VAR10, &VAR12)) {
FUN2("");
return VAR54;
}
}
if ((VAR12.VAR28 == 1) &&
(VAR10 == VAR42)) {
if (VAR8 == 0) {
if (VAR50 != FUN12(
VAR10, &VAR12))
FUN2("");
}
} else {
if (VAR50 != FUN16(
VAR10, &VAR12)) {
FUN2("");
if (VAR55) {
if (VAR50 != FUN15(
VAR10, VAR14, &VAR12)) {
FUN2("");
return VAR53;
}
} else {
return VAR54;
}
}
}
if (VAR7)
VAR57
("");
}



if (VAR10 == VAR42 && VAR12.VAR21) {
VAR15 = FUN21(VAR10, VAR14,
&VAR12);
if (VAR50 != VAR15) {
VAR57
("");
return VAR15;
}
} else {
if (VAR50 != FUN22(
VAR10, &VAR12)) {
FUN2("");
if (VAR55) {
if (VAR50 != FUN21(
VAR10, VAR14,
&VAR12)) {
FUN2("");
return VAR53;
}
} else {
return VAR54;
}
}
}

if (VAR7)
FUN2("");

if (VAR50 != FUN23(&VAR12)) {
FUN2("");
return VAR58;
}

if (VAR7)
FUN2("");

if (VAR9 == 1) {
VAR9 = 0;

VAR15 = VAR50;
VAR15 = FUN24(&VAR12);
if (VAR50 != VAR15) {
FUN2("");
return VAR15;
}

if (VAR7)
FUN2("");

VAR15 = FUN25(&VAR12);
if (VAR50 != VAR15) {
FUN2("");
return VAR15;
}

if (VAR7)
FUN2("");
}
} while (VAR10 != VAR12.VAR18);

VAR15 = FUN26(&VAR12);
if (VAR50 != VAR15) {
FUN2("");
return VAR15;
}

if (VAR7)
FUN2("");

VAR15 = FUN27(&VAR12);
if (VAR50 != VAR15) {
FUN2("");
return VAR15;
}

if (VAR7)
FUN2("");
}

FUN28(&VAR12);

if (VAR12.VAR25) {

FUN29();
VAR12.VAR16 = 1;
VAR12.VAR17 = 1;
FUN10(&VAR12);
FUN30(0, VAR4, VAR5, 0xdeadbeef,
0xdeadbeef);


while (FUN31(0) != VAR59)
;

if (VAR7)
FUN2("");
}


FUN29();


FUN32(&VAR12);

FUN9(0);


FUN33(&VAR12);

return VAR50;
}