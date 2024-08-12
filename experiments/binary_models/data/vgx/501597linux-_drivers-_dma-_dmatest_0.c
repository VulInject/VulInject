static void FUN1(u8 VAR1, u8 VAR2, unsigned int VAR3,
unsigned int VAR4, bool VAR5, bool VAR6)
{
u8		VAR7 = VAR1 ^ VAR2;
u8		VAR8 = VAR2 | FUN2(VAR4, VAR6);
const char	*VAR9 = VAR10->VAR11;

if (VAR5)
FUN3("",
VAR9, VAR3, VAR8, VAR1);
else if ((VAR2 & VAR12)
&& (VAR7 & (VAR12 | VAR13)))
FUN3("",
VAR9, VAR3, VAR8, VAR1);
else if (VAR7 & VAR14)
FUN3("",
VAR9, VAR3, VAR8, VAR1);
else
FUN3("",
VAR9, VAR3, VAR8, VAR1);
}