static void
FUN1(char *VAR1, t_scalar_t VAR2)
{
if (VAR3) {
if (VAR3 & 2)
FUN2(VAR4, VAR1, VAR2);
if (VAR3 & 4)
(void) FUN3(VAR5, -1, 0, VAR6 | VAR7,
VAR1, VAR2);
else
(void) FUN3(VAR5, -1, 0, VAR6, VAR1, VAR2);
}
}