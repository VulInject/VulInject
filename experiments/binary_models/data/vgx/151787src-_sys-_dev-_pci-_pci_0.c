int
FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4 = 0;

switch (VAR3) {
case VAR5:
VAR4 = FUN2(VAR2, VAR3);
FUN3((struct VAR6 *)VAR2);
break;
case VAR7:
FUN4((struct VAR6 *)VAR2);
VAR4 = FUN2(VAR2, VAR3);
break;
case VAR8:
VAR4 = FUN2(VAR2, VAR3);
FUN5((struct VAR6 *)VAR2);
break;
default:
VAR4 = FUN2(VAR2, VAR3);
break;
}
return (VAR4);
}