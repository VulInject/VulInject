int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

if ((VAR2->VAR5 == NULL) || (*(VAR2->VAR5) == '')) {
FUN2("");
return (-1);
}
if ((VAR4 = FUN3(VAR2->VAR5)) == NULL) {
FUN2("", VAR2->VAR5);
FUN4();
return (-1);
}
if (FUN5(VAR4->VAR6) == NULL) {
FUN2("", VAR4->VAR6);
FUN6();
FUN4();
return (-1);
}
VAR2->VAR7 = VAR4->VAR8;
VAR2->VAR9 = VAR4->VAR6;
VAR2->VAR10 = FUN7(VAR4->VAR11);
FUN6();
FUN4();
return (0);
}