int
FUN1(int VAR1, int VAR2)
{
static int		 VAR3 = 0;
struct VAR4		*VAR5;
struct VAR6		*VAR7;

if (!VAR3) {
FUN2((VAR8 *)&VAR9, "");
VAR3 = 1;
}

if ((VAR5 = FUN3()) == NULL || (VAR7 = FUN4(VAR5, VAR10)) == NULL)
return (VAR11);
VAR7->VAR12 = VAR5->VAR13; 
VAR7->VAR14 = VAR5->VAR15;
VAR5->VAR16[0] = FUN5("");
VAR5->VAR16[1] = FUN5("");
VAR5->VAR17 = 1;

return (VAR18);
}