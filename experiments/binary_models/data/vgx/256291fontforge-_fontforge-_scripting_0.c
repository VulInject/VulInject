enum VAR1 FUN1(VAR2 *VAR3) {
int VAR4, VAR5;
enum token_type VAR6 = VAR7;

if ( VAR3->VAR8 ) {
VAR3->VAR8 = false;
return( VAR3->VAR6 );
}
do {
VAR4 = FUN2(VAR3);
VAR5 = FUN2(VAR3); FUN3(VAR5,VAR3);
if ( FUN4(VAR4) || VAR4=='' || VAR4=='' || (VAR4=='' && !FUN5(VAR5)) || VAR4=='' ) {
char *VAR9 = VAR3->VAR10, *VAR11 = VAR3->VAR10+VAR12;
int VAR13 = false;
while ( (FUN6(VAR4) || VAR4=='' || VAR4=='' || VAR4=='' || VAR4=='' ) && VAR9<VAR11 ) {
*VAR9++ = VAR4;
VAR4 = FUN2(VAR3);
}
*VAR9 = '';
while ( FUN6(VAR4) || VAR4=='' || VAR4=='' || VAR4=='' ) {
VAR4 = FUN2(VAR3);
VAR13 = true;
}
FUN3(VAR4,VAR3);
VAR6 = VAR14;
if ( VAR13 )
FUN7( VAR3, "" );
else {
int VAR15;
for ( VAR15=0; VAR16[VAR15].VAR17!=NULL; ++VAR15 )
if ( strcmp(VAR16[VAR15].VAR17,VAR3->VAR10)==0 ) {
VAR6 = VAR16[VAR15].VAR6;
break;
}
}
} else if ( FUN5(VAR4) || VAR4=='' ) {
int VAR18=0;
double VAR19 = 0, VAR20, VAR21;
VAR6 = VAR22;
VAR5 = FUN2(VAR3); FUN3(VAR5,VAR3);
if ( VAR4!='' || VAR5=='' ) {
while ( FUN5(VAR4)) {
VAR18 = 10*VAR18+(VAR4-'');
VAR4 = FUN2(VAR3);
}
VAR19 = VAR18;
if ( VAR4=='' ) {
VAR6 = VAR23;
VAR20 = 0;
VAR21 = 1;
VAR4 = FUN2(VAR3);
while ( FUN5(VAR4)) {
VAR20 = 10*VAR20+(VAR4-'');
VAR21 *= 10;
VAR4 = FUN2(VAR3);
}
VAR19 = VAR18+(VAR20/VAR21);
}
if ( VAR4=='' || VAR4=='' ) {
int VAR24=1, VAR25=0;
VAR6 = VAR23;
VAR4 = FUN2(VAR3);
if ( VAR4=='' )
VAR4 = FUN2(VAR3);
else if ( VAR4=='' ) {
VAR24 = -1;
VAR4 = FUN2(VAR3);
}
while ( FUN5(VAR4)) {
VAR25 = 10*VAR25+(VAR4-'');
VAR4 = FUN2(VAR3);
}
if ( VAR24<0 ) {
while ( VAR25>0 ) {
VAR19 /= 10.0;
--VAR25;
}
} else {
while ( VAR25>0 ) {
VAR19 *= 10.0;
--VAR25;
}
}
}
} else if ( FUN5(VAR4=FUN2(VAR3)) ) {
while ( FUN5(VAR4) && VAR4<'' ) {
VAR18 = 8*VAR18+(VAR4-'');
VAR4 = FUN2(VAR3);
}
} else if ( VAR4=='' || VAR4=='' || VAR4=='' || VAR4=='' ) {
if ( VAR4=='' || VAR4=='' ) VAR6 = VAR26;
VAR4 = FUN2(VAR3);
while ( FUN5(VAR4) || (VAR4>='' && VAR4<='') || (VAR4>=''&&VAR4<='')) {
if ( FUN5(VAR4))
VAR4 -= '';
else if ( VAR4>='' && VAR4<='' )
VAR4 += 10-'';
else
VAR4 += 10-'';
VAR18 = 16*VAR18+VAR4;
VAR4 = FUN2(VAR3);
}
}
FUN3(VAR4,VAR3);
if ( VAR6==VAR23 ) {
VAR3->VAR27.VAR28.VAR19 = VAR19;
VAR3->VAR27.VAR29 = VAR30;
} else {
VAR3->VAR27.VAR28.VAR31 = VAR18;
VAR3->VAR27.VAR29 = VAR6==VAR22 ? VAR32 : VAR33;
}
} else if ( VAR4==''''"' ) {
int VAR34 = VAR4;
char *VAR9 = VAR3->VAR10, *VAR11 = VAR3->VAR10+VAR12;
int VAR13 = false;
VAR4 = FUN2(VAR3);
while ( VAR4!=VAR35 && VAR4!='' && VAR4!='' && VAR4!=VAR34 ) {
if ( VAR4=='' ) {
VAR4=FUN2(VAR3);
if ( VAR4=='' || VAR4=='' ) {
FUN3(VAR4,VAR3);
VAR4 = '';
} else if ( VAR4==VAR35 )
VAR4 = '';
else if ( VAR4=='' )
VAR4 = '';
}
if ( VAR9<VAR11 )
*VAR9++ = VAR4;
else
VAR13 = true;
VAR4 = FUN2(VAR3);
}
*VAR9 = '';
if ( VAR4=='' || VAR4=='' )
FUN3(VAR4,VAR3);
VAR6 = VAR36;
if ( VAR13 )
FUN7( VAR3, "" );
} else switch( VAR4 ) {
case VAR35:
VAR6 = VAR37;
break;
case '': case '':

break;
case '':

while ( (VAR4=FUN2(VAR3))!=VAR35 && VAR4!='' && VAR4!='' );
if ( VAR4=='' || VAR4=='' )
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR38;
break;
case '':
VAR6 = VAR39;
break;
case '':
VAR6 = VAR40;
break;
case '':
VAR6 = VAR41;
break;
case '':
VAR6 = VAR42;
break;
case '':
VAR6 = VAR43;
break;
case '': case '': case '':
VAR6 = VAR44;
break;
case '':
VAR6 = VAR45;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR46;
else if ( VAR4=='' )
VAR6 = VAR47;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR48;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR49;
else if ( VAR4=='' )
VAR6 = VAR50;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR51;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR52;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR53;
break;
case '':
VAR6 = VAR54;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR55;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR56;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR57;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR4=FUN2(VAR3);
if ( VAR4=='' ) {
;
while ( (VAR4=FUN2(VAR3))!=VAR35 && VAR4!='' && VAR4!='' );
if ( VAR4=='' || VAR4=='' )
FUN3(VAR4,VAR3);
} else if ( VAR4=='' ) {
int VAR58=false;
VAR4 = FUN2(VAR3);
while ( !VAR58 || VAR4!='' ) {
if ( VAR4==VAR35 )
break;
if ( VAR4=='' ) VAR58 = true;
else VAR58 = false;
VAR4 = FUN2(VAR3);
}
} else if ( VAR4=='' ) {
VAR6 = VAR59;
} else {
VAR6 = VAR60;
FUN3(VAR4,VAR3);
}
break;
case '':
VAR6 = VAR61;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR62;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR63;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR64;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR65;
break;
case '':
VAR6 = VAR66;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR67;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR68;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR69;
else
FUN3(VAR4,VAR3);
break;
case '':
VAR6 = VAR70;
VAR4=FUN2(VAR3);
if ( VAR4=='' )
VAR6 = VAR71;
else
FUN3(VAR4,VAR3);
break;
default:
FUN8( FUN9(""),
VAR3->VAR72, VAR3->VAR73, VAR4, VAR4);
FUN10(VAR3);
}
} while ( VAR6==VAR7 );

VAR3->VAR6 = VAR6;
return( VAR6 );
}