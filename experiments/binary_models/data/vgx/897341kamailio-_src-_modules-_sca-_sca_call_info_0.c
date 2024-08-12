int FUN1(
VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
sca_call_info VAR7;
VAR8 *VAR9;
struct VAR10 *VAR11;
struct VAR10 *VAR12;
sip_uri_t VAR13;
str VAR14 = VAR15;
str VAR16 = VAR15;
str VAR17 = VAR15;
int VAR18 = VAR19;
int VAR20 = VAR19;
int VAR21;
int VAR22;
int VAR23;
int VAR24 = -1;

VAR23 = FUN2(VAR2);

VAR21 = sizeof(VAR25) / sizeof(VAR25[0]);
for(VAR22 = 0; VAR22 < VAR21; VAR22++) {
if(VAR23 == VAR25[VAR22].VAR23) {
break;
}
}
if(VAR22 >= VAR21) {
if(VAR2->VAR26 == NULL
&& ((FUN3(VAR2, VAR27, 0) == -1)
|| (VAR2->VAR26 == NULL))) {
FUN4("");
return (1);
}
FUN5(""
"",
FUN6(&FUN7(VAR2)->VAR23));
return (1);
}

if(FUN3(VAR2, VAR28, 0) < 0) {
FUN4("");
return (-1);
}

if(VAR3 != VAR29) {
switch(VAR3) {
case VAR30:
VAR3 = VAR29;
break;

case VAR31:
case VAR32:
break;

default:
FUN4(""
"");
return (-1);
}
}

memset(&VAR7, 0, sizeof(VAR33));
VAR9 = FUN8(VAR2, VAR34);
if(!FUN9(VAR9)) {

if(FUN10(&VAR9->VAR35, &VAR7) < 0) {
FUN4("",
FUN6(&VAR9->VAR35));
return (-1);
}
}

if(VAR6 != NULL) {
if(FUN11(VAR2, &VAR11, VAR6) < 0) {
FUN4("");
return (-1);
}
FUN5("", FUN6(VAR6));
VAR20 |= VAR36;
if(FUN12(&VAR11->VAR37, &VAR14) < 0) {
FUN4("",
FUN6(&VAR11->VAR37));
goto VAR38;
}
} else if(FUN13(VAR2, &VAR11) < 0) {
FUN4("");
return (-1);
}
if(VAR5 != NULL) {
if(FUN11(VAR2, &VAR12, VAR5) < 0) {
FUN4("");
goto VAR38;
}
FUN5("", FUN6(VAR5));
VAR20 |= VAR39;
if(FUN12(&VAR12->VAR37, &VAR16) < 0) {
FUN4("",
FUN6(&VAR12->VAR37));
goto VAR38;
}
} else if(FUN14(VAR2, &VAR12) < 0) {
FUN4("");
goto VAR38;
}

memset(&VAR13, 0, sizeof(VAR40));
VAR24 = FUN15(VAR2, &VAR17);
if(VAR24 > 0) {

if(FUN16(VAR17.VAR41, VAR17.VAR42, &VAR13) < 0) {
FUN4("", FUN6(&VAR17));
VAR24 = -1;
goto VAR38;
}
} else if(VAR24 < 0) {
FUN4("");
goto VAR38;
}

VAR24 = -1;


if(VAR2->VAR43.VAR44 == VAR45) {
if(VAR6 == NULL) {
if(FUN17(VAR2, &VAR14) < 0) {
goto VAR38;
}
VAR18 |= VAR36;
}
if(VAR5 == NULL) {
if(FUN12(&VAR12->VAR37, &VAR16) < 0) {
FUN4("",
FUN6(&VAR12->VAR37));
goto VAR38;
}
}
} else {
if(VAR6 == NULL) {
if(FUN12(&VAR11->VAR37, &VAR14) < 0) {
FUN4("",
FUN6(&VAR11->VAR37));
goto VAR38;
}
}
if(VAR5 == NULL) {
if(FUN17(VAR2, &VAR16) < 0) {
goto VAR38;
}
VAR18 |= VAR39;
}
}

FUN5("", FUN6(&VAR16),
FUN6(&VAR14));


if(FUN18(VAR46, &VAR14)) {
if((VAR3 & VAR31)) {
VAR7.VAR47 |= VAR31;
}
}
if(FUN18(VAR46, &VAR16)) {
if((VAR3 & VAR32)) {
VAR7.VAR47 |= VAR32;
}
}

if(VAR9 == NULL) {
if(FUN19(&VAR7)
&& VAR2->VAR43.VAR44 == VAR45) {
if(!FUN20(
VAR48, &VAR14)) {
VAR7.VAR47 &= ~VAR31;
FUN21(VAR46, &VAR14);
}
} else if(FUN22(&VAR7)
&& VAR2->VAR43.VAR44 == VAR49) {
if(!FUN20(
VAR48, &VAR16)) {
VAR7.VAR47 &= ~VAR32;
FUN21(VAR46, &VAR16);
}
}
}

if(FUN23(VAR2) < 0) {
FUN4("");
goto VAR38;
}

if(VAR7.VAR47 == VAR30) {
FUN5("", FUN6(&VAR14),
FUN6(&VAR16));
goto VAR38;
}

FUN5(""
"",
VAR22, FUN6(&VAR14), FUN6(&VAR16), FUN6(&VAR11->VAR37),
FUN6(&VAR12->VAR37), FUN6(&VAR17));

VAR24 = VAR25[VAR22].FUN24(
VAR2, &VAR7, VAR11, VAR12, &VAR14, &VAR16, &VAR17);
if(VAR24 < 0) {
FUN4("",
FUN6(&VAR17));
}

VAR38:
if((VAR18 & VAR36)) {
if(VAR14.VAR41 != NULL) {
FUN25(VAR14.VAR41);
}
}
if((VAR18 & VAR39)) {
if(VAR16.VAR41 != NULL) {
FUN25(VAR16.VAR41);
}
}
if((VAR20 & VAR36)) {
if(VAR11 != NULL) {
FUN26(VAR11);
}
}
if((VAR20 & VAR39)) {
if(VAR12 != NULL) {
FUN26(VAR12);
}
}

return (VAR24);
}