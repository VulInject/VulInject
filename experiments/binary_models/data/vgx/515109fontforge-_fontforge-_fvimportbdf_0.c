static int FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, VAR5 **VAR6,
char *VAR7, char *VAR8, char *VAR9, int *VAR10, char *VAR11,
char *VAR12, char *VAR13, struct VAR14 *VAR15,
int *VAR16, int *VAR17, VAR18 *VAR19,
char *VAR20) {
int VAR21 = -1, VAR22= -1, VAR23 = -1;
int VAR24= -1, VAR25= -1, VAR26, VAR27;
char VAR28[100], VAR29[100], VAR30[100], VAR31[100], VAR32[300], *VAR33;
int VAR34=0;
int VAR35=false;
int VAR36=0, VAR37=0;

*VAR10 = 1;
VAR29[0]= ''; VAR7[0] = ''; VAR30[0]=''; VAR31[0]=''; VAR9[0]='';
VAR11[0]= ''; VAR13[0] = '';
while ( FUN2(VAR2,VAR28,sizeof(VAR28))!=-1 ) {
if ( strcmp(VAR28,"")==0 ) {
VAR27=0;
fscanf(VAR2,"",&VAR27);
FUN3(VAR27);
break;
}
if ( strcmp(VAR28,"")==0 ) {
int VAR27;
VAR35 = true;
fscanf(VAR2, "", &VAR27 );
if ( VAR36+VAR27>=VAR37 )
VAR19->VAR38 = realloc(VAR19->VAR38,(VAR37=VAR36+VAR27)*sizeof(VAR39));

continue;
} else if ( strcmp(VAR28,"")==0 ) {
VAR35 = false;
continue;
}
fgets(VAR32,sizeof(VAR32),VAR2 );
VAR33 = VAR32;
{
int VAR40;
char *VAR41, *VAR42;

if ( VAR36>=VAR37 )
VAR19->VAR38 = realloc(VAR19->VAR38,(VAR37=VAR36+10)*sizeof(VAR39));
VAR19->VAR38[VAR36].VAR43 = copy(VAR28);
while ( *VAR33=='' || *VAR33=='' ) ++VAR33;
for ( VAR42=VAR33+strlen(VAR33)-1; VAR42>=VAR33 && FUN4(*VAR42); --VAR42);
VAR42[1] ='';
VAR40 = FUN5(VAR33,&VAR41,10);
if ( *VAR41=='' && VAR33<=VAR42 ) {
VAR19->VAR38[VAR36].VAR44.VAR40 = VAR40;
VAR19->VAR38[VAR36].VAR45 = FUN6(VAR28)?VAR46:VAR47;
} else if ( *VAR33=='' ) {
++VAR33;
if ( *VAR42=='' ) *VAR42 = '';
VAR19->VAR38[VAR36].VAR44.VAR48 = copy(VAR33);
VAR19->VAR38[VAR36].VAR45 = VAR49;
} else {
VAR19->VAR38[VAR36].VAR44.VAR50 = copy(VAR33);
VAR19->VAR38[VAR36].VAR45 = VAR51;
}
if ( VAR35 )
VAR19->VAR38[VAR36].VAR45 |= VAR52;
++VAR36;
}

if ( strcmp(VAR28,"")==0 ) {
if ( sscanf(VAR33,"", VAR7, VAR30, VAR31 )!=0 ) {
char *VAR53=VAR33;
int VAR54=0;
while ( *VAR53=='' && VAR54<7 ) { ++VAR53; ++VAR54; }
while ( *VAR53!='' && *VAR53!='' && *VAR53!='' && VAR54<7 ) {
while ( *VAR53!='' && *VAR53!='' && *VAR53!='' ) ++VAR53;
while ( *VAR53=='' && VAR54<7 ) { ++VAR53; ++VAR54; }
}
sscanf(VAR53,"", &VAR21 );
if ( VAR21<0 ) VAR21 = -VAR21;	
while ( *VAR53!='' && *VAR53!='' && *VAR53!='' ) ++VAR53;
if ( *VAR53=='' ) {
sscanf(++VAR53,"", &VAR23 );
if ( VAR23<0 ) VAR23 = -VAR23;
}
} else {
if ( *VAR33!='' && !FUN7(*VAR33))
strcpy(VAR7,VAR33);
}
} else if ( strcmp(VAR28,"")==0 ) {
int VAR55;
sscanf(VAR33, "", &VAR23, &VAR55, &VAR15->VAR56, VAR10 );
if ( VAR21==-1 )
VAR21 = FUN8( VAR23*VAR15->VAR56/72.0 );
} else if ( strcmp(VAR28,"")==0 ||
strcmp(VAR28,"")==0 ) {
sscanf(VAR33, "", VAR10);
} else if ( strcmp(VAR28,"")==0 && VAR21==-1 )
sscanf(VAR33, "", &VAR21 );

else if ( strcmp(VAR28,"")==0 )	
sscanf(VAR33, "", &VAR15->VAR56 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR23 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR22 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR24 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR25 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", VAR16 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", VAR17 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR15->VAR57 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR15->VAR58 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR15->VAR59 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR15->VAR60 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR15->VAR61 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, "", &VAR15->VAR62 );

else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, ""]", VAR11 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, ""]", VAR12 );
else if ( strcmp(VAR28,"")==0 )
sscanf(VAR33, ""]", VAR29 );
else if ( strcmp(VAR28,"")==0 ) {
VAR26 = 0;
if ( sscanf(VAR33, "", &VAR26 )!=1 )
sscanf(VAR33, "", &VAR26 );

} else if ( strcmp(VAR28,"")==0 ) {
strncpy(VAR7,VAR33,99);
VAR7[99]='';
} else if ( strcmp(VAR28,"")==0 || strcmp(VAR28,"")==0 ) {
strncpy(VAR9,VAR33,99);
VAR9[99]='';
} else if ( strcmp(VAR28,"")==0 ) {
strncpy(VAR30,VAR33,99);
VAR30[99]='';
} else if ( strcmp(VAR28,"")==0 ) {
strncpy(VAR31,VAR33,99);
VAR31[99]='';
} else if ( strcmp(VAR28,"")==0 ) {

strncpy(VAR13,VAR33,999);
VAR13[999]='';
VAR34 = true;
} else if ( strcmp(VAR28,"")==0 && !VAR34 ) {
char *VAR53 = VAR13+strlen(VAR13);
char *VAR63 = VAR13+1000-1; 
strncpy(VAR53,VAR33,VAR63-VAR53);
*VAR63 ='';
}
}
VAR19->VAR64 = VAR36;

VAR21 = FUN9(VAR3, VAR4, VAR24, VAR25, VAR21,
VAR22, VAR23, VAR15->VAR56, VAR20 );

*VAR6 = FUN10(VAR29,VAR26);

if ( FUN11(VAR31,"")==0 )
strcpy(VAR31,"");
else if ( FUN11(VAR31,"")==0 )
strcpy(VAR31,"");
else if ( FUN11(VAR31,"")==0 )
strcpy(VAR31,"");		
sprintf(VAR8,"", VAR30, VAR31 );
if ( VAR13[0]!='' && VAR13[strlen(VAR13)-1]=='' )
VAR13[strlen(VAR13)-1] = '';

if ( *VAR10!=1 && *VAR10!=2 && *VAR10!=4 && *VAR10!=8 && *VAR10!=16 && *VAR10!=32 )
FUN12( FUN13(""), *VAR10);

return( VAR21 );
}