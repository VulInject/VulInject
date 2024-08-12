static int
FUN1(krb5_context VAR1, VAR2 *VAR3, char *VAR4)
{
int VAR5;

FUN2("",
VAR6, FUN3(VAR3->VAR7), VAR3->VAR8, VAR4);

VAR5 = FUN4(&VAR3->VAR9, VAR4, 0, NULL, 0);

FUN2("", VAR6,
VAR5 == VAR10 ? "" : "");

return (VAR5 == 0 ? 1: 0);
}