int FUN1(struct VAR1 *VAR2,
VAR3* VAR4,
char *VAR5,
const char *VAR6,
char *VAR7,
const char *VAR8,
char *VAR9)
{
struct VAR10 *VAR11 = VAR2->VAR11;

int VAR12 = FUN2(VAR6);

if(VAR5 || (VAR12 == VAR13)) {
VAR14 *VAR15;
VAR16 *VAR17;
int VAR18 = 0;

if(VAR9) {

FUN3(VAR4, VAR9);

FUN4(VAR4, VAR19);
}


switch(VAR12) {
case VAR20:

if(FUN5(VAR4,
VAR5) != 1) {
FUN6(VAR11,
"" VAR21
""
"",
FUN7(FUN8(), NULL) );
return 0;
}
break;

case VAR22:

if(FUN9(VAR4,
VAR5,
VAR12) != 1) {
FUN6(VAR11,
"" VAR21
""
"",
FUN7(FUN8(), NULL) );
return 0;
}
break;
case VAR13:
{
if(VAR11->VAR23.VAR24) {
const char *VAR25 = "";
struct {
const char *VAR26;
VAR16 *VAR27;
} VAR28;

VAR28.VAR26 = VAR5;
VAR28.VAR27 = NULL;


if(!FUN10(VAR11->VAR23.VAR24, VAR29,
0, (void *)VAR25, NULL)) {
FUN6(VAR11, "");
return 0;
}


if(!FUN11(VAR11->VAR23.VAR24, VAR25,
0, &VAR28, NULL, 1)) {
FUN6(VAR11, ""
"", VAR5,
FUN7(FUN8(), NULL));
return 0;
}

if(!VAR28.VAR27) {
FUN6(VAR11, ""
"");
return 0;
}

if(FUN12(VAR4, VAR28.VAR27) != 1) {
FUN6(VAR11, "");
FUN13(VAR28.VAR27);
return 0;
}
FUN13(VAR28.VAR27); 
}
else {
FUN6(VAR11, "");
return 0;
}
}
break;
FUN6(VAR11, "");
return 0;

case VAR30:
{
VAR31 *VAR32;
VAR33 *VAR34;
VAR35 *VAR36;
FUN14(VAR16) *VAR37 = NULL;

VAR32 = fopen(VAR5, "");
if(!VAR32) {
FUN6(VAR11, "", VAR5);
return 0;
}
VAR34 = FUN15(VAR32, NULL);
fclose(VAR32);

if(!VAR34) {
FUN6(VAR11, "", VAR5);
return 0;
}

FUN16();

if(!FUN17(VAR34, VAR9, &VAR36, &VAR17,
&VAR37)) {
FUN6(VAR11,
"" VAR21
"",
FUN7(FUN8(), NULL) );
FUN18(VAR34);
return 0;
}

FUN18(VAR34);

if(FUN12(VAR4, VAR17) != 1) {
FUN6(VAR11,
"" VAR21
"",
FUN7(FUN8(), NULL) );
goto VAR38;
}

if(FUN19(VAR4, VAR36) != 1) {
FUN6(VAR11, "",
VAR5);
goto VAR38;
}

if(!FUN20 (VAR4)) {
FUN6(VAR11, ""
"", VAR5);
goto VAR38;
}

if(VAR37) {
while(FUN21(VAR37)) {

VAR16 *VAR39 = FUN22(VAR37);
if(!FUN23(VAR4, VAR39)) {
FUN13(VAR39);
FUN6(VAR11, "");
goto VAR38;
}
if(!FUN24(VAR4, VAR39)) {
FUN13(VAR39);
FUN6(VAR11, "");
goto VAR38;
}
}
}

VAR18 = 1;
VAR38:
FUN25(VAR36);
FUN13(VAR17);
FUN26(VAR37, VAR40);

if(!VAR18)
return 0; 
break;
FUN6(VAR11, "");
return 0;
}
default:
FUN6(VAR11, "", VAR6);
return 0;
}

VAR12 = FUN2(VAR8);

switch(VAR12) {
case VAR20:
if(VAR18)
break;
if(!VAR7)

VAR7=VAR5;
case VAR22:
if(FUN27(VAR4, VAR7, VAR12) != 1) {
FUN6(VAR11, "",
VAR7, VAR8?VAR8:"");
return 0;
}
break;
case VAR13:
{                         
VAR35 *VAR41 = NULL;
if(VAR11->VAR23.VAR24) {
VAR42 *VAR43 =
FUN28((char *)"");
if(!VAR43) {
FUN6(VAR11, "" VAR21
"");
return 0;
}
FUN29(VAR43, FUN30(FUN31()));
FUN32(VAR43, FUN33(FUN31()));
FUN34(VAR43, VAR44);
FUN35(VAR43, VAR45);

VAR41 = (VAR35 *)
FUN36(VAR11->VAR23.VAR24, VAR7,
VAR43,
VAR9);
FUN37(VAR43);
if(!VAR41) {
FUN6(VAR11, "");
return 0;
}
if(FUN19(VAR4, VAR41) != 1) {
FUN6(VAR11, "");
FUN25(VAR41);
return 0;
}
FUN25(VAR41);  
}
else {
FUN6(VAR11, "");
return 0;
}
}
break;
FUN6(VAR11, "");
return 0;
case VAR30:
if(!VAR18) {
FUN6(VAR11, "");
return 0;
}
break;
default:
FUN6(VAR11, "");
return 0;
}

VAR15=FUN38(VAR4);
if(!VAR15) {
FUN6(VAR11, "");
return 0;
}

VAR17=FUN39(VAR15);


if(VAR17) {
VAR35 *VAR46 = FUN40(VAR17);
FUN41(VAR46, FUN42(VAR15));
FUN25(VAR46);
}

FUN43(VAR15);





if(!FUN20(VAR4)) {
FUN6(VAR11, "");
return 0;
}
}
return 1;
}