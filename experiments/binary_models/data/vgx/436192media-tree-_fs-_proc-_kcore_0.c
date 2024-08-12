static int
FUN1(unsigned long VAR1, unsigned long VAR2, void *VAR3)
{
struct VAR4 *VAR5 = (struct VAR4 *)VAR3;
struct VAR6 *VAR7;

VAR7 = FUN2(sizeof(*VAR7), VAR8);
if (!VAR7)
return -VAR9;
VAR7->VAR10 = (unsigned long)FUN3((VAR1 << VAR11));
VAR7->VAR12 = VAR2 << VAR11;


if (VAR7->VAR10 < (unsigned long) FUN3(0))
goto VAR13;


if (VAR14 - VAR7->VAR10 < VAR7->VAR12)
VAR7->VAR12 = VAR14 - VAR7->VAR10;


if (VAR15 > (unsigned long)FUN3(0)) {
if (VAR7->VAR10 > VAR15)
goto VAR13;
if (VAR15 - VAR7->VAR10 < VAR7->VAR12)
VAR7->VAR12 = VAR15 - VAR7->VAR10;
}

VAR7->VAR16 = VAR17;
FUN4(&VAR7->VAR18, VAR5);

if (!FUN5(VAR7, VAR5)) {
FUN6(&VAR7->VAR18);
goto VAR13;
}

return 0;
VAR13:
FUN7(VAR7);
return 1;
}