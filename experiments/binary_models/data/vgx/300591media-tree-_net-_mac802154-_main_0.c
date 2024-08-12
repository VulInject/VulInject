static void FUN1(unsigned long VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
struct VAR4 *VAR5;

while ((VAR5 = FUN2(&VAR3->VAR6))) {
switch (VAR5->VAR7) {
case VAR8:

VAR5->VAR7 = 0;
FUN3(VAR3, VAR5);
break;
default:
FUN4(1, "",
VAR5->VAR7);
FUN5(VAR5);
break;
}
}
}