static void FUN1(VAR1 *VAR2) {
VAR3 *VAR4 = VAR2->VAR5->VAR4, *VAR6 = VAR4;
VAR7 *VAR8 = VAR2->VAR5->VAR8;
VAR9 *VAR10;
int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
SplineChar VAR18;
VAR19 *VAR20, *VAR21;
VAR22 *VAR23;
VAR24 *VAR25;
char *VAR26, *VAR27;
struct VAR28 *VAR29;

if ( VAR6->VAR30!=NULL ) VAR6 = VAR6->VAR30;
else if ( VAR6->VAR31!=NULL ) VAR6 = VAR6->VAR31->VAR32;

VAR16 = FUN2(VAR2);
VAR17 = VAR8->VAR8[VAR16];
VAR10 = VAR17==-1 ? NULL : VAR4->VAR33[VAR17];
if ( VAR10==NULL )
VAR10 = FUN3(&VAR18,VAR4,VAR8,VAR16);

if ( *VAR2->VAR34.VAR35[1].VAR36.VAR37=='' )
VAR29 = NULL;
else {
VAR29 = FUN4(VAR4,VAR2->VAR34.VAR35[1].VAR36.VAR37);
if ( VAR29==NULL )
FUN5(VAR2,"",VAR2->VAR34.VAR35[1].VAR36.VAR37);
}

for ( VAR11=0; VAR11<2; ++VAR11 ) {
VAR14 = 0;
for ( VAR23 = VAR10->VAR38; VAR23!=NULL; VAR23=VAR23->VAR39 ) {
if ( VAR23->VAR40==VAR41 )
continue;
if ( VAR23->VAR42 == VAR29 || VAR29==NULL ) {
if ( VAR11 ) {
VAR20->VAR35[VAR14].VAR40 = VAR43;
VAR20->VAR35[VAR14].VAR36.VAR44 = VAR21 = FUN6(-1);
switch ( VAR23->VAR40 ) {
default:
free(VAR21);
VAR20->VAR35[VAR14].VAR40 = VAR45;


FUN7(FUN8(""), VAR23->VAR40 );
break;
case VAR46:
VAR21->argc = 6;
VAR21->VAR35 = calloc(7,sizeof(VAR47));
VAR21->VAR35[1].VAR36.VAR37 = copy("");
for ( VAR13=2; VAR13<6; ++VAR13 ) {
VAR21->VAR35[VAR13].VAR40 = VAR48;
VAR21->VAR35[VAR13].VAR36.VAR49 =
(&VAR23->VAR36.VAR50.VAR51)[(VAR13-2)];
}
break;
case VAR52:
VAR21->argc = 11;
VAR21->VAR35 = calloc(11,sizeof(VAR47));
VAR21->VAR35[1].VAR36.VAR37 = copy("");
VAR21->VAR35[2].VAR40 = VAR53;
VAR21->VAR35[2].VAR36.VAR37 = copy(VAR23->VAR36.VAR54.VAR55);
for ( VAR13=3; VAR13<11; ++VAR13 ) {
VAR21->VAR35[VAR13].VAR40 = VAR48;
VAR21->VAR35[VAR13].VAR36.VAR49 =
(&VAR23->VAR36.VAR54.VAR56[(VAR13-3)/4].VAR51)[(VAR13-3)&3];
}
break;
case VAR57:
VAR21->argc = 3;
VAR21->VAR35 = calloc(4,sizeof(VAR47));
VAR21->VAR35[1].VAR36.VAR37 = copy("");
VAR21->VAR35[2].VAR40 = VAR53;
VAR21->VAR35[2].VAR36.VAR37 = copy(VAR23->VAR36.VAR58.VAR59);
break;
case VAR60:
case VAR61:
case VAR62:
for ( VAR26=VAR23->VAR36.VAR63.VAR64, VAR15=1; *VAR26; ++VAR26 ) {
if ( *VAR26=='' ) {
++VAR15;
while ( VAR26[1]=='' ) ++VAR26;
}
}
VAR21->argc = 2+VAR15;
VAR21->VAR35 = calloc(2+VAR15,sizeof(VAR47));
VAR21->VAR35[1].VAR36.VAR37 = copy(VAR23->VAR40==VAR60?"":
VAR23->VAR40==VAR61?"":
"");
for ( VAR26=VAR23->VAR36.VAR63.VAR64, VAR15=0; *VAR26; ) {
while ( *VAR26=='' ) ++VAR26;
if ( *VAR26=='' )
break;
VAR27 = VAR26;
while ( *VAR26!='' && *VAR26!='' ) ++VAR26;
VAR21->VAR35[2+VAR15].VAR40 = VAR53;
VAR21->VAR35[2+VAR15].VAR36.VAR37 = FUN9(VAR27,VAR26-VAR27);
++VAR15;
}
break;
}
if ( VAR20->VAR35[VAR14].VAR40==VAR43 ) {
VAR21->VAR35[0].VAR40 = VAR53;
VAR21->VAR35[0].VAR36.VAR37 = copy(VAR23->VAR42->VAR65);
VAR21->VAR35[1].VAR40 = VAR53;
}
}
++VAR14;
}
}
for ( VAR12=0; VAR12<2; ++VAR12 ) {
if ( VAR29==NULL || VAR29->VAR66->VAR67==VAR68 ) {
for ( VAR25= (VAR12==0 ? VAR10->VAR69 : VAR10->VAR70); VAR25!=NULL; VAR25=VAR25->VAR39 ) {
if ( VAR29==NULL || VAR29==VAR25->VAR42 ) {
if ( VAR11 ) {
VAR20->VAR35[VAR14].VAR40 = VAR43;
VAR20->VAR35[VAR14].VAR36.VAR44 = VAR21 = FUN6(11);
VAR21->VAR35[0].VAR40 = VAR53;
VAR21->VAR35[0].VAR36.VAR37 = copy(VAR25->VAR42->VAR65);
VAR21->VAR35[1].VAR40 = VAR53;
VAR21->VAR35[1].VAR36.VAR37 = copy("");
VAR21->VAR35[2].VAR40 = VAR53;
VAR21->VAR35[2].VAR36.VAR37 = copy(VAR25->VAR10->VAR71);
for ( VAR13=3; VAR13<11; ++VAR13 ) {
VAR21->VAR35[VAR13].VAR40 = VAR48;
VAR21->VAR35[VAR13].VAR36.VAR49 = 0;
}
if ( VAR12 )
VAR21->VAR35[6].VAR36.VAR49 = VAR25->VAR72;
else
VAR21->VAR35[5].VAR36.VAR49 = VAR25->VAR72;
}
++VAR14;
}
}
}
}
if ( VAR11==0 ) {
VAR20 = FUN6(VAR14);
}
}
VAR2->VAR73.VAR40 = VAR74;
VAR2->VAR73.VAR36.VAR44 = VAR20;
}