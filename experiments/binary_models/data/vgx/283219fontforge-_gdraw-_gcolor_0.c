static int FUN1(GWindow VAR1, VAR2 *VAR3) {
struct VAR4 *VAR5 = FUN2(VAR1);
GRect VAR6;
if ( VAR3->VAR7==VAR8 ) {
GRect VAR9;
FUN3(VAR5->VAR10,&VAR6);
if ( VAR5->VAR11==NULL || 
FUN4(VAR5->VAR11)!=VAR6.VAR12 ||
FUN5(VAR5->VAR11)!=VAR6.VAR13 ) {
if ( VAR5->VAR11!=NULL )
FUN6(VAR5->VAR11);
VAR5->VAR11 = FUN7(VAR6.VAR13,VAR6.VAR12);
}
FUN8(VAR1,VAR5->VAR11,NULL,0,0);
if ( VAR5->VAR14.VAR15 ) {
double VAR16 = FUN9(VAR5->VAR14.VAR17*VAR18/180.);
double VAR19 = FUN10(VAR5->VAR14.VAR17*VAR18/180.);
int VAR20 = (int) FUN11(VAR5->VAR14.VAR16*(VAR6.VAR12-1)*VAR16/2.0) + VAR6.VAR12/2;
int VAR21 = (int) FUN11(VAR5->VAR14.VAR16*(VAR6.VAR13-1)*VAR19/2.0) + VAR6.VAR13/2;
VAR9.VAR21 = VAR21-3; VAR9.VAR20 = VAR20-3;
VAR9.VAR13 = VAR9.VAR12 = 7;
FUN12(VAR1,&VAR9,0x000000);
}
} else if ( VAR3->VAR7 == VAR22 ||
(VAR3->VAR7==VAR23 && VAR5->VAR24) ||
VAR3->VAR7==VAR25 ) {
Color VAR26;
struct hslrgba VAR27;
FUN3(VAR5->VAR10,&VAR6);
if ( VAR3->VAR28.VAR29.VAR20>=0 && VAR3->VAR28.VAR29.VAR20<VAR6.VAR12 &&
VAR3->VAR28.VAR29.VAR21>=0 && VAR3->VAR28.VAR29.VAR21<VAR6.VAR13 ) {
VAR26 = FUN13(VAR5->VAR11,VAR3->VAR28.VAR29.VAR21,VAR3->VAR28.VAR29.VAR20);
VAR27.VAR30 = ((VAR26>>16)&0xff)/255.;
VAR27.VAR31 = ((VAR26>>8)&0xff)/255.;
VAR27.VAR32 = ((VAR26   )&0xff)/255.;
FUN14((struct VAR33 *) &VAR27);
VAR5->VAR14.VAR17 = VAR27.VAR17; VAR5->VAR14.VAR16 = VAR27.VAR16;
FUN15(VAR5);
FUN16(VAR5->VAR34,NULL,false);
FUN16(VAR5->VAR10,NULL,false);
}
if ( VAR3->VAR7 == VAR22 )
VAR5->VAR24 = true;
else if ( VAR3->VAR7 == VAR25 )
VAR5->VAR24 = false;
} else if ( VAR3->VAR7==VAR35 ) {
FUN16(VAR1,NULL,false);
} else if ( VAR3->VAR7 == VAR36 ) {
return( false );
}
return( true );
}