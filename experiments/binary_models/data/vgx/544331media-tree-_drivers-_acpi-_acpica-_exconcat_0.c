VAR1
FUN1(union VAR2 *VAR3,
union VAR2 *VAR4,
union VAR2 **VAR5,
struct VAR6 *VAR7)
{
union VAR2 *VAR8 = VAR3;
union VAR2 *VAR9 = VAR4;
union VAR2 *VAR10 = NULL;
union VAR2 *VAR11;
char *VAR12;
acpi_object_type VAR13;
acpi_object_type VAR14;
acpi_status VAR15;

FUN2(VAR16);



switch (VAR3->VAR17.VAR18) {
case VAR19:
case VAR20:
case VAR21:

VAR13 = VAR3->VAR17.VAR18;
break;

default:



VAR15 =
FUN3(VAR3,
&VAR8);
if (FUN4(VAR15)) {
goto VAR22;
}

VAR13 = VAR20;
break;
}



switch (VAR4->VAR17.VAR18) {
case VAR19:
case VAR20:
case VAR21:

VAR14 = VAR4->VAR17.VAR18;
break;

default:



VAR15 =
FUN3(VAR4,
&VAR9);
if (FUN4(VAR15)) {
goto VAR22;
}

VAR14 = VAR20;
break;
}


switch (VAR13) {
case VAR19:

VAR15 =
FUN5(VAR9, &VAR10,
VAR23);
break;

case VAR21:

VAR15 =
FUN6(VAR9, &VAR10);
break;

case VAR20:

switch (VAR14) {
case VAR19:
case VAR20:
case VAR21:



VAR15 =
FUN7(VAR9,
&VAR10,
VAR24);
break;

default:

VAR15 = VAR25;
break;
}
break;

default:

FUN8((VAR26, "",
VAR3->VAR17.VAR18));
VAR15 = VAR27;
}

if (FUN4(VAR15)) {
goto VAR22;
}



if ((VAR9 != VAR4) && (VAR9 != VAR10)) {
FUN9(VAR9);
}

VAR9 = VAR10;


switch (VAR13) {
case VAR19:




VAR11 = FUN10((VAR28)
VAR29
(VAR30));
if (!VAR11) {
VAR15 = VAR31;
goto VAR22;
}

VAR12 = (char *)VAR11->VAR12.VAR32;



memcpy(VAR12, &VAR3->VAR33.VAR34,
VAR30);



memcpy(VAR12 + VAR30,
&VAR9->VAR33.VAR34,
VAR30);
break;

case VAR20:



VAR11 = FUN11(((VAR28)
VAR8->
VAR35.VAR36 +
VAR9->
VAR35.VAR36));
if (!VAR11) {
VAR15 = VAR31;
goto VAR22;
}

VAR12 = VAR11->VAR35.VAR32;



strcpy(VAR12, VAR8->VAR35.VAR32);
strcat(VAR12, VAR9->VAR35.VAR32);
break;

case VAR21:



VAR11 = FUN10(((VAR28)
VAR3->VAR12.
VAR36 +
VAR9->
VAR12.VAR36));
if (!VAR11) {
VAR15 = VAR31;
goto VAR22;
}

VAR12 = (char *)VAR11->VAR12.VAR32;



memcpy(VAR12, VAR3->VAR12.VAR32,
VAR3->VAR12.VAR36);
memcpy(VAR12 + VAR3->VAR12.VAR36,
VAR9->VAR12.VAR32,
VAR9->VAR12.VAR36);
break;

default:



FUN8((VAR26, "",
VAR3->VAR17.VAR18));
VAR15 = VAR27;
goto VAR22;
}

*VAR5 = VAR11;

VAR22:
if (VAR8 != VAR3) {
FUN9(VAR8);
}

if (VAR9 != VAR4) {
FUN9(VAR9);
}

FUN12(VAR15);
}