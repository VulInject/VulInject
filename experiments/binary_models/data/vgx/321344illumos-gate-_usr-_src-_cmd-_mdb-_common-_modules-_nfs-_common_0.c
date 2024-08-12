const char *
FUN1(VAR1 *VAR2)
{
char *VAR3;
size_t VAR4;
VAR5 *VAR6 = (VAR5 *)VAR2;

if (FUN2(VAR6)) {
const char *VAR7 = "";

VAR4 = 1 + FUN3(NULL, 0, VAR7, VAR6->VAR8.VAR9,
VAR6->VAR8.VAR10, VAR6->VAR8.VAR11);
VAR3 = FUN4(VAR4, VAR12 | VAR13);
(void) FUN3(VAR3, VAR4, VAR7, VAR6->VAR8.VAR9,
VAR6->VAR8.VAR10, VAR6->VAR8.VAR11);

return (VAR3);
}

if (FUN5(VAR6)) {
const char *VAR7 = "";

if ((FUN6(VAR6) == NULL) && !FUN7(VAR6))
return ("");

VAR4 = 1 + FUN3(NULL, 0, VAR7, FUN6(VAR6),
FUN7(VAR6) ? "" : "");
VAR3 = FUN4(VAR4, VAR12 | VAR13);
(void) FUN3(VAR3, VAR4, VAR7, FUN6(VAR6),
FUN7(VAR6) ? "" : "");

return (VAR3);
}

return ("");
}