static void FUN1(void *VAR1, unsigned int VAR2, void *VAR3)
{
const struct VAR4 *VAR5 = VAR1;
struct VAR6 *VAR7 = (struct VAR6 *)
(unsigned long)VAR5->VAR8;

if (!VAR7) {
FUN2("");
return;
}

FUN3(VAR7, "", VAR5->VAR9);

VAR7->VAR10 = VAR5->VAR11;
VAR7->VAR12 = 1;

if (VAR5->VAR11 == 0) {
switch (VAR5->VAR9) {
case VAR13:
FUN4(VAR1);
break;

case VAR14:
case VAR15:
case VAR16:
case VAR17:
case VAR18:
case VAR19:
break;

case VAR20:
FUN5(VAR1);
break;
default:
FUN6(VAR7, "", VAR5->VAR9);
break;
}
}

FUN3(VAR7, "", VAR5->VAR9);
}