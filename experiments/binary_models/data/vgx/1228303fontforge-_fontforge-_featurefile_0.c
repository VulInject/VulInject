static void FUN1(struct VAR1 *VAR2) {

for (;;) {
FUN2(VAR2);
if ( VAR2->VAR3>100 )
break;
switch ( VAR2->VAR4 ) {
case VAR5:
FUN3(VAR2);
break;
case VAR6:
FUN4(VAR2);
break;
case VAR7:
FUN5(VAR2);
break;
case VAR8:
FUN6(VAR2);
break;
case VAR9:
FUN7(VAR2,false);
break;
case VAR10:
FUN8(VAR2,false);
break;
case VAR11:
FUN9(VAR2);
break;
case VAR12:
FUN10(VAR2);
break;
case VAR13:
FUN11(FUN12(""), VAR2->VAR14[VAR2->VAR15], VAR2->VAR16[VAR2->VAR15] );
FUN13(VAR2);
break;
case VAR17:
goto VAR18;
case VAR19:

if (VAR2->VAR20[0]=='')
break;
default:
FUN11(FUN12(""), VAR2->VAR20, VAR2->VAR14[VAR2->VAR15], VAR2->VAR16[VAR2->VAR15] );
++VAR2->VAR3;
goto VAR18;
}
}
VAR18:;
}