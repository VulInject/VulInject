void FUN1(char *VAR1, int VAR2)
{
bool	  VAR3 = VAR4;
char    VAR5[VAR6], VAR7[VAR6];
char    *VAR8 = NULL;
enum    { VAR9, VAR10, VAR11, VAR12 } VAR13 = VAR9;
float   VAR14,VAR15;
long4   VAR16, VAR17;
KeyWord VAR18;
int     VAR19, VAR20, VAR21;
static  int   VAR22 = 10, VAR23 = 1;
static  bool  VAR24 = VAR4;
static  long4 VAR25[VAR26], VAR27[VAR26];
static  bool  VAR28 = VAR4;
int VAR29=0, VAR30=0, VAR31=0, VAR32=0, VAR33=0;

VAR1[VAR2] = '';
if ( VAR28 ) {
for ( VAR19=0 ; VAR19<VAR26 ; VAR19++ )
VAR25[VAR19] = VAR27[VAR19] = -1;
VAR28 = VAR34;
}

FUN2(VAR35, VAR36);
if (FUN3(VAR1))
return;


while ( (VAR1 = FUN4(VAR1, &VAR18)) != NULL ) {

if ( VAR18.VAR37 == (VAR38) VAR9 ) {	

if ( FUN5(VAR18.VAR39, "") )
return;

if ( FUN6(VAR18.VAR39, 0) == 0 ) {
if ( VAR8 && !FUN7 ("") ) {
FUN8("", VAR8);
free (VAR8);
}
VAR8 = xstrdup(VAR18.VAR39);
VAR13 = VAR10;
} else {
if ( !FUN7 ("") )
FUN8("", VAR18.VAR39);
if ( VAR3 )
return;
}
} else if ( FUN9( &VAR18, VAR40, VAR41, &VAR19 ) && VAR19 != -1 ) {
switch (VAR19) {

case VAR42:
if ((VAR18.VAR36.VAR19 >= 0) && (VAR18.VAR36.VAR19 < 4)) {
VAR43 = VAR44;
sprintf(VAR45, "", (unsigned char)VAR18.VAR36.VAR19);
FUN10(2, VAR45);
if (VAR18.VAR36.VAR19 == 1) VAR46 = VAR4;
else if (VAR18.VAR36.VAR19 == 0) VAR46 = VAR34;
}
if ( VAR18.VAR36.VAR19 >= 0 && VAR18.VAR36.VAR19 <= 3 ) {
VAR47 = VAR43 = VAR44;
FUN11("", (unsigned char)VAR18.VAR36.VAR19);
}
else {
FUN8( "", VAR18.VAR36.VAR19);
}
break;

case VAR48:
for ( VAR19=0 ; VAR19<VAR26 ; VAR19++ )
VAR25[VAR19] = VAR27[VAR19] = -1;
break;

case VAR49:

VAR19 = sscanf(VAR18.VAR50,"",&VAR20,VAR5,VAR7);
if (VAR19>0) {
if ( VAR20 < 0  ||  VAR20 >= VAR26 ) {
FUN8 ("",
VAR20, VAR26-1);
break;
}
VAR16 = VAR35;
VAR17 = VAR36;
if ( VAR19 > 1  &&  sscanf(VAR5,"",&VAR14) > 0 )
VAR16 = FUN12(VAR14);
if ( VAR19 > 2  &&  sscanf(VAR7,"",&VAR15) > 0 )
VAR17 = FUN12(VAR15);
VAR25[VAR20]=VAR16;
VAR27[VAR20]=VAR17;
} else {
FUN8("");
}
break;

case VAR51:

VAR19 = sscanf(VAR18.VAR50,"",&VAR20,&VAR21);
if (VAR19>1) {
if ( VAR20 < 0 || VAR20 >= VAR26 ) {
FUN8 ("",
VAR20, VAR26);
break;
}
if ( VAR25[VAR20] == -1 ) {
FUN8 ("", VAR20);
break;
}
if ( VAR21 < 0 || VAR21 >= VAR26 ) {
FUN8 ("",
VAR21, VAR26);
break;
}
if ( VAR25[VAR21] == -1 ) {
FUN8 ("", VAR21);
break;
}
FUN2(VAR25[VAR20], VAR27[VAR20]);
VAR16 = (VAR52)FUN13(VAR25[VAR21]-VAR25[VAR20], VAR53);
VAR17 = (VAR52)FUN13(VAR27[VAR21]-VAR27[VAR20], VAR54);
if (FUN14(VAR16)<FUN14(VAR17)) VAR16 = VAR16+3;
else                         VAR17 = VAR17+3;
if (VAR24) {
FUN15("", (long)VAR16, (long)VAR17, VAR22);
} else {
FUN15("", (long)VAR16, (long)VAR17, VAR23);
}
VAR47 = VAR43 = VAR44;
}
break;

case VAR55:
if ((VAR18.VAR36.VAR19 >= 0) && (VAR18.VAR36.VAR19 < 101)) {
VAR22 = VAR18.VAR36.VAR19;
VAR24 = VAR4;
} else {
FUN8( "", VAR18.VAR36.VAR19);
}
break;

case VAR56:
if ((VAR18.VAR36.VAR19 >= 0) && (VAR18.VAR36.VAR19 < 7)) {
VAR23 = VAR18.VAR36.VAR19;
VAR24 = VAR34;
} else {
FUN8( "", VAR18.VAR36.VAR19);
}
break;

case VAR57:
return;

break;

case VAR58:
if ( VAR8 && !FUN7 ("") ) {
FUN8("", VAR8);
free(VAR8);
}
VAR8 = xstrdup(VAR18.VAR50);
VAR13 = VAR11;
break;

case VAR59:
if ( VAR8 && !FUN7 ("") ) {
FUN8("", VAR8);
free(VAR8);
}
VAR8 = xstrdup(VAR18.VAR50);
VAR13 = VAR10;
break;

case VAR60:
if ( FUN5(VAR18.VAR50, "") )
VAR61 = VAR62;
else if ( FUN5(VAR18.VAR50, "") )
VAR61 = VAR63;
else
FUN8("", VAR18.VAR50);
break;

case VAR64:
if ( VAR8 ) {
FUN8("", VAR8);
free(VAR8);
}
if ( VAR61 != VAR62 ) {
VAR8 = xstrdup(VAR18.VAR50);
VAR13 = VAR12;
} else {
VAR8 = NULL;
}
break;

case VAR65: VAR29 = VAR18.VAR36.VAR19; break;
case VAR66: VAR30 = VAR18.VAR36.VAR19; break;
case VAR67: VAR31 = VAR18.VAR36.VAR19; break;
case VAR68: VAR32 = VAR18.VAR36.VAR19; break;
case VAR69: VAR33 = VAR18.VAR36.VAR19; break;
case VAR70:
if (!FUN7 (""))
FUN8("");
break;

default:
if ( !FUN7 ("") )
FUN8("", VAR18.VAR39, VAR18.VAR50);
if ( VAR3 )
return;
break;
}

} else {
if ( !FUN7 ("") )
FUN8("", VAR18.VAR39);
if ( VAR3 )
return;
}

free (VAR18.VAR39);
if ( VAR18.VAR50 != NULL )  free(VAR18.VAR50);
VAR3 = VAR34;
}

if ( VAR8 ) {
char * VAR71;
VAR47 = VAR43 = VAR44;
VAR72;


if ( (VAR71 = FUN16(VAR8, VAR73, false)) == NULL &&
(VAR71 = FUN16(VAR8, VAR74, false)) == NULL ) {
FUN8 ("", VAR8);
VAR13 = VAR9;
} else {
free (VAR8);
VAR8 = VAR71;
}

if ( VAR13 == VAR12) {

int VAR75  = VAR31 - VAR29;
int VAR76 = VAR32 - VAR30;
char VAR77[255];
const char *VAR78 = "";
const char *VAR79;
int VAR80, VAR81, VAR82;
const char *VAR83 = ""; 

char VAR84[VAR6];
char VAR85[VAR6];
FILEPTR VAR86;

if ( VAR31 == 0 || VAR32 == 0 || VAR33 == 0 ) {

if ( !FUN7 ("") )
FUN8 ("");
free (VAR8);
return;
}
VAR80    = 3000 * VAR75 / VAR33;
VAR81 = VAR76 * 300/VAR80;
VAR82    = VAR29    * 300/VAR80;


if ( VAR87[0] == '' ) {
const char * VAR88, * VAR89;
char *VAR90;
if ( (VAR88 = getenv("")) == NULL )
VAR88 = "";
VAR90 = FUN17 (VAR88, "");
if ( (VAR88 = getenv("")) == NULL &&
(VAR88 = getenv("")) == NULL &&
(VAR88 = getenv("")) == NULL )
if ( (VAR88 = getenv("")) == NULL )
VAR88 = VAR90;
else if ( strlen(VAR88) > VAR6 - sizeof("") ) {
FUN8 ("", VAR88, VAR90);
VAR88 = VAR90;
}

VAR89 = VAR88;
if ( FUN18(VAR88[0]) && VAR88[1] == '' )
VAR89 += 2;
if ( FUN19(VAR89[0]) && VAR89[1] == '' ) {
FUN8 ("", VAR88);
VAR88 = VAR90;
}
strcpy (VAR87, VAR88);
free (VAR90);
strcat (VAR87, "");
if ( FUN20(VAR87) == NULL ) {
FUN8 ("",
VAR87, VAR91);
return;
}
}
strcpy(VAR84, VAR87);
strcat(VAR84, "");
strcpy(VAR85, VAR87);
strcat(VAR85, "");

if ( (VAR86 = FUN21(VAR85)) == VAR92 ) {
FUN8("", VAR85 );
free (VAR8);
unlink(VAR85);		
return;
}
fprintf(VAR86, "",
300.0/VAR80, 300.0/VAR80,
0, VAR81 == VAR76 ? 0 : VAR32);
FUN22( VAR86 );

if ( (VAR79 = getenv("")) == NULL )
VAR79 = "";
VAR79 = "";
if ( strlen(VAR78)-10 + strlen(VAR79) + strlen(VAR83) +
strlen(VAR84) + strlen(VAR85) + strlen(VAR8) +1 >
sizeof(VAR77) ) {
FUN8 ("", VAR8);
free (VAR8);
unlink(VAR85);		
unlink(VAR84);
return;
}
sprintf(VAR77, VAR78,
VAR79, VAR83, VAR84, VAR85, VAR8);
fprintf(VAR93,
"",
VAR8, VAR31 - VAR29, VAR76, VAR31,VAR32,VAR29,VAR30, VAR33);
fprintf(VAR93,"",VAR77);
if (system(VAR77)) {
FUN8("", VAR77);
} else {
fprintf(VAR93, "",
VAR29, VAR76, VAR82, VAR81);

fprintf(VAR93, "",
(int)FUN13(VAR35, VAR53) + VAR94,
(int)FUN13(VAR36, VAR54) + VAR95);
VAR36 -= 65536l*VAR81; 
VAR35 -= 65536l*VAR82; 
FUN2(VAR35, VAR36);
fprintf(VAR93, "",
(int)FUN13(VAR35, VAR53) + VAR94,
(int)FUN13(VAR36, VAR54) + VAR95);

FUN23( VAR84 );
}
unlink(VAR85);		
unlink(VAR84);
}
else

if ( VAR13 == VAR11 )
FUN23( VAR8 );
else if ( VAR13 == VAR10 )
FUN24( VAR8 );
else if ( VAR13 == VAR9 )
;
else
FUN8 ("", VAR13);

if ( VAR8 != NULL )  free(VAR8);
}
}