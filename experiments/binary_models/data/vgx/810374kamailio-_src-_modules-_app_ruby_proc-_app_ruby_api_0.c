static int FUN1()
{
VALUE VAR1, VAR2;

VAR1 = FUN2();         
FUN3(VAR3);              
VAR2 = FUN4(VAR1, FUN5(""), 0, VAR3);
if(FUN6(VAR2)!=4
|| FUN7(FUN8(VAR2), "", 4)!=0) {
FUN9("", (int)FUN6(VAR2),
FUN8(VAR2));
return 0;
}
return 1;
}