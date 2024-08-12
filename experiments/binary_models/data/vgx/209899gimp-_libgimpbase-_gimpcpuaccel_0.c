FUN1 (void)
{
guint32 VAR1 = 0;

{
guint32 VAR2, VAR3, VAR4, VAR5;

FUN2 (1, VAR2, VAR3, VAR4, VAR5);

if ((VAR5 & VAR6) == 0)
return 0;

VAR1 = VAR7;

if (VAR5 & VAR8)
VAR1 |= VAR9 | VAR10;

if (VAR5 & VAR11)
VAR1 |= VAR12;

if (VAR4 & VAR13)
VAR1 |= VAR14;

if (VAR4 & VAR15)
VAR1 |= VAR16;

if (VAR4 & VAR17)
VAR1 |= VAR18;

if (VAR4 & VAR19)
VAR1 |= VAR20;

if (VAR4 & VAR21)
VAR1 |= VAR22;
}

return VAR1;
}