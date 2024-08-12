static int
FUN1(VAR1* VAR2,
VAR3* VAR4,
int VAR5)
{
VAR6* VAR7 = (VAR6*)VAR2->VAR7;
VAR8 *VAR9 = VAR7->VAR9;
VAR10* VAR11 = NULL;
int VAR12 = 0;
VAR13* VAR14 = NULL;
int VAR15;


FUN2("", VAR4->VAR16);


if(FUN3(VAR4->VAR17) > 0)
VAR12 = FUN4(VAR2, VAR4, VAR5+1);


for((VAR14 = FUN5(VAR4->VAR18, NULL, NULL, 1));
VAR14 && !VAR12;
(VAR12 = FUN6(VAR14))) {
VAR10** VAR19;
VAR10* VAR20;
VAR10* VAR21;
VAR22 *VAR23;

VAR19 = (VAR10**)FUN7(VAR14);
if(!VAR19)
break;

VAR20 = VAR19[0];
VAR21 = VAR19[1];

if(!VAR11 ||
!FUN8(VAR20, VAR11)) {



if(VAR11) {
if(!VAR7->VAR24) {

FUN9(VAR9, (const unsigned char*)"", 2);
FUN10(VAR9);
VAR7->VAR25++; 
} else if(!VAR7->VAR26) {

} else if(VAR7->VAR27 &&
(VAR7->VAR26 == VAR7->VAR24)) {

VAR7->VAR27 = 0;
FUN9(VAR9, (const unsigned char*)"", 2);
FUN10(VAR9);
VAR7->VAR26 = 0;
VAR7->VAR25++;
if(VAR7->VAR25 > VAR7->VAR28) {

FUN9(VAR9, (const unsigned char*)"", 21);
FUN10(VAR9);
break;
}
}
}

VAR23 = FUN11(VAR7->VAR29,
VAR20->VAR30->VAR31.VAR32,
10);
if(FUN8(VAR20, VAR7->VAR33)) {
VAR15 = 1;  
} else if(VAR23) {

if(!strcmp((const char*)VAR23->VAR34, (const char*)"")) {

FUN9(VAR9, (const unsigned char*)"", 38);
FUN10(VAR9);
FUN9(VAR9, (const unsigned char*)"", 23);
FUN12(VAR9);
FUN10(VAR9);
VAR15 = 0;

} else if(!strcmp((const char*)VAR23->VAR34, (const char*)"")) {
VAR7->VAR24 = VAR7->VAR26;
VAR7->VAR26 = 0;
VAR15 = 0;
} else if(!strcmp((const char*)VAR23->VAR34, (const char*)"")) {
VAR15 = 0; 
} else if(!strcmp((const char*)VAR23->VAR34, (const char*)"")) {
VAR15 = 0; 
} else if(!strcmp((const char*)VAR23->VAR34, (const char*)"")) {
VAR15 = 1;
} else if(!strcmp((const char*)VAR23->VAR34, (const char*)"")) {
VAR7->VAR27 = 1;
VAR7->VAR26++;
VAR15 = 0;
} else {
VAR15 = 1;
}

} else {

FUN13(VAR9, VAR20->VAR30->VAR31.VAR32);
VAR15 = 0;
} 

if(VAR23)
FUN14(VAR23);
} else { 
if(!VAR7->VAR24)

FUN9(VAR9, (const unsigned char*)"", 2);
}

if(!VAR15) {

switch(VAR21->VAR30->VAR35) {
case VAR36:
VAR12 = FUN15(VAR2, VAR21, VAR5+1);
break;

case VAR37:
if(!VAR7->VAR24) {

VAR7->VAR26++;
FUN16(VAR9, VAR21->VAR30->VAR31.VAR38.VAR39);
} else if(!VAR7->VAR26) {

VAR7->VAR28 = FUN17((const char*)VAR21->VAR30->VAR31.VAR38.VAR39);
} else {

FUN16(VAR9, VAR21->VAR30->VAR31.VAR38.VAR39);
if(VAR7->VAR26 < VAR7->VAR24)

FUN9(VAR9, (const unsigned char*)"", 2);
}
break;

case VAR40:
VAR12 = FUN18(VAR2, VAR21, VAR5+1);
break;

case VAR41:
default:
FUN19(VAR2->VAR42, VAR43,
NULL, "",
VAR21->VAR30->VAR35);
break;
}
} 


if(VAR12)
return VAR12;

VAR11 = VAR20;
} 

if(VAR14)
FUN20(VAR14);

return VAR12;
}