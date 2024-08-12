VAR1
FUN1(unsigned int VAR2[], unsigned int VAR3[])
{
unsigned int VAR4, VAR5;
int VAR6, VAR7 = 1;
boolean VAR8;
unsigned int VAR9;
unsigned int VAR10;
unsigned int VAR11;




VAR10=(VAR2[0] & 0xf8000000);
VAR2[0] &= 0x07ffffff;





if (!FUN2()) {
FUN3(VAR2, VAR9, VAR10, VAR3);
return FUN4(VAR12, VAR13);
}


for (VAR7=1; VAR7<=VAR14; VAR7++) {
VAR4 = FUN5(VAR7);

VAR11 = FUN6(VAR7);
if (VAR11 & VAR15) {

FUN7();
FUN8(VAR7);

VAR5 = FUN9(VAR4,VAR11,0,VAR2);

if (VAR5) {


FUN10();

FUN11(VAR5,VAR4,
VAR2[VAR7]);
if (VAR5 == VAR15) {

VAR5 = VAR11;
FUN3(VAR2, VAR9, VAR10, 
VAR3);
return FUN4(VAR12, VAR13);
}

VAR11 = VAR5;
}

if (VAR5 == VAR16)

break;
}


if (VAR11 & VAR17) {

if (FUN12()) {
FUN3(VAR2, VAR9, VAR10, 
VAR3);
return FUN4(VAR18, VAR19);
} else {

VAR6 = VAR4 & VAR20;
if (FUN13(VAR2[VAR7])) VAR8 = VAR21;
else VAR8 = VAR22;
switch (FUN14()) {
case VAR23:

if (FUN15(VAR2[VAR7])) 
FUN16(FUN17(VAR6));


FUN18(&FUN17(VAR6),&VAR8,FUN19());
break;
case VAR24:

if (FUN15(VAR2[VAR7])) 
FUN20(FUN21(VAR6),FUN22(VAR6));


FUN23(&FUN21(VAR6),&FUN22(VAR6),
&VAR8,FUN19());
break;
}
if (VAR8) FUN24();

if (VAR8 && FUN25()) {

FUN26(VAR2[VAR7],
VAR25);
FUN27(VAR2[VAR7],0);
FUN3(VAR2, VAR9, VAR10, 
VAR3);
return FUN4(VAR18, VAR26);
}
else {

FUN8(VAR7);
if (VAR8) FUN28();
}
}
continue;
}
switch(FUN6(VAR7)) {
case VAR27:
case VAR27 | VAR25:

FUN3(VAR2, VAR9, VAR10, 
VAR3);
if (FUN29()) {
FUN3(VAR2, VAR9, VAR10, 
VAR3);
return FUN4(VAR18, VAR28);
} else {

VAR6 = VAR4 & VAR20;
switch (FUN14()) {
case VAR23: 
FUN30(FUN17(VAR6));
break;
case VAR24:
FUN31(FUN21(VAR6),FUN22(VAR6));
break;
}
FUN32();

if (FUN25()) {

FUN26(VAR2[VAR7],
VAR25);
FUN3(VAR2, VAR9, VAR10,
VAR3);
return FUN4(VAR18, VAR26);
}
else {

FUN8(VAR7);
FUN28();
}
}
break;
case VAR29:
case VAR30:
FUN3(VAR2, VAR9, VAR10, VAR3);
return FUN4(VAR18, VAR31);
case VAR32:
FUN3(VAR2, VAR9, VAR10, VAR3);
FUN8(VAR7);
return FUN4(VAR18, VAR33);
case VAR25:
FUN3(VAR2, VAR9, VAR10, VAR3);
return FUN4(VAR18, VAR26);
default:
FUN3(VAR2, VAR9, VAR10, VAR3);
FUN33("", VAR34,
VAR35, FUN6(VAR7));
return FUN4(VAR12, VAR13);
case VAR16:	

FUN8(VAR7);
break;
}
}

FUN7();
FUN3(VAR2, VAR9, VAR10, VAR3);
return(VAR36);
}