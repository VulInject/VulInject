void
FUN1(scf_event_t VAR1, void *VAR2)
{
VAR3 *VAR4 = (VAR3 *)VAR2;

FUN2(VAR5, (""));
FUN3(VAR4 != NULL);
FUN4(&VAR4->VAR6);
if (!(VAR4->VAR7 & VAR8)) {

FUN5(&VAR4->VAR6);
FUN2(VAR5,
("",
VAR1));
return;
}
switch (VAR1) {
case VAR9:
FUN2(VAR5, (""));

VAR4->VAR7 |= VAR10;
FUN6(&VAR4->VAR11);
break;

case VAR12:
FUN2(VAR5, (""));

if (FUN7(VAR4)) {
FUN6(&VAR4->VAR11);
}
break;

case VAR13:
FUN2(VAR5, (""));

if (FUN7(VAR4)) {
FUN6(&VAR4->VAR11);
}
break;
case VAR14:
FUN2(VAR5, (""));
VAR4->VAR7 &= ~VAR10;
VAR4->VAR7 |= VAR15;
FUN6(&VAR4->VAR11);
break;
default:
FUN8(VAR16, "");
}
FUN5(&VAR4->VAR6);
}