static int
FUN1(int VAR1, VAR2** VAR3, const VAR4** VAR5, 
unsigned char* VAR6, size_t VAR7)
{
switch(VAR1) {
case VAR8:
case VAR9:
*VAR3 = FUN2(VAR6, VAR7);
if(!*VAR3) {
FUN3(VAR10, "");
return 0;
}
*VAR5 = FUN4();
*VAR5 = FUN5();

break;

case VAR11:
case VAR12:
case VAR13:
case VAR14:
*VAR3 = FUN6(VAR6, VAR7);
if(!*VAR3) {
FUN3(VAR10, "");
return 0;
}


if(VAR1 == VAR13)
*VAR5 = FUN7();
else
if(VAR1 == VAR14)
*VAR5 = FUN8();
else
*VAR5 = FUN5();
{ FUN3(VAR10, ""); return 0; }
break;

case VAR15:
*VAR3 = FUN6(VAR6, VAR7);
if(!*VAR3) {
FUN3(VAR10, "");
return 0;
}
*VAR5 = FUN9();

break;
case VAR16:
*VAR3 = FUN10(VAR6, VAR7);
if(!*VAR3) {
FUN3(VAR10, ""
"");
return 0;
}
*VAR5 = FUN11("");
if(!*VAR5) {
FUN3(VAR10, ""
"");
return 0;
}
break;
case VAR17:
*VAR3 = FUN12(VAR6, VAR7,
VAR17);
if(!*VAR3) {
FUN3(VAR10, ""
"");
return 0;
}
*VAR5 = &VAR18;
*VAR5 = FUN7();
break;
case VAR19:
*VAR3 = FUN12(VAR6, VAR7,
VAR19);
if(!*VAR3) {
FUN3(VAR10, ""
"");
return 0;
}
*VAR5 = &VAR20;
*VAR5 = FUN13();
break;
case VAR21:
*VAR3 = FUN14(VAR6, VAR7);
if(!*VAR3) {
FUN3(VAR10, ""
"");
return 0;
}
*VAR5 = NULL;
break;
case VAR22:
*VAR3 = FUN15(VAR6, VAR7);
if(!*VAR3) {
FUN3(VAR10, ""
"");
return 0;
}
*VAR5 = NULL;
break;
default:
FUN3(VAR10, "", 
VAR1);
return 0;
}
return 1;
}