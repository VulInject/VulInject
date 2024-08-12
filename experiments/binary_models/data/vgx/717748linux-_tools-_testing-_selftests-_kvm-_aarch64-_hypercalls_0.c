static void FUN1(struct VAR1 **VAR2, struct VAR3 **VAR4)
{
int VAR5 = VAR6;

FUN2("", VAR5);


VAR6++;
FUN3(*VAR2, VAR6);

switch (VAR5) {
case VAR7:
FUN4(*VAR4);
break;
case VAR8:

FUN5(*VAR2);
*VAR2 = FUN6(VAR4);
break;
case VAR9:
case VAR10:
break;
default:
FUN7("", VAR5);
}
}