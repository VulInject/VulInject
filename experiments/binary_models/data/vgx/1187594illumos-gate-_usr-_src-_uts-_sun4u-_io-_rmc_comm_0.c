static int
FUN1(VAR1 *VAR2, ddi_detach_cmd_t VAR3)
{
struct VAR4 *VAR5;
int VAR6;

VAR6 = FUN2(VAR2);
if ((VAR5 = FUN3(VAR2, VAR6, "")) == NULL)
return (VAR7);	

switch (VAR3) {
case VAR8:
FUN4(&VAR9);
if (VAR10 && VAR11 &&
VAR12.VAR13 != NULL) {
VAR14 = 1;
(void) VAR12.FUN5();
} else {
VAR14 = 0;
}
FUN6(&VAR9);

VAR5->VAR2 = NULL;
FUN7(VAR5);

return (VAR15);

case VAR16:

FUN4(&VAR17);
if (VAR5->VAR18 != 0) {
FUN6(&VAR17);
return (VAR7);
}

VAR5->VAR19 = VAR20;
FUN6(&VAR17);
FUN8(VAR5, VAR2, VAR6, 1, 1, 1);
return (VAR15);

default:
return (VAR7);
}
}