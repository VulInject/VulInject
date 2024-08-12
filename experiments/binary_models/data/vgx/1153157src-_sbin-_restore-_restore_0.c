long
FUN1(char *VAR1, ino_t VAR2, int VAR3)
{
long VAR4 = VAR5 ? VAR6 : VAR7;
struct VAR8 *VAR9;

if (FUN2(VAR2, VAR10) == 0)
return (VAR4);
VAR9 = FUN3(VAR1);
if (VAR9 != NULL) {
VAR9->VAR11 &= ~VAR12;
VAR9->VAR11 |= VAR13;
if (VAR9->VAR14 != VAR15)
FUN4(VAR9);
}
return (VAR4);
}