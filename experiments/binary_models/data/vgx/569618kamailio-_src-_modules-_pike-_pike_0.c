static int FUN1(void)
{
FUN2(VAR1, "");

if (FUN3(VAR2)!=0) {
FUN4("");
return -1;
}


VAR3=FUN5();
if (VAR3==0) {
FUN4("");
goto VAR4;
}

if (FUN6(VAR3)==0){
FUN4("");
goto VAR4;
}


if ( FUN7(VAR5)!=0 ) {
FUN4("");
goto VAR6;
}


VAR7 = (VAR8*)FUN8(sizeof(VAR8));
if (VAR7==0) {
FUN4("");
goto VAR9;
}
VAR7->VAR10 = VAR7->VAR11 = VAR7;


FUN9( VAR12 , 0, 1 );
FUN9( VAR13 , 0, VAR14 );


FUN10();

return 0;
VAR9:
FUN11();
VAR6:
FUN12(VAR3);
VAR4:
if (VAR3) FUN13(VAR3);
VAR3 = 0;
return -1;
}