int FUN1(VAR1 *VAR2, VAR3 **VAR4, str VAR5,
str VAR6, int VAR7, int VAR8, int VAR9, str VAR10)
{
str VAR11 = {0, 0};
static str VAR12 = FUN2("");
static ucontact_info_t VAR13;
VAR14 *VAR15;
int VAR16;

FUN3(1);
if(*VAR4 == NULL) {
switch(VAR9) {
case VAR17:
case VAR18:
case VAR19:

if(VAR20.FUN4(VAR2, &VAR5, VAR4) < 0) {
FUN5("");
VAR16 = VAR21;
goto VAR22;
}
break;
default:

VAR16 = VAR23;
goto VAR22;
}
}


memset(&VAR13, 0, sizeof(VAR24));

VAR13.VAR6 = &VAR6;

VAR13.VAR7 = VAR7;
VAR13.VAR25 = NULL;

VAR13.VAR26 = &VAR12;
VAR13.VAR27 = FUN6(0);


VAR13.VAR8 = FUN6(0) + VAR8;


if(FUN7(&VAR28) < 0) {
FUN5("");
} else {
VAR13.VAR29 = VAR28.VAR30;
}


if(((*VAR4)->VAR31 == 0)
|| (VAR20.FUN8(*VAR4, &VAR10, &VAR6, &VAR11,
VAR7 + 1, &VAR15)
!= 0)) {
if(VAR20.FUN9(*VAR4, &VAR10, &VAR13, &VAR15) < 0) {
FUN5("");
VAR16 = VAR21;
goto VAR22;
}
} else {
if(VAR20.FUN10(*VAR4, VAR15, &VAR13) < 0) {
FUN5("");
VAR16 = VAR21;
goto VAR22;
}
}
VAR15 = (*VAR4)->VAR31;
while(VAR15) {
if(FUN11(VAR15, FUN6(0)))
return VAR32;
VAR15 = VAR15->VAR33;
}

VAR16 = VAR23;
VAR22:
FUN3(0);
return VAR16;
}