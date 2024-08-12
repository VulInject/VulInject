static void FUN1(VAR1 *VAR2)
{
int VAR3 = 0;
VAR4 *VAR5 = FUN2(VAR2);

FUN3(VAR2);

do {
VAR3 = false;
switch(VAR2->VAR6) {
case VAR7:
if (VAR2->VAR8 || VAR2->VAR9) {
VAR2->VAR6 = VAR10;
VAR3 = true;
}
break;
case VAR10:

if (!FUN4(VAR2) ) {
VAR2->VAR6 = VAR11;
FUN5(VAR2);
VAR3 = true;
}
break;
case VAR11:
if(FUN6(VAR2)) {
FUN7("", VAR5,
FUN8(VAR5->VAR12),
VAR2->VAR13);

VAR5->VAR13++;
FUN9(VAR2);
VAR3 = true;

}
break;
default:
FUN10("",
VAR2, (int)VAR2->VAR6);
}
} while(VAR3);
}