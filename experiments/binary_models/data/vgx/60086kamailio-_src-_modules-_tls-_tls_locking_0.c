int FUN1()
{


VAR1=FUN2();
if (VAR1<0){
FUN3("", VAR1);
VAR1=0;
}
if (VAR1){
if (FUN4()!=NULL) {
FUN3("");
return -1;
}
VAR2=FUN5(VAR1);
if (VAR2==0){
FUN3("",
VAR1);
goto VAR3;
}
if (FUN6(VAR2)==0){
FUN3("", VAR1);
FUN7(VAR2);
VAR2=0;
VAR1=0;
goto VAR3;
}
FUN8(VAR4);
}


FUN9(VAR5);
FUN10(VAR6);
FUN11(VAR7);


FUN12(VAR8);



return 0;
VAR3:
FUN13();
return -1;

return 0;
}