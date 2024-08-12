static void
FUN1(VAR1 *VAR2, VAR1 *VAR3, gboolean VAR4)
{
gint VAR5;
VAR1 *VAR6;
VAR7 *VAR8;


if (VAR2 == NULL)
goto VAR9;

VAR6 = FUN2(VAR2);

while (VAR6 != NULL) {
VAR8 = (VAR7 *) VAR6->VAR10;
VAR5 = FUN3(VAR8->VAR11);
if (VAR5 == -1) {

} else {
if (FUN4(VAR5))
FUN5(VAR5, VAR4);
}

VAR6 = VAR6->VAR12;
}

VAR9:
if (VAR3 == NULL)
return;

VAR6 = FUN2(VAR3);

while (VAR6 != NULL) {
VAR8 = (VAR7 *) VAR6->VAR10;
VAR5 = FUN3(VAR8->VAR11);
if (VAR5 == -1) {

} else {
if (FUN4(VAR5)) {
FUN5(VAR5, VAR4);
FUN6(VAR5);
}
}

VAR6 = VAR6->VAR12;
}
}