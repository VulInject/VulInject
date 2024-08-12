static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
enum idh_event VAR7 = FUN2(VAR2);

switch (VAR7) {
case VAR8:
if (FUN3(VAR2) && !FUN4(VAR2))
FUN5(!FUN6(VAR2->VAR9,
&VAR2->VAR10.VAR11),
"",
VAR12);
break;
case VAR13:
FUN7(VAR2);
break;

case VAR14:
case VAR15:
case VAR16:
default:
break;
}

return 0;
}