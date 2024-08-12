struct VAR1 *FUN1(VAR2 *VAR3,
const char *VAR4,
const char *VAR5,
unsigned VAR6,
unsigned long VAR7)
{
if (!(VAR6 & VAR8))
VAR6 |= VAR9;
if (!(VAR6 & VAR10))
VAR6 |= VAR11;

struct VAR1 *VAR12 = FUN2(struct VAR1, 1);
VAR12->VAR5 = FUN3(VAR5);
VAR12->VAR6 = VAR6;
VAR12->VAR7 = VAR7;
FUN4(VAR3, FUN3(VAR4), VAR12);

return VAR12;
}