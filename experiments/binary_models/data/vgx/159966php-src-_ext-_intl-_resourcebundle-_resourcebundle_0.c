void FUN1( VAR1 *VAR2, VAR3 *VAR4 )
{
UResType               VAR5;
const VAR6*           VAR7;
const VAR8*         VAR9;
const VAR10*         VAR11;
int32_t                VAR12;
int                    VAR13;
zend_long              VAR14;
VAR3* VAR15;

VAR5 = FUN2( VAR4->VAR16 );
switch (VAR5)
{
case VAR17:
VAR7 = FUN3( VAR4->VAR16, &VAR12, &FUN4(VAR4) );
FUN5(VAR4, "");
FUN6(VAR4, (VAR6 *)VAR7, VAR12, 0);
break;

case VAR18:
VAR9 = FUN7( VAR4->VAR16, &VAR12, &FUN4(VAR4) );
FUN5(VAR4, "");
FUN8( VAR2, (char *) VAR9, VAR12 );
break;

case VAR19:
VAR14 = FUN9( VAR4->VAR16, &FUN4(VAR4) );
FUN5(VAR4, "");
FUN10( VAR2, VAR14 );
break;

case VAR20:
VAR11 = FUN11( VAR4->VAR16, &VAR12, &FUN4(VAR4) );
FUN5(VAR4, "");
FUN12( VAR2 );
for (VAR13=0; VAR13<VAR12; VAR13++) {
FUN13( VAR2, VAR11[VAR13] );
}
break;

case VAR21:
case VAR22:
FUN14( VAR2, VAR23 );
VAR15 = FUN15(VAR2);
VAR15->VAR24 = VAR4->VAR16;
VAR4->VAR16 = NULL;
FUN16(FUN17(VAR4));
break;

default:
FUN18(FUN17(VAR4), VAR25, "", 0);
VAR26;
break;
}
}