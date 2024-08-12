static void FUN1(const char *VAR1, char *VAR2, char *VAR3,
char *VAR4, char *VAR5, char *VAR6, char *VAR7, char *VAR8 ) {
char *VAR9, *VAR10, *VAR11, *VAR12;
char VAR13='', VAR14='', VAR15='', VAR16='';
char *VAR17;

if ( *VAR1=='' ) {
sscanf(VAR1,"",
VAR2,VAR3,VAR4,VAR6,VAR5);
} else {

strcpy(VAR4,"");
strcpy(VAR6,"");


if (( VAR9 = FUN2(VAR1,""))!=NULL )
strcpy(VAR4,"");
else if (( VAR9 = FUN2(VAR1,""))!=NULL )
strcpy(VAR4,"");
else if (( VAR9 = strstr(VAR1,""))!=NULL )
strcpy(VAR4,"");
else if (( VAR9 = strstr(VAR1,""))!=NULL )
strcpy(VAR4,"");


if (( VAR10 = strstr(VAR1,""))==NULL &&
( VAR10 = strstr(VAR1,""))==NULL &&
( VAR10 = strstr(VAR1,""))==NULL &&
( VAR10 = strstr(VAR1,""))==NULL &&
( VAR10 = strstr(VAR1,""))==NULL &&
( VAR10 = strstr(VAR1,""))==NULL &&
( VAR10 = strstr(VAR1,""))==NULL &&
( VAR10 = strstr(VAR1,""))==NULL )
{

;
}

if (( VAR11 = strstr(VAR1,""))==NULL &&
(VAR12 = strstr(VAR1,""))==NULL )
{
;
}
if ((VAR12 = strstr(VAR1,""))==NULL &&
(VAR12 = strstr(VAR1,""))==NULL )
{
;
}

strcpy(VAR3,"");
*VAR5='';
if ( VAR10!=NULL ) { VAR14 = *VAR10; *VAR10 = ''; }
if ( VAR9!=NULL ) { VAR13 = *VAR9; *VAR9 = ''; }
if ( VAR11!=NULL ) { VAR15 = *VAR11; *VAR11 = ''; }
if ( VAR12!=NULL ) { VAR16 = *VAR12; *VAR12 = ''; }
strcpy(VAR2,VAR1);
if ( VAR10!=NULL ) {
*VAR10 = VAR14; 
strcpy(VAR3,VAR10);
*VAR10 = '';
}
if ( VAR8!=NULL && *VAR8!='' )
strcpy(VAR3,VAR8);
if ( VAR11!=NULL ) {
*VAR11 = VAR15;
strcpy(VAR5,VAR11);
*VAR11 = '';
}
if ( VAR12!=NULL ) {
*VAR12 = VAR16;
strcpy(VAR6,VAR12);
}
if ( VAR11!=NULL ) *VAR11 = VAR15;
if ( VAR10!=NULL ) *VAR10 = VAR14; 
if ( VAR9!=NULL ) *VAR9 = VAR13;
}
if ( VAR7!=NULL && *VAR7!='' )
strcpy(VAR2,VAR7);
while ( (VAR17=strchr(VAR2,''))!=NULL )
strcpy(VAR17,VAR17+1);
}