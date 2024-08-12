VAR1*
FUN1(void)
{

VAR2* VAR3 = FUN2(VAR4);
VAR3 = FUN3(VAR3, VAR5);
VAR2* VAR6 = VAR3;


while (VAR6) {
if (VAR7 == FUN4(VAR6->VAR8)) {
break;
}
VAR6 = FUN5(VAR6);
}


VAR6 = FUN5(VAR6);
if (VAR6) {
int VAR9 = FUN4(VAR6->VAR8);
FUN6(VAR3);
return FUN7(VAR9);

} else {
FUN6(VAR3);
return FUN8();
}
}