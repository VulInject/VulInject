int
FUN1(VAR1* VAR2, VAR3* VAR4, int VAR5, char VAR6[1024])
{
VAR7* VAR8;
uint16 VAR9;
uint16 VAR10;
uint16 VAR11;
int VAR12;
VAR7 *VAR13, *VAR14, *VAR15;
int VAR16;


VAR2->VAR17 = 0;
VAR2->VAR18 = 0;
VAR2->VAR19 = NULL;
VAR2->VAR20 = NULL;
VAR2->VAR21 = NULL;
VAR2->VAR22 = VAR23;     

VAR2->VAR4 = VAR4;
VAR2->VAR24 = VAR5;
FUN2(VAR4, VAR25, &VAR2->VAR26);
switch (VAR2->VAR26) {
case 1:
case 2:
case 4:
case 8:
case 16:
break;
default:
sprintf(VAR6, "",
VAR2->VAR26);
goto VAR27;
}
VAR2->VAR28 = 0;
FUN2(VAR4, VAR29, &VAR2->VAR30);
FUN2(VAR4, VAR31,
&VAR9, &VAR8);
if (VAR9 >= 1)
{
switch (VAR8[0]) {
case VAR32:          
if (VAR2->VAR30 > 3)  
VAR2->VAR28 = VAR33;
break;
case VAR33:           
case VAR34:           
VAR2->VAR28 = VAR8[0];
break;
}
}

if( !FUN3(VAR4, VAR35, &VAR2->VAR36))
VAR2->VAR36 = VAR37;

if( VAR9 == 0
&& VAR2->VAR30 == 4
&& VAR2->VAR36 == VAR38 )
{
VAR2->VAR28 = VAR33;
VAR9 = 1;
}

VAR12 = VAR2->VAR30 - VAR9;
FUN2(VAR4, VAR39, &VAR11);
FUN2(VAR4, VAR40, &VAR10);
if (!FUN3(VAR4, VAR35, &VAR2->VAR36)) {
switch (VAR12) {
case 1:
if (FUN4(VAR4))
VAR2->VAR36 = VAR37;
else
VAR2->VAR36 = VAR41;
break;
case 3:
VAR2->VAR36 = VAR38;
break;
default:
sprintf(VAR6, "", VAR42);
goto VAR27;
}
}
switch (VAR2->VAR36) {
case VAR43:
if (!FUN3(VAR4, VAR44,
&VAR13, &VAR14, &VAR15)) {
sprintf(VAR6, ""VAR45\"");
goto VAR27;
}


VAR16 = (1L << VAR2->VAR26);
VAR2->VAR19 = (VAR7 *) FUN5(sizeof(VAR7)*VAR16);
VAR2->VAR20 = (VAR7 *) FUN5(sizeof(VAR7)*VAR16);
VAR2->VAR21 = (VAR7 *) FUN5(sizeof(VAR7)*VAR16);
if( !VAR2->VAR19 || !VAR2->VAR20 || !VAR2->VAR21 ) {
sprintf(VAR6, "");
goto VAR27;
}

FUN6( VAR2->VAR19, VAR13, VAR16 * 2 );
FUN6( VAR2->VAR20, VAR14, VAR16 * 2 );
FUN6( VAR2->VAR21, VAR15, VAR16 * 2 );


case VAR37:
case VAR41:
if (VAR10 == VAR46
&& VAR2->VAR30 != 1
&& VAR2->VAR26 < 8 ) {
sprintf(VAR6,
""
"",
VAR42, VAR2->VAR36,
"", VAR2->VAR30,
VAR2->VAR26);
goto VAR27;
}
break;
case VAR47:

if (VAR10 == VAR46)


switch (VAR11) {
case VAR48:

FUN7(VAR4, VAR49, VAR50);
VAR2->VAR36 = VAR38;
break;
default:
;
break;
}

break;
case VAR38:
if (VAR12 < 3) {
sprintf(VAR6, "",
"", VAR12);
goto VAR27;
}
break;
case VAR51:
{
uint16 VAR52;
FUN2(VAR4, VAR53, &VAR52);
if (VAR52 != VAR54) {
sprintf(VAR6, "",
"", VAR52);
goto VAR27;
}
if (VAR2->VAR30 < 4) {
sprintf(VAR6, "",
"", VAR2->VAR30);
goto VAR27;
}
}
break;
case VAR55:
if (VAR11 != VAR56) {
sprintf(VAR6, "",
"", VAR56);
goto VAR27;
}
FUN7(VAR4, VAR57, VAR58);
VAR2->VAR36 = VAR41;	
VAR2->VAR26 = 8;
break;
case VAR59:
if (VAR11 != VAR56 && VAR11 != VAR60) {
sprintf(VAR6, "",
"", VAR56, VAR60);
goto VAR27;
}
if (VAR10 != VAR46) {
sprintf(VAR6, "",
"", VAR10);
return (0);
}
FUN7(VAR4, VAR57, VAR58);
VAR2->VAR36 = VAR38;		
VAR2->VAR26 = 8;
break;
case VAR61:
break;
default:
sprintf(VAR6, "",
VAR42, VAR2->VAR36);
goto VAR27;
}
VAR2->VAR62 = NULL;
VAR2->VAR63 = NULL;
VAR2->VAR64 = NULL;
VAR2->VAR65 = NULL;
VAR2->VAR66 = NULL;
VAR2->VAR67 = NULL;
VAR2->VAR68 = NULL;
FUN3(VAR4, VAR69, &VAR2->VAR70);
FUN3(VAR4, VAR71, &VAR2->VAR72);
FUN2(VAR4, VAR73, &VAR2->VAR74);
VAR2->VAR75 =
!(VAR10 == VAR76 && VAR2->VAR30 > 1);
if (VAR2->VAR75) {
if (!FUN8(VAR2)) {
sprintf(VAR6, "");
goto VAR27;
}
} else {
if (!FUN9(VAR2)) {
sprintf(VAR6, "");
goto VAR27;
}
}
return 1;

VAR27:
FUN10( VAR2->VAR19 );
FUN10( VAR2->VAR20 );
FUN10( VAR2->VAR21 );
VAR2->VAR19 = VAR2->VAR20 = VAR2->VAR21 = NULL;
return 0;
}